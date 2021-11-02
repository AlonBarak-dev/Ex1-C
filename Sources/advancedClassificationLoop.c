#include <stdio.h>
#include <math.h>

int length(int num){
    if (num == 0)
    {
        return 1;
    }
    int number = num, length = 0;
    while (number > 0)
    {
        length++;
        number = number/10;
    }
    return length;
    
}

int myPow(int x, int y){
    int sum = 1;
    for (int i = 0; i < y; i++)
    {
        sum = sum * x;
    }
    return sum;
    
}

int isArmstrong(int num){
    int number = num;
    int len = length(number), sum = 0;
    if (num == 0)
    {
        return 1;
    }
    while(number > 0){
        
        sum += myPow(number%10,len);
        number = number/10;
    }
    if (sum == num)
    {
        return 1;
    }
    return 0;

}

int isPalindrome(int num){
    int number = num;
    int revNumber = number%10;
    number = number/10;
    for(int i = 0; i<length(num)-1;i++){
        revNumber = revNumber*10 + (number%10);
        number = number/10;
    }
    if (num == revNumber)
    {
        return 1;
    }
    return 0;
    

}

