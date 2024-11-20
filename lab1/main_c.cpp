#include <stdio.h>
#define MAX_SIZE 125

int arr[MAX_SIZE];

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    int i = 0;
enter_arr:
    scanf("%d", &arr[i]);
    i++;
    if (i < n) goto enter_arr;

    int temp = 0;
    i = 0;
    int k = 0;
cycle_start1:
    int j = 0;
cycle_start2:
    if (!(arr[j] > arr[j + 1])) goto if_end;
    temp = arr[j];
    arr[j] = arr[j + 1];
    arr[j + 1] = temp;
    goto if_end;
if_end:
    j++;
    k = n - i;
    if (j < k - 1) goto cycle_start2;
    i++;
    if (i < n - 1) goto cycle_start1;


    printf("Sorted array:\n");
    i = 0;
print_arr:
    printf("%d ", arr[i]);
    i++;
    if (i < n) goto print_arr;
    return 0;
}