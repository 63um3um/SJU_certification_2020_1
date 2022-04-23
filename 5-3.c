#include<stdio.h>

int main(void)
{
    int n;
    int is_prime;
    int pcnt = 0;
    int i, j;

    while (1)
    {
        is_prime = 1;
        scanf("%d",&n);
        if(n < 0)
        {
            break;
        }
        for(i=2; i<=(n+1)/2; i++)
        {
            if(n%i == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if(is_prime)
        {
            printf("%d ",n);
            pcnt++;
            for(i=n+1; ; i++)
            {
                for(j=2; j<=(i+1)/2; j++)
                {
                    if(i%j == 0)
                    {
                        is_prime = 0;
                        break;
                    }
                    is_prime = 1;
                }
                if(is_prime)
                {
                    break;
                }
            }
            printf("%d\n",i);
        }
    }

    if(pcnt == 0)
    {
        printf("none");
        return 0;
    }
    for(i=0; i<n; i++)
    {
        printf("%d",i);
    }
    
    return 0;
}w