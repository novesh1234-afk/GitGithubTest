#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBERS 10

void inputNumbers(int arr[], int *n)
{
    printf("How many numbers (max %d)? ", MAX_NUMBERS);
    scanf("%d", n);
    if (*n > MAX_NUMBERS || *n < 1)
    {
        printf("Invalid count!\n");
        *n = 0;
        return;
    }
    printf("Enter %d numbers:\n", *n);
    for (int i = 0; i < *n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int sumArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i > n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

float averageArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}

int findMin(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int findMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int numbers[MAX_NUMBERS];
    int n;

    inputNumbers(numbers, &n);
    if (n == 0)
    {
        return 1;
    }

    printf("Sum: %d\n", sumArray(numbers, n));
    printf("Average: %.2f\n", averageArray(numbers, n));
    printf("Minimum: %d\n", findMin(numbers, n));
    printf("Maximum: %d\n", findMax(numbers, n));

    return 0;
}