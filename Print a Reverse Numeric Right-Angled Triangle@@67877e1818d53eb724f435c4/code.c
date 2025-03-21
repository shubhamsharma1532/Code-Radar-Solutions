#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>

// int main() {
//     int n;

//     scanf("%d", &n);

//     // Loop for each row
//     for (int i = n; i >= 1; i--) {
//         // Print numbers
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//         // Move to the next line after each row
//         printf("\n");
//     }

//     return 0;
// }