#include <stdio.h>
#include <string.h>
int main()
{
    char str[80];
    int i;
    printf("Enter a string: ");
    gets(str);

    int result = strlen(str);
    printf("Lent of str:%d\n", result);

    for (i = 0; i <= result - 1; i++)
    {
        printf("str[%d] = %c\n", i, str[i]);
    }
    return 0;
}
