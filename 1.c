#include<stdio.h>

int main(void)
{
    int kor_1, kor_2, eng_1, eng_2;

    double avg1=0, avg2=0;

    scanf("%d %d %d %d",&kor_1,&eng_1,&kor_2,&eng_2);


    avg1 = (kor_1+eng_1)/2.0;
    avg2 = (kor_2+eng_2)/2.0;

    if(kor_1 < 60 || kor_2 < 60 || eng_1 < 60 || eng_2 < 60)
    {
        printf("F");
        return 0;
    }
    
    if(avg1 >= avg2)
    {
        if(avg1 >= 90)
            printf("A+");
        else if(avg1 >= 80 )
            printf("A");
        else if(avg1 >= 70)
            printf("B+");
        else if(avg1 >= 60)
            printf("B");

    }
    else
    {
        if(avg2 >= 90)
            printf("A+");
        else if(avg2 >= 80 )
            printf("A");
        else if(avg2 >= 70)
            printf("B+");
        else if(avg2 >= 60)
            printf("B");
    }

    return 0;

}