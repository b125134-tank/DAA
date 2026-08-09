#include <stdio.h>

#define MAX 1000

int main()
{
    FILE *fp;

    fp = fopen("singly_sorted_list.txt", "w");

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
        double insert = n;        // O(n)
        double delete = n;        // O(n)

        /*
           In a singly linked sorted list:

           Minimum is at the head.
           Therefore, Minimum = O(1).

           Maximum is at the last node.
           Since there is no direct access to
           the last node in a singly linked list,
           we need to traverse the list.

           Therefore, Maximum = O(n).
        */

        double maximum = n;       // O(n)
        double minimum = 1;       // O(1)

        /*
           To find the predecessor or successor,
           we may need to traverse the linked list
           to locate the required node.

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

    printf("singly_sorted_list.txt created successfully.\n");

    return 0;
}