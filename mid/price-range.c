#include<stdio.h>
int main(){
    int n, x,y;
    scanf("%d %d %d", &n, &x, &y);
    int phonePrice[n];
     int phoneCount = 0;
    for(int i = 1 ; i<=n; i++){
        scanf("%d", &phonePrice[i]);
         if(phonePrice[i]>=x && phonePrice[i]<=y){
            phoneCount ++;
         }
    }
   
   printf("%d\n", phoneCount);
    return 0;
}