#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d%d%d";&x,&y,&z);
    if(x==y && y==z && z==x){
        printf("Equilateral");
    }
    else if(x!=y && y!=z && z!=x){
        printf("Scalene");
    }
    else{
        printf("Isosceles");
    }
    return 0;
}