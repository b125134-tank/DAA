#include <stdio.h>

#define MAX 1000

int main()
{
    FILE *fp;

    fp = fopen("singly_unsorted_list.txt", "w");

    if(fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp,
        "# n Search Insert Delete Maximum Minimum Predecessor Successor\n");

    for(int n = 1; n <= MAX; n++)
    {
        double search = n;        // O(n)
        double insert = 1;        // O(1)
        double delete = n;        // O(n)

        double maximum = n;       // O(n)
        double minimum = n;       // O(n)

        /*
           In a singly linked unsorted list,
           the elements are neither sorted nor
           directly accessible.

           Therefore, predecessor and successor
           may require traversing the entire list.

           Predecessor = O(n)
           Successor   = O(n)
        */

        double predecessor = n;   // O(n)
        double successor = n;     // O(n)

        fprintf(fp,
            "%d %.4lf %.4lf %.4lf %.4lf %.4lf %.4lf %.4lf\n",
            n,
            search,
            insert,
            delete,
            maximum,
            minimum,
            predecessor,
            successor);
    }

    fclose(fp);

    printf("singly_unsorted_list.txt created successfully.\n");

    return 0;
}