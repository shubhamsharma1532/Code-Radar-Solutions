#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c",'A' + j - 1);
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
//     for (int i = 1; i <= n; i++) {
//         // Loop to print characters
//         for (int j = 1; j <= i; j++) {
//             printf("%c ", 'A' + j - 1); // Print characters starting from 'A'
//         }
//         // Move to the next line after each row
//         printf("\n");
//     }

//     return 0;
// }