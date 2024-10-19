#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i = 0; i<t; i++){
        int x,y;
        scanf("%d %d", &x, &y);
        
         
         if(x>y){
            int temp =x;
            x= y;
            y=temp;
         }
          int res = 0;
         for(int i = x+1; i<y ; i++){
            if(i%2 !=0){
                res +=i;
            }
         }
         printf("%d\n",res);

    }

    return 0;
}