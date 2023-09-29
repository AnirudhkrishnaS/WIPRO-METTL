#include<stdio.h>
#include<string.h>
int EvenOddDigitsSum(int input1 , char*input2){


int sum = 0;
    if(strcmp(input2 , "even")==0){

    
    while(input1>0){
        if((input1%10)%2 == 0){
            sum = sum+input1%10;
        }
        input1 = input1/10;
    }
    }
    else{

    

    while(input1>0){
        if((input1%10)%2 != 0){
            sum = sum+input1%10;
        }
         input1 = input1/10;
    }
    }
    return sum;
}