#include <stdio.h>

#define MAXLINELEN 1000 /* maximum line size */

int getaline(char line[], int maxlinelen);
void copy(char to[], char from[]);

/* print the longest line in the file */
int main()
{

    int len;
    int max;
    char line[MAXLINELEN];
    char longest[MAXLINELEN];

    max = 0;
    while ((len = getaline(line, MAXLINELEN)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) /* meaning there was a line */
    {
        printf("line: %s", longest);
        printf("len: %d\n", max);
    }

    return 0;
}

/* a, read a line into s, return length */
int getaline(char s[], int lim)
{
    int c, i;
    for(i=0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }
    if(c == '\n'){ /* if endline, add it after for */
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0'){
        ++i;
    }
}