#include<stdio.h>
#include <stdbool.h>
int main(){
    int a, b;
    scanf("%d %d", &a,&b);
    bool found = false;
    for(int i = a; i<=b; i++){
        int n = i;
        bool isLucky = true;
        while(n>0){
            int last_digit= n%10;
            if(last_digit!=4 && last_digit!=7){
                isLucky = false;
                 n= n/10;
            }
            if(isLucky){
                printf("%d",i);
                found = true;
            }
            if (!found) {
            printf("-1");  
    }

        }
    }
    return 0;
}