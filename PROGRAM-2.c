
// 2. Write a program to print a given number without its last digit.

#include<stdio.h>

int main()
{
    int num,x;
    printf("Enter a number: ");
    scanf("%d",&num);
   
    x = num/10;

    printf("Number without last digit is: %d",x);

    return 0;

}
/*
    OUTPUT:
    Enter a number: 12345
    Number without last digit is: 1234
*/

