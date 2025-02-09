#include <stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int result = x&y;
    printf("%d",result);
    return 0;
}