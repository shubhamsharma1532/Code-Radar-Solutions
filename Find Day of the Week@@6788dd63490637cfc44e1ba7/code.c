#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(1 == Monday || 2 == Tuesday || 3 == Wednesday || 4 == Thrusdy || 5 == Friday
    || 6 == Saturday || 7 == Sunday){
        printf("%d",x);
    }
    else{
        printf("Invalid");
    }
    return 0;
}