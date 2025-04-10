// #include <stdio.h>
// int main(){
//     int n,i;
//     scanf("%d",&n);
//     for(i=1; i<=n; i++);{
//         for(int j=1; j<=n-i; j++){
//             printf(" ");
//         }
//         for(int k=1; k<=i; k++){
//             printf("*\n");
//         }
//         printf("\n");
//     }
//     return 0;

// }
// #include <stdio.h>

// int main() {
//     int rows, i, j;

//     // Ask the user for the number of rows
    
//     scanf("%d", &rows);

//     // Loop through each row
//     for (i = 1; i <= rows; i++) {
//         // Print spaces for the mirrored effect
//         for (j = 1; j <= rows - i; j++) {
//             printf(" ");
//         }
//         // Print stars
//         for (j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         // Move to the next line after each row
//         printf("\n");
//     }

//     return 0;
// }


#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}










