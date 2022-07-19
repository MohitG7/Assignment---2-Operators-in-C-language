// 9. Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>

int main()
{
    printf("size of int: %d",sizeof(int));
    printf("\nsize of float: %d",sizeof(float));
    printf("\nsize of char: %d",sizeof(char));
    printf("\nsize of double: %d",sizeof(double));

    return 0;
}

/*
    OUTPUT:
    size of int: 4
    size of float: 4
    size of char: 1
    size of double: 8
*/