#include<stdio.h>
#include <string.h>
int main(){
    char S1[1000], S2[1000], S3[1000];
    scanf("%s %s %s", S1, S2, S3);

    char *minStr = S1;
    if (strcmp(S2, minStr) < 0) {
        minStr = S2;
    }
    if (strcmp(S3, minStr) < 0) {
        minStr = S3;
    }
    char *maxStr = S1;
    if (strcmp(S2, maxStr) > 0) {
        maxStr = S2;
    }
    if (strcmp(S3, maxStr) > 0) {
        maxStr = S3;
    }
     printf("%s\n", minStr);
    printf("%s\n", maxStr);
    
    return 0;
}