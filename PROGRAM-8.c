// 8. Write a program to check whether the given number is even or odd using a bitwise
// operator.

#include<stdio.h>

int main()
{
    int num,x;

    printf("Enter a number: ");
    scanf("%d",&num);

    x = num & 1;
   
    if(x==1)
    printf("number is odd");
    else
    printf("number is even");

    return 0;
}

/*
    OUTPUT 1:
    Enter a number: 22
    number is even

    OUTPUT 2:
    Enter a number: 99
    number is odd
*/