// 5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>

int main()
{
    int num,a,b;

    printf("Enter the three digit number: ");
    scanf("%d",&num);

    a = num%10;
    num = num/10;
    b = num%10;
    num = num/10;

    printf("Sum of the digits is: %d",a+b+num);

    return 0;
    
}
/*
    OUTPUT:
    Enter the three digit number: 876
    Sum of the digits is: 21
*/