// Q.1 Write a Program to find the length of a string using a Pointer.

#include<stdio.h>

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
    scanf("%[^\n]", str);

    int length = stringLength(str);

    printf("The length of a string is: %d\n", length);
}
