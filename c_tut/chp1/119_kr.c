#include <stdio.h>

#define MAXLINE 100

int _getline(char line[], int lim);
void reverse(char rline[]);

int main ()
{

    int len;
    char line[MAXLINE];

    while ((len = (_getline(line, MAXLINE))) > 0)
    {
        reverse(line);
        printf("%s", line);
    }
}

int _getline(char s[], int lim)
{
    int c, i;

    for (i=0; i < lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    
    s[i] = '\0';
    return i;
}

void reverse(char rline[])
{
    int i, j;
    char temp;

    for(i=0; rline[i] != '\0'; ++i)
    ;

    --i;

    if(rline[i]== '\n') --i;

    j = 0;

    while (j < i)
    {
        temp = rline[j];
        rline[j] = rline[i];
        rline[i] = temp;
        --i;
        ++j;
    }
}