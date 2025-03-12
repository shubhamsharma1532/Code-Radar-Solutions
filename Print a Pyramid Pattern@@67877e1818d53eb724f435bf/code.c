// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int i=1;i<=n;i=i+2){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


#include <stdio.h>

void printPyramid(int Nrows) {
    for (int i = 1; i <= Nrows; i++) {
        // Print spaces
        for (int j = 1; j <= Nrows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n"); // Move to next line
    }
}

int main() {
    int Nrows;
    scanf("%d", &Nrows);
    printf("%d",Nrows);

    printPyramid(Nrows);

    return 0;
}
