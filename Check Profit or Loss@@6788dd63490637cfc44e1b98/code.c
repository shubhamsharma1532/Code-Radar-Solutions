#include <stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if(y>x){
        printf("Profit");
    }
    else if(x>y){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
}