#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d", &t);
    if(t < 1 && t > 100){
        exit(0);
    } else {
        int n[t];
        for(int i = 0; i < t; i++){
            scanf("%d", &n[i]);
        }
        for(int i = 0; i < t; i++){
            if(n[i]%3 != 0)
                printf("%d\n", 3 - n[i]%3);
            else
                printf("%d\n", 0);
        }
    }
}