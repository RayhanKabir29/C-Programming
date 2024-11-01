#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int *p = &a;
    int *q = &b;
    int *r = &c;

    int min = *p;
    int max = *q;

    if(*p<=*q){
        if(*p<=*r){
            min = *p;
        }
        else{
            min = *r;
        }
    }
    else{
        if(*q<=*r){
            min = *q;
        }
        else{
            min = *r;
        }
    }
    if(*p>=*q){
        if(*p>=*r){
            max = *p;
        }
        else{
            max = *r;
        }
    }
    else{
        if(*q>=*r){
            max = *q;
        }
        else{
            max = *r;
        }
    }
    printf("%d %d\n", min, max);
    return 0;
}