#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str [1001];
        int i, count[26]={0};
        gets(str);

        for(i=0; str[i]!='\0'; i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                count[str[i]-'a']++;

            }
        }
            for(i=0; i<26; i++)
            {
                if(count[i]!=0)
                {
                    printf("%c = %d\n", 'a'+i, count[i]);
                }
            }
            if(t>0)
            {
                printf("\n");
            }

        }
    return 0;
}

