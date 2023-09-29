#include<stdio.h>
int small(int a , int b , int c);

int createPin(int input1 , int input2 , int input3 ){
    int i  = 0;
    int a[10];
    int rem , u , t , k , j , temp , pin , h;

    while(input1>0){
        rem = input1%10;
        a[i] = rem;
        input1 = input1/10;
        i++;
    }

    while(input2>0){
        rem = input2%10;
        a[i] = rem;
        input1 = input2/10;
        i++;
    }

    while(input3>0){
        rem = input3%10;
        a[i] = rem;
        input1 = input3/10;
        i++;
    }

u  = small(a[0] , a[3] , a[6]);
t  = small(a[1] , a[4] , a[7]);
h  = small(a[2] , a[5] , a[8]);

for(j = 0 ; j<9 ; j++){
    for(k = j+1 ; k<9 ; k++){
        if(a[j]<a[k]){
            temp = a[j];
            a[j] = a[k];
            a[k] = temp;


        }
    }
}

pin = 1000*a[0]+100*h+10*t+u;
return pin;





}

int small(int a , int b , int c){
    if(a<b && a<c)
        return a;
    else if(b<a && b<c)
         return b;
    else
         return c;
}

int main(){
    int n1 , n2 , n3 , pin;
    printf("Enter three nos");
    scanf("%d%d%d" , &n1 , &n2 , &n3 );
    pin = createPin(n1 , n2 , n3 );
    printf("%d" , pin);
    return 0;
}