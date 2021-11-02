#include <stdio.h>
#include "basicClassification.c"
//#include "advancedClassificationLoop.c"
#include "advancedClassificationRecursion.c"
int isPrime(int num);
int isStrong(int num);
int isArmstrong(int num);
int isPalindrome(int num);


int main(){

    int x = 0, y = 0;
    printf("please insert two values: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    printf("is prime: ");
    for (int  i = x; i <= y; i++)
    {
        if (isPrime(i) == 1)
        {
            printf("%d , ",i);
        }
    }
    
    printf("\n");

    printf("is Strong: ");
    for (int  i = x; i <= y; i++)
    {
        if (isStrong(i) == 1)
        {
            printf("%d , ",i);
        }
    }

    printf("\n");

    printf("is Armstrong: ");
    for (int  i = x; i <= y; i++)
    {
        if (isArmstrong(i) == 1)
        {
            printf("%d , ",i);
        }
    }

    printf("\n");

    printf("is Palindrome: ");
    for (int  i = x; i <= y; i++)
    {
        if (isPalindrome(i) == 1)
        {
            printf("%d , ",i);
        }
    }

    printf("\n");



    return 0;
}