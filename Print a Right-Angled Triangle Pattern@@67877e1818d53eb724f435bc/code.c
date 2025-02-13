#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int j=n;j>=1;j--){
        for(int i=j;i>=1;i--){
            printf("* ");
        }
        printf("*");
    }
    return 0;
}