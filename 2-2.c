#include<stdio.h>

int main(void)
{
    char input;
    char first_char = 124, second_char = 124;
    
    while (1)
    {
        scanf("%c",&input);
        if(input >= 'A' && input <= 'Z')
        {
            break;
        }
        else
        {
            if(first_char > input)
            {
                second_char = first_char;
                first_char = input;
            }
            else if (second_char > input && first_char < input)
            {
                second_char = input;
            }
        }
    }
    
    if(first_char != 124 && second_char != 124)
        printf("%c%c",first_char,second_char);
    else
        printf("%c",first_char);


    return 0;
}