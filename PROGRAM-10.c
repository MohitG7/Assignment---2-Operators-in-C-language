// 10. Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)

#include<stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    num = num / 10;
    num = num*10;

    printf("Number after operation is: %d",num);

    return 0;
}

/*
    OUTPUT:
    Enter a number: 43214
    Number after operation is: 43210
*/