#include<stdio.h>
#include<string.h>
int isPalinum(int input1){

 int remainder = 0 , reversed  = 0;
    int original = input1;
    while(input1>0){
        remainder = input1%10;
        reversed = reversed*10+remainder;
        input1  = input1/10;
    

    }
    if(reversed == original){
        return 2;
    }
    else{
        return 1;
    }
    
}