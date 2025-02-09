#include <stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d%d",((x>>y)&1));
    return 0;
}