/* 11. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349) */

#include<stdio.h>

int main()
{
    int num,di,res;

    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter a digit: ");
    scanf("%d",&di);

    num = num*10;
    res = num + di;

    printf("Resulting number is: %d",res);

    return 0;
}

/*
    OUTPUT:
    Enter a number: 234
    Enter a digit: 9
    Resulting number is: 2349
*/