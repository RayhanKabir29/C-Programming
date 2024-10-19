#include<stdio.h>

int main(){
    int t , i ;
    scanf("%d", &t);
    for(i = 0; i<t; i++){
        int n;
        scanf("%d", &n); 
         while(n>0){
        int digit = n%10;
        printf("%d ", digit);
         n= n/10;
        }  
        printf("\n");
    }


    return 0;
}