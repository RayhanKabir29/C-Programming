#include<stdio.h>
#include <stdbool.h>
int main(){
    int n, i;
    bool isPrime= false;
    scanf("%d",&n);
    if(n==0 || n==1){
        isPrime = false;
    }
    for( i =2; i<= n/2 ; i++){
        if(n%i==0){
            isPrime = true;
            break;
        }
    }
    if(isPrime == false){
        printf("Yes\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}