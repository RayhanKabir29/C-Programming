#include<stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);
    int a[n];
    for(i =0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int min= a[0];
    int minPos = 0;
    for(i=1; i<n; i++){
        if(a[i]<min){
            min= a[i];
            minPos = i;
        }
    }
    printf("%d %d", min, minPos+1);
    return 0;
}