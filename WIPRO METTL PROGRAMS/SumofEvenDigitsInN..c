#include<stdio.h>
#include<string.h>
int EvenDigirSum(int input1){

int sum = 0;
    while(input1>0){
        if((input1%10)%2 == 0 ){
            sum = sum+input1%10;
        }
        
        input1 = input1/10;
        
    }
    return sum;
    }