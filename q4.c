#include<stdio.h>
#include<stdlib.h>

long long moves;

void TOH(int n,char l,char m,char r)
{
    if(n==1)
    {
        moves++;
        return;
    }

    TOH(n-1,l,r,m);

    moves++;

    TOH(n-1,m,l,r);
}

int main()
{
    FILE *fp;
    FILE *gp;

    fp=fopen("q4.txt","w");

    fprintf(fp,"#Disks Moves\n");

    for(int n=1;n<=15;n++)
    {
        moves=0;

        TOH(n,'L','M','R');

        fprintf(fp,"%d %lld\n",n,moves);
    }

    fclose(fp);

    gp=popen("gnuplot q4.gnu","r");

    pclose(gp);

    return 0;
}