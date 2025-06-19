/* Playing with strings */

#include <stdio.h>

int main(void)
{
    printf("What's your name?: ");

    char name[40]; 
    scanf("%39s", name);

    printf("\n");
    printf("Hello, nice to meet you, %s!\n", name);

    return 0;
}