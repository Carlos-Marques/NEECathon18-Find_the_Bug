#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZEINPUT 100
#define BIGNAME 5

void bigboy(char *p)
{
    p = "BIG BOYS";
}
void smallboy(char *p)
{
    p = "small boys";
}
int main(void)
{
    char *s = malloc(sizeof(char)*sizeof(MAXSIZEINPUT));

    printf( "Enter a value :");
    scanf("%s", s);

    printf("s : %s\n", s);
    if (strlen(s) > sizeof(BIGNAME)) {
        bigboy(s);
    }
    else {
        smallboy(s);
    }
    printf("s : %s\n", s); // No change in the string getting printed.
    return 0;
}