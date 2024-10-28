#include<stdio.h>
int main(){
    int n;
    scanf("%d ",&n);
    int ex[n];
    for(int i = 1; i<=n; i++){
        scanf("%d", &ex[i]);
    }
    for(int i = 1; i<=n; i++){
        if(ex[i]<1){
            printf("Entry-level candidate\n");
        }
        else if(ex[i]>=1 && ex[i]<=3){
             printf("Junior candidate\n");
        }
        else if(ex[i]>=4 && ex[i]<=7){
              printf("Mid-level candidate\n");
        }
        else{
            printf("Senior candidate\n");
        }
    }

    return 0;
}