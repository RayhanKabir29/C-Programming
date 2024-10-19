#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int maxSalami=0;
    for(int i =1; i<=n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>maxSalami){
            maxSalami=arr[i];
        }
    }
    for(int i = 1; i<=n; i++){
        printf("%d ",maxSalami-arr[i]);
    }
       printf("\n");
    return 0;
}