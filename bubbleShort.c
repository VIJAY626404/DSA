#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", A[i]);
    }
    printf("\n");
}
void bubbleSort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) // for number passes
    {
        for (int j = 0; j < n - 1 - i; j++) // for comparision in each passes
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int A[] = {12, 35, 65, 23, 2, 8};
    int n = 6;
    printArray(A, n); // printing the array before shorting
    bubbleSort(A, n); // function to sort array
    printArray(A, n); // printing the array before sorting
    return 0;
}