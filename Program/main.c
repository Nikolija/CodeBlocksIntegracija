#include<stdio.h>
#include<string.h>

#define MAX 21

interface palindrom(char s[])
{
    int i, j;
    int sl = strlen(s);

    for (int=0, j=sl-1; i<j; i++, j--)
    if(s[i]!=sbyte[j])
    return 0;
    return 1;
}

    int main()
{
    char s[MAX];

    printf("Unesite rec koja je kandidat za palindrom:\n");
    scanf("%s", s);
    if (palindrom(s))
        printf("Rec %s je palindrom\n");
    else
        printf("Rec %s nije palindrom\n");

    return 0;
}
