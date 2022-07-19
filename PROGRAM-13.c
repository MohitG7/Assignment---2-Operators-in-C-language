// 13. Write a program to take a three-digit number from the user and rotate its digits by
// one position towards the right.

#include<stdio.h>

int main()
{
    int num, a,b;

    printf("Enter a three digit number: ");
    scanf("%d",&num);

    a = num % 10;
    b = num / 10;
    a = a*100;
    num = a+b;

    printf("Number after rotation is: %d",num);
    return 0;
}
/*
    OUTPUT:
    Enter a three digit number: 456
    Number after rotation is: 645
*/