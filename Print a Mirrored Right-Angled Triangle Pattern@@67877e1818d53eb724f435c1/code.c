#include <stdio.h>
int main(){
    int n,int;
    scanf("%d",&n);
    for(i=1; i<=n; i++);{
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}