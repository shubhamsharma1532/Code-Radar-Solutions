// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     for(int i=1; i<n; i++){
//         for(int j=1; j<n; j++){
//             if(i==1 || i==n || j==1 || j==n){
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
//         }
//         printf("\n");

//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= n; j++) {  // Loop for columns
            // Print '*' if it's a border position, otherwise print space
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");  // Move to the next line
    }
    
    return 0;
}


















