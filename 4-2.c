#include<stdio.h>

int main(void)
{
    int m;
    int i,j;
    int n, t;
    int input;
    int n_factnum = 0;
    int factnum = 0;
    int pcnt = 0;
    int tflag = 1;

    int max_line, maxp = 0;

    scanf("%d",&m);

    for(i=0; i<m; i++)
    {
        n_factnum = 0;
        pcnt = 0;
        tflag = 1;
        
        scanf("%d",&n);
        for(j=1; j<=n/2; j++)
        {
            if(n%j == 0)
                n_factnum++;
        }
        n_factnum++;

        // printf("n_factnum : %d\n",n_factnum);
        scanf("%d",&t);
        while(1)
        {
            scanf("%d",&input);
            factnum = 0;
            if(input <= 0)
            {
                break;
            }
            for(j=1; j<=input/2; j++)
            {
                if(input%j == 0)
                    factnum++;
            }
            factnum++;
            // printf("factnum : %d\n",factnum);
            if(factnum == n_factnum || (factnum%t == 0 && tflag))
            {
                if(factnum%t == 0 && tflag)
                {
                    tflag = 0;
                }
                printf("%d ",input);
                pcnt++;
            }
        }
        if(maxp < pcnt)
        {
            maxp = pcnt;
            max_line = i+1;
        }
        if(pcnt == 0)
        {
            printf("none");
        }
        printf("\n");
    }
    printf("%d %d",max_line, maxp);

    return 0;
}
/*
2
196 14 225 37 960 441 8 320 36 192 448 840 -1
840 7 18 252 112 396 44 -1
*/