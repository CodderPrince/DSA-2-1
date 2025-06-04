//prince

#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000001];
    gets(str);
    long long i, count=1, max=1;
    for(i=1; i<strlen(str); i++)
    {
        if(str[i] == str[i-1])
        {
            count++;
        }
        else
        {
            count=1;
        }
        if(count>max)
        {
            max=count;
        }
    }
    printf("%lld\n",max);

    return 0;
}