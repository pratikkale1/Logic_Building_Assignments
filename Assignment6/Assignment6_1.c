// Write a program which accept from user and print that name

#include<stdio.h>

int main()
{

    char Name[30];
    printf("Please enter full name\n");
    scanf("%s",&Name);

    printf("Your Name is %s",Name);

    return 0;
}