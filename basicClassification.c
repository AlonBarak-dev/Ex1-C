#include <stdio.h>


int isPrime(int num){

    if (num == 1)
    {
        return 1;
    }
    if(((num > 2) && (num % 2 == 0))){
        return 0;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int factorial(int num){
    if (num == 0)
    {
        return 1;
    }
    return num * factorial(num-1);
    
}

int factorial2(int num){
    if (num == 0)
    {
        return 1;
    }
    int sum = 1;
    for(int i = 1; i<= num; i++){
        sum = sum*i;
    }
    return sum;
}

int isStrong(int num){
    int number = num;
    int sum = 0, temp = 0;
    while (number > 0)
    {
        temp = factorial2(number%10);
        number = number/10;
        sum += temp;
    }
    if(sum == num){
        return 1;
    }
    else{
        return 0;
    }
    
}