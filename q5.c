#include <stdio.h>

int findPartitionPoint(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == 1)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements (only 0s followed by 1s):\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int index = findPartitionPoint(arr, n);

    if (index == -1)
    {
        printf("No partition point found (array contains only 0s).\n");
    }
    else
    {
        printf("Partition point is at index %d\n", index);
        printf("First occurrence of 1 is %d\n", arr[index]);
    }

    return 0;
}