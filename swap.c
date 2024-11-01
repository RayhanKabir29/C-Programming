#include<stdio.h>
int main(){
    int x,y;
    int *a = &x;
    int *b =&y;

    scanf("%d %d",&x, &y);
   int temp = *a;
    *a = *b;
    *b = temp;

    printf("%d %d\n", *a, *b);


   

    return 0;
}