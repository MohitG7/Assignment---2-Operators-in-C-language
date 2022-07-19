
// 4. Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swaping values are a = %d , b = %d ",a,b);

    return 0;
}
/*
    OUTPUT:
    Enter the value of a: 43
    Enter the value of b: 23
    After swaping values are a = 23 , b = 43
*/