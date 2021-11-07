#include <stdio.h>
#include "NumClass.h"


int main(){

int isPrime(int num);
int isStrong(int num);
int isArmstrong(int num);
int isPalindrome(int num);

    int x = 0, y = 0;
    scanf("%d %d", &x, &y);

    if (x <= y)
    {
        printf("The Armstrong numbers are:");
    for (int  i = x; i <= y; i++)
    {
        if (isArmstrong(i) == 1)
        {
            printf(" %d",i);
        }
    }
    
    printf("\n");


    printf("The Palindromes are:");
    for (int  i = x; i <= y; i++)
    {
        if (isPalindrome(i) == 1)
        {
            printf(" %d",i);
        }
    }

    printf("\n");

    printf("The Prime numbers are:");
    for (int  i = x; i <= y; i++)
    {
        if (isPrime(i) == 1)
        {
            printf(" %d",i);
        }
    }
    
    printf("\n");

    printf("The Strong numbers are:");
    for (int  i = x; i <= y; i++)
    {
        if (isStrong(i) == 1)
        {
            printf(" %d",i);
        }
    }

    printf("\n");

    }
    
    if (x > y)
    {
        printf("The Armstrong numbers are:");
    for (int  i = y; i <= x; i++)
    {
        if (isArmstrong(i) == 1)
        {
            printf(" %d",i);
        }
    }
    
    printf("\n");


    printf("The Palindromes are:");
    for (int  i = y; i <= x; i++)
    {
        if (isPalindrome(i) == 1)
        {
            printf(" %d",i);
        }
    }

    printf("\n");

    printf("The Prime numbers are:");
    for (int  i = y; i <= x; i++)
    {
        if (isPrime(i) == 1)
        {
            printf(" %d",i);
        }
    }
    
    printf("\n");

    printf("The Strong numbers are:");
    for (int  i = y; i <= x; i++)
    {
        if (isStrong(i) == 1)
        {
            printf(" %d",i);
        }
    }

    printf("\n");

    }
    

    return 0;
}