#include<stdio.h>
#include<limits.h>

int main(void)
{
    int n;
    int cnt3 = 0;
    int tmp;
    int result;
    int max = INT_MIN;
    int min = INT_MAX;

    while (1)
    {
        cnt3 = 0;
        scanf("%d",&n);
        if(n == 0)
        {
            break;
        }

        tmp = n;
        result = n;

        while (tmp)
        {
            result *= 10;
            result += tmp%10;
            if(tmp%10 == 3)
            {
                cnt3 ++;
            }
            tmp /= 10;
        }

        if(result > max)
        {
            max = result;
        }
        if(result < min)
        {
            min = result;
        }

        printf("%d %d ",result,cnt3*2);
    }
    printf("\n%d %d",min, max);
    
    return 0;
    
}