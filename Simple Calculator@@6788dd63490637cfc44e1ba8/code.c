#include <stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if(x+y || x-y || x*y || x/y){
        printf("%d",x+y);
    }
    return 0;
    // else if(x-y){
    //     printf("%d",x-y);
    // }
    // else if(x*y){
    //     printf("%d",x*y);
    // }
    // else if(x/y){
    //     printf("%d",x/y);
    // }
    // else{
    //     printf("Error");
    // }

}