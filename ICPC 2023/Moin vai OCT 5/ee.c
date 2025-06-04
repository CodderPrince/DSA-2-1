//prince

#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    //getchar();
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        //gets(str);
        int count[26]={0},sum=0;
        for(int i=0; i<strlen(str); i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                count[str[i]-'A']++;
            }
        }
        for(int i=0; i<26; i++)
        {
            if(count[i]==1)
            {
                sum = sum+2;
            }
            else if(count[i]>1)
            {
                sum = sum + 1 + count[i];
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}