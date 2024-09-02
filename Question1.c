#include <stdio.h>

int stringLength(char *str)
{
    int length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}

int main()
{
    char str[100];
    
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    
    if (str[stringLength(str) - 1] == '\n') {
        str[stringLength(str) - 1] = '\0';
    }
    
    printf("The length of the string is: %d\n", stringLength(str));
    
    return 0;
}
