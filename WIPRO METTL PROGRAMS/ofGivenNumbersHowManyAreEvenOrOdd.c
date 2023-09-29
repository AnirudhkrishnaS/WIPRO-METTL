 #include<stdio.h>
#include<string.h>
 
 
 
 
 int arr[5] = {input1 , input2 , input3 , input4 , input5};
    int count = 0  , i = 0;
    if(strcmp(input6,"even") ==0){
        for(i = 0 ; i<5 ; i++){
            if(arr[i]%2  == 0){
                count++;
            }
        }
    }
    else{
        for(i = 0 ; i<5;i++){
             if(arr[i]%2 != 0){
                count++;
            
        }
        }
    }
    
    return count;
    
}