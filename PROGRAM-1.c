
// 1. Write a program to print unit digit of a given number

#include<stdio.h>

int main()
{
    int num,u;

    printf("Enter a number to find unit digit: ");
    scanf("%d",&num);
    
     u = num%10;

     printf("Unit Digit is: %d",u);

     return 0;
}

/*
    OUTPUT:
    Enter a number to find unit digit: 24356363
    Unit Digit is: 3
*/
