#include<stdio.h>
int main(){
    char c;
    scanf("%c", &c);
    if('a'<=c && c<='z'){
       c-=32;
    }
    else{
       c+=32;  
    }
printf("%c\n",c);

    return 0;
}