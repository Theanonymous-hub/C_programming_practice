#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000000];
    scanf("%s", str);      
    int c0=0,c1=0,flag=0;
    for(int i=0;str[i] != '\0';i++)
    {
        if(str[i] == '1')
        {
            c1++;
            if(c1 >= 6)
            {
                flag=1;
                break;
            }
            c0=0;
        }
        else
        {
            c0++;
            if(c0 >= 6)
            {
                flag=1;
                break;
            }
            c1=0;
        }
    }
    if(flag == 0)
        printf("Good luck!");
    else
        printf("Sorry, sorry!");
}
