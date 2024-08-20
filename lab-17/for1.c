#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num)
{
    if (num <= 1)
        return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0; // If divisible by any number other than 1 and itself, it's not prime
    }
    return 1; // If no divisors found, it's prime
}

int main()
{
    int n;
    printf("Input as: ");
    scanf("%d", &n);

    int found = 0; // To keep track if at least one pair is found

    // Iterate through all numbers less than n
    for (int i = 2; i <= n / 2; i++)
    {
        if (is_prime(i) && is_prime(n - i))
        { // Check if both i and n-i are prime
            printf("%d = %d + %d\n", n, i, n - i);
            found = 1; // Set found to 1 if at least one pair is found
        }
    }

    if (!found)
    {
        printf("No pair of prime numbers found that sum to %d\n", n);
    }

    return 0;
}
