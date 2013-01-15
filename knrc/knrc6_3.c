/***********************************************************
* You can use all the programs on www.c-program-example.com
* for personal and learning purposes. For permissions to use the
* programs for commercial purposes,
* contact info@c-program-example.com
* To find more C programs, do visit www.c-program-example.com
* and browse!
* Original URL: http://www.c-program-example.com/2012/02/k-r-c-programs-exercise-6-3.html
* GitHub URL: https://github.com/snadahalli/cprograms/blob/master/knrc/knrc6_3.c
***********************************************************/

/** Write a cross-referencer program that prints a list of all words in a
* document, and, for each word, a list of the line numbers on which it
* occurs. Remove noise words like "the", "and," and so on.
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *dupstr(char *s) {
	char *p = NULL;
	if(s != NULL){
		p = malloc(strlen(s) + 1);
		if(p) {
			strcpy(p, s);
		}
	}
	return p;
}

int i_strcmp(const char *s, const char *t) {
	int diff = 0;
	char cs = 0;
	char ct = 0;

	while(diff == 0 && *s != '\0' && *t != '\0') {
		cs = tolower((unsigned char)*s);
		ct = tolower((unsigned char)*t);
		if(cs < ct) {
			diff = -1;
		}
		else if(cs > ct) {
			diff = 1;
		}
		++s;
		++t;
	}

	if(diff == 0 && *s != *t) {
		if(*s == '\0') {
			diff = -1;
		}
		else {
			diff = 1;
		}
	}

	return diff;
}

struct linelist {
	struct linelist *next;
	int line;
};

struct wordtree {
	char *word;
	struct linelist *firstline;
	struct wordtree *left;
	struct wordtree *right;
};

void printlist(struct linelist *list) {
	if(list != NULL) {
		printlist(list->next);
		printf("%6d ", list->line);
	}
}

void printtree(struct wordtree *node) {
	if(node != NULL) {
		printtree(node->left);
		printf("%18s ", node->word);
		printlist(node->firstline);
		printf("\n");
		printtree(node->right);
	}
}

struct linelist *addlink(int line) {
	struct linelist *new = malloc(sizeof *new);
	if(new != NULL) {
		new->line = line;
		new->next = NULL;
	}
	return new;
}

void deletelist(struct linelist *listnode) {
	if(listnode != NULL) {
		deletelist(listnode->next);
		free(listnode);
	}
}

void deleteword(struct wordtree **node) {
	struct wordtree *temp = NULL;
	if(node != NULL) {
		if(*node != '\0') {
			if((*node)->right != NULL) {
				temp = *node;
				deleteword(&temp->right);
			}
			if((*node)->left != NULL) {
				temp = *node;
				deleteword(&temp->left);
			}
			if((*node)->word != NULL) {
				free((*node)->word);
			}
			if((*node)->firstline != NULL) {
				deletelist((*node)->firstline);
			}
			free(*node);
			*node = NULL;
		}
	}
}

struct wordtree *addword(struct wordtree **node, char *word, int line) {
	struct wordtree *wordloc = NULL;
	struct linelist *newline = NULL;
	struct wordtree *temp = NULL;
	int diff = 0;

	if(node != NULL && word != NULL) {
		if(NULL == *node) {
			node = malloc(sizeof **node);
			if(NULL != *node) {
				(*node)->left = NULL;
				(*node)->right = NULL;
				(*node)->word = dupstr(word);
				if((*node)->word != NULL) {
					(*node)->firstline = addlink(line);
					if((*node)->firstline != NULL) {
						wordloc = *node;
					}
				}
			}
		}
		else {
			diff = i_strcmp((*node)->word, word);
			if(0 == diff) {

				newline = addlink(line);
				if(newline != NULL) {
					wordloc = *node;
					newline->next = (*node)->firstline;
					(*node)->firstline = newline;
				}	
			}
			else if(0 < diff) {
				temp = *node;
				wordloc = addword(&temp->left, word, line);
			}
			else {
				temp = *node;
				wordloc = addword(&temp->right, word, line);
			}
		}
	}

	if(wordloc == NULL) {
		deleteword(node);
	}

	return wordloc;
}


char *char_in_string(char *s, int c) {
	char *p = NULL;

	/* if there's no data, we'll stop */
	if(s != NULL) {
		if(c != '\0') {
			while(*s != '\0' && *s != c) {
				++s;
			}
			if(*s == c) {
				p = s;
			}
		}
	}
	return p;
}

char *tokenise(char **s, char *delims) {
	char *p = NULL;
	char *q = NULL;

	if(s != NULL && *s != '\0' && delims != NULL) {
		/* pass over leading delimiters */
		while(NULL != char_in_string(delims, **s)) {
			++*s;
		}
		if(**s != '\0') {
			q = *s + 1;
			p = *s;
			while(*q != '\0' && NULL == char_in_string(delims, *q)) {
				++q;
			}

			*s = q + (*q != '\0');
			*q = '\0';
		}
	}

	return p;
}

int NoiseWord(char *s)
{
	int found = 0;
	int giveup = 0;
	
char *list[] = {
	"a",
	"an",
	"and",
	"be",
	"but",
	"by",
	"he",
	"I",
	"is",
	"it",
	"off",
	"on",
	"she",
	"so",
	"the",
	"they",
	"you"
};

	int top = sizeof list / sizeof list[0] - 1;
	int bottom = 0;
	int guess = top / 2;

	int diff = 0;

	if(s != NULL) {
		while(!found && !giveup) {
			diff = i_strcmp(list[guess], s);
			if(0 == diff) {
				found = 1;
			}
			else if(0 < diff) {
				top = guess - 1;
			}
			else {
				bottom = guess + 1;
			}
			if(top < bottom) {
				giveup = 1;
			}
			else {
				guess = (top + bottom) / 2;
			}
		}
	}

	return found;
}

char *GetLine(char *s, int n, FILE *fp) {
	int c = 0;
	int done = 0;
	char *p = s;

	while(!done && --n > 0 && (c = getc(fp)) != EOF) {
		if((*p++ = c) == '\n') {
			done = 1;
		}
	}

	*p = '\0';
	if(EOF == c && p == s) {
		p = NULL;
	}
	else {
		p = s;
	}
	return p;
}

#define MAXLINE 8192

int main(void) {
	static char buffer[MAXLINE] = {0};
	char *s = NULL;
	char *word = NULL;
	int line = 0;
	int giveup = 0;
	struct wordtree *tree = NULL;

	char *delims = " \t\n\r\a\f\v!\"%^&*()_=+{}[]\\|/,.<>:;#~?";

	while(!giveup && GetLine(buffer, sizeof buffer, stdin) != NULL) {
		++line;
		s = buffer;
		while(!giveup && (word = tokenise(&s, delims)) != NULL) {
			if(!NoiseWord(word)) {
				if(NULL == addword(&tree, word, line)) {
					printf("Error adding data into memory. Giving up.\n");
					giveup = 1;
				}
			}
		} 
	}

	if(!giveup) {
		printf("%18s Line Numbers\n", "Word");
		printtree(tree);
	}

	deleteword(&tree);
	return 0;
}
