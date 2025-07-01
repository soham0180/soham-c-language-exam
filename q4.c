// squre program of array
#include <stdio.h>

int main() 
{
    int n, i;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Squares of each element:\n");
    for(i = 0; i < n; i++) {
        printf("Element %d: %d^2 = %d\n", i, arr[i], arr[i] * arr[i]);
    }

    return 0;
}
