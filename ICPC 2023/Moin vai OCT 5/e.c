#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char str[n];
        int arr[51]= {0};

        scanf("%s",str);
        int cnt=0,i,j;
        for( i=0; i<strlen(str); i++)
        {
            arr[str[i]-'A']++;

        }
        for( i=0; i<=25; i++)
        {

            if(arr[i]==1) cnt+=2;
            else if(arr[i]>1) cnt+=1+arr[i];
        }
        printf("%d\n",cnt);

    }
    return 0;
}

	 						       		  	    	  	