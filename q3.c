#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bubbleSortEarly(int a[], int n, int *count)
{
    int i,j,temp,swapped;

    *count=0;

    for(i=0;i<n-1;i++)
    {
        swapped=0;

        for(j=0;j<n-i-1;j++)
        {
            (*count)++;

            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped=1;
            }
        }

        if(swapped==0)
            break;
    }
}

void bubbleSortNormal(int a[], int n, int *count)
{
    int i,j,temp;

    *count=0;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            (*count)++;

            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    FILE *fp;
    FILE *gp;

    srand(time(NULL));

    fp=fopen("q3.txt","w");

    fprintf(fp,"#Size EarlyBubble NormalBubble\n");

    for(int n=100;n<=1000;n+=100)
    {
        int a[1000],b[1000];

        for(int i=0;i<n;i++)
        {
            a[i]=rand()%1000;
            b[i]=a[i];
        }

        int earlyComp,normalComp;

        bubbleSortEarly(a,n,&earlyComp);
        bubbleSortNormal(b,n,&normalComp);

        fprintf(fp,"%d %d %d\n",n,earlyComp,normalComp);
    }

    fclose(fp);

    gp=popen("gnuplot q3.gnu","r");

    pclose(gp);

    return 0;
}