#include <stdio.h>

int partition(int arr[], int st, int end) {
    int mid = (st + end) / 2;
    int pivot = arr[mid];

    // Move middle pivot to the end
    int temp = arr[mid];
    arr[mid] = arr[end];
    arr[end] = temp;

    int i = st - 1;

    for (int j = st; j < end; j++) {
        if (arr[j] < pivot) {
            i++;

            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Put pivot in its correct position
    i++;

    temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;

    return i;
}

void quickSort(int arr[], int st, int end) {
    if (st < end) {
        int pivIdx = partition(arr, st, end);

        quickSort(arr, st, pivIdx - 1);
        quickSort(arr, pivIdx + 1, end);
    }
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}