#include <stdio.h>

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

int recArmstrong(int num,int pow){
    if (num == 0)
    {
        return 0;
    }
    return recArmstrong(num/10,pow) + myPow(num%10,pow);
}

int isArmstrong(int num){
    int sum =  recArmstrong(num,length(num));
    if (sum == num)
    {
        return 1;
    }
    return 0;
}


int reverse(int num,int len,int sum){
    sum = sum*10 + num%10;
    if(len == 1){
        return sum;
    }
    return reverse(num/10,len-1,sum);
}

int isPalindrome(int num){
    if (num == reverse(num,length(num),0))
    {
        return 1;
    }
    return 0;
    
}