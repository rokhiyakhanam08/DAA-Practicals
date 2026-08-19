 #include <stdio.h>
 
long long factorialIterative(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}


long long factorialRecursive(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorialRecursive(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nFactorial using Iterative Method: %lld", factorialIterative(n));
    printf("\nFactorial using Recursive Method: %lld", factorialRecursive(n));

    printf("\n\nTime Complexity:");
    printf("\nIterative: O(n)");
    printf("\nRecursive: O(n)");

    printf("\n\nSpace Complexity:");
    printf("\nIterative: O(1)");
    printf("\nRecursive: O(n)");

    return 0;
}