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

// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++) {
//         // Print spaces
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         // Print stars
//         for (int k = 1; k <= (2 * i - 1); k++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }


#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1; k<=(2*i-1); k++){
            printf("*");
        }
        printf("\n");
    }
}
















