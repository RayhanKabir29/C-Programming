#include<stdio.h>
int main(){
    int n;
    long long t;
    scanf("%d %lld", &n, &t);
    long long bookCount[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%lld", &bookCount[i]);
    }
    long long count = 0;
    int maxBooks = 0;
    for (int i = 0; i < n; i++)
    {
       if(count + bookCount[i]<=t){
        count = count + bookCount[i];
        maxBooks++;
       }
    }

     printf("%d", maxBooks);
    

    return 0;
}