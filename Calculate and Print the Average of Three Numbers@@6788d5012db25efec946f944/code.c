#include <stdio.h>
int main(){
    int x,y,z,average;
    scanf("%d%d%d",&x,&y,&z);
    average = (x+y+z)/3;
    printf("Average: %.2f",average);
    return 0;

}