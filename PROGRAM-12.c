// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
// convert it into USD.

#include<stdio.h>

int main()
{
    float INR,USD;

    printf("Enter a amount in INR: ");
    scanf("%f",&INR);

    USD=INR/76.23;

    printf("Amount is: %.2f USD",USD);

    return 0;
}

/*
    OUTPUT:
    Enter a amount in INR: 45
    Amount is: 0.59 USD
*/