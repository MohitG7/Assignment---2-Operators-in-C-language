// 7. Write a program to find the position of first 1 in LSB.

#include<stdio.h>
 
 int main()
 {
    int num,x,count=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    while(num != 0)
    {
        x =  num & 1;
        count++;

        if(x == 1)
        {
            printf("Position of first 1 in LSB is: %d",count);
            break;
        }
        num = num >> 1;
    }
    return 0;

 }

/*
    OUTPUT-1:
    Enter a number: 12
    Position of first 1 in LSB is: 3

    OUTPUT-2:
    Enter a number: 43
    Position of first 1 in LSB is: 1
*/