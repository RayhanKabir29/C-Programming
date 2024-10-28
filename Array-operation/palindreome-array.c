#include<stdio.h>

int main(){
    int n;
    int isPalindrome = 1;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i<n/2; i++){
        if(a[i] !=a[n-i-1]){
            isPalindrome = 0;
            break;
        }
    }
     if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
      
    return 0;
   }