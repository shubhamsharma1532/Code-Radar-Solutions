#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x & 0*80000000){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}