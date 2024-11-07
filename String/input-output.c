#include<stdio.h>
int main(){
    // char str[10] = "Abcd";
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%c", str[i]);
    // }
    char str[20];
    scanf("%[^\n]s",str);
    printf("%s", str);
    return 0;
} 