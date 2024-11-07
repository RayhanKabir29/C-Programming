#include<stdio.h>
int main(){
    char str[20];
    int n;
    scanf("%d", &n);
    scanf("%s", str);
    int number = 0;
    for (int i = 0; i < n; i++)
    {
        const digit = str[i]-'0';
       number = number *10 + digit ;
    }
    printf("%d", number);
    return 0;
} 