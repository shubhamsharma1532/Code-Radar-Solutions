#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;  // 0 and 1 are not prime numbers
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;  // Number is divisible, so not prime
    }
    return 1;  // Number is prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
