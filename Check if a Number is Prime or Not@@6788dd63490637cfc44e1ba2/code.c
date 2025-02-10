#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x%x == 1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}