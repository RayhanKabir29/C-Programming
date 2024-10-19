#include<stdio.h>
int main(){
    int n;
    int countZero = 0;
    int countOne = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){
            countZero ++;
        }
         else if(arr[i]==1){
            countOne ++;
        }
        
       
    }
    
 printf("%d %d ",countZero,  countOne);

    return 0;

}