#include <stdio.h>

#define MAX 1000

int main()
{
    FILE *fp;

    fp = fopen("doubly_sorted_list.txt", "w");

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
           In a doubly linked sorted list:

           Minimum is at the head.
           Maximum is at the tail.

           If head and tail pointers are maintained,
           both operations take O(1).
        */

        double maximum = 1;       // O(1)
        double minimum = 1;       // O(1)

        /*
           Since the list is doubly linked and sorted,
           once the required node x is given:

           Predecessor = x->prev
           Successor   = x->next

           Therefore, both operations are O(1).
        */

        double predecessor = 1;  // O(1)
        double successor = 1;    // O(1)

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

    printf("doubly_sorted_list.txt created successfully.\n");

    return 0;
}