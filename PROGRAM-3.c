
// 3. Write a program to swap values of two int variables.

#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("After swaping value is a = %d and b = %d ",a,b);

    return 0;
}

/*
    OUTPUT:
    Enter the value of a: 55
    Enter the value of b: 32
    After swaping value is a = 32 and b = 55
*/