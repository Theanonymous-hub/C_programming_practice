#include <stdio.h>
#include <string.h>
int main(){
    char str[1000000];
    scanf("%s", str);      
    int l=strlen(str),c=1,ans=0;
    for(int i=0;i+1 < l;i++)
    {
        if(str[i] != str[i+1])
            c=c+1;
        else
        {
            if(ans < c)
                ans=c;
            c=1;
        }
    }
    if(ans < c)
        printf("%d", c);       
    else    
        printf("%d",ans);
}
