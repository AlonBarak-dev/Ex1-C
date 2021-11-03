#include <stdio.h>
#include "NumClass.h"


int main(){

int isPrime(int num);
int isStrong(int num);
int isArmstrong(int num);
int isPalindrome(int num);

    int x = 0, y = 0;
    printf("please insert the smaller value: \n");
    scanf("%d", &x);
    printf("please insert the bigger value: \n");
    scanf("%d", &y);

    printf("The prime numbers are: ");
    for (int  i = x; i <= y; i++)
    {
        if (isPrime(i) == 1)
        {
            printf("%d  ",i);
        }
    }
    
    printf("\n");

    printf("The strong numbers are: ");
    for (int  i = x; i <= y; i++)
    {
        if (isStrong(i) == 1)
        {
            printf("%d  ",i);
        }
    }

    printf("\n");

    printf("The Armstrong numbers are: ");
    for (int  i = x; i <= y; i++)
    {
        if (isArmstrong(i) == 1)
        {
            printf("%d  ",i);
        }
    }

    printf("\n");

    printf("The Palindrome numbers are: ");
    for (int  i = x; i <= y; i++)
    {
        if (isPalindrome(i) == 1)
        {
            printf("%d  ",i);
        }
    }

    printf("\n");



    return 0;
}