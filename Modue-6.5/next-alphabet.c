#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c>='a' && c<='z'){
        if(c=='z'){
            printf("a\n");
        }
        else{
        printf("%c\n", c+1);
        }
       
    }
    
    else{
    printf("Invalid input\n");
    }


    return 0;
}