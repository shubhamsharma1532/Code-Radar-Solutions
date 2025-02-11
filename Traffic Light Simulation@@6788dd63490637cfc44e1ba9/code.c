#include <stdio.h>
int main(){
    char ch;
    scanf("%c",ch);
    if(R == 'stop'){
        printf("Stop")
    }
    else if(G == 'Go'){
        printf("Go");
    }
    else if(Y == 'Slow Down'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}