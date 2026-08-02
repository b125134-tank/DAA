#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int unique(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                return 0;
        }
    }

    return 1;
}

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int a[n];

    srand(time(NULL));

    printf("\nGenerated Random Numbers:\n");

    for(int i=0;i<n;i++)
    {
        a[i]=rand()%100;
        printf("%d ",a[i]);
    }

    printf("\n");

    if(unique(a,n))
        printf("\nAll elements are unique.\n");
    else
        printf("\nDuplicate elements found.\n");

    return 0;
}