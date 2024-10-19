#include<stdio.h>

int main(){
    int n, first_digit, second_digit;
    scanf("%d", &n);
    first_digit = n/10;
    second_digit = n%10;
    if(second_digit != 0){
        if(first_digit%second_digit == 0 || second_digit%first_digit==0){
        printf("YES\n");
    }
    else{
         printf("NO\n");
    }
    }
     if(second_digit == 0){
         printf("YES\n");
     }

    return 0;
}