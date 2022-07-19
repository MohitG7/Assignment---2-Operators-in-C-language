// 6. Write a program which takes a character as an input and displays its ASCII code.

#include<stdio.h>

int main()
{
    char alph;

    printf("Enter a character: ");
    scanf("%c",&alph);
    printf("ASCII code of character is: %d",alph);

    return 0;
}
/*
    OUTPUT 1:
    Enter a character: a
    ASCII code of character is: 97

    OUTPUT 2:
    Enter a character: A
    ASCII code of character is: 65
*/