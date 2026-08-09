#include <stdio.h>

#define MAX 1000

int main()
{
    FILE *fp;

    fp = fopen("doubly_unsorted_list.txt", "w");

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
        double delete = 1;        // O(1)

        /*
           In an unsorted doubly linked list,
           maximum and minimum cannot be known
           without examining all the nodes.

           Maximum = O(n)
           Minimum = O(n)
        */

        double maximum = n;       // O(n)
        double minimum = n;       // O(n)

        /*
           The list is unsorted, so we may need
           to traverse the list to find the node
           with the immediately smaller or larger key.

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

    printf("doubly_unsorted_list.txt created successfully.\n");

    return 0;
}