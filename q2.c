#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    FILE *fp;
    FILE *gp;

    fp = fopen("q2.txt","w");

    fprintf(fp,"# Tosses FairCoin BiasedCoin\n");

    srand(time(NULL));

    for(int toss=100; toss<=10000; toss*=2)
    {
        int fairHead=0;
        int biasedHead=0;

        for(int i=1;i<=toss;i++)
        {
            // Fair Coin (50% probability)
            if(rand()%2==0)
                fairHead++;

            // Biased Coin (70% probability)
            if(rand()%10<7)
                biasedHead++;
        }

        fprintf(fp,"%d %.6lf %.6lf\n",
                toss,
                (double)fairHead/toss,
                (double)biasedHead/toss);
    }

    fclose(fp);

    gp = popen("gnuplot q2.gnu","r");

    pclose(gp);

    return 0;
}