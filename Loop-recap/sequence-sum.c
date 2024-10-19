#include <stdio.h>

int main() {
    int n, m;
    
    while (1) {
        scanf("%d %d", &n, &m);
        if (n <= 0 || m <= 0) {
            break;
        }
        int temp = m;
        if(n>m){
            m = n;
            n = temp;

        }

        int sum = 0;
        for (int i = n; i <= m; i++) {
            printf("%d ", i);
            sum += i;
        }
        
        printf("sum =%d\n",sum);
    }
    
    return 0;
}
