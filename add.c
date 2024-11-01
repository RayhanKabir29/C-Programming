#include<stdio.h>
int main(){
    int x,y;
    int *a = &x;
    int *b =&y;

    scanf("%d %d",&x, &y);
    int sum = *a + *b ;

    printf("%d\n", sum);

    return 0;
}