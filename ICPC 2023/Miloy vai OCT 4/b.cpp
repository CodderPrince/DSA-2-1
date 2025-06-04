//prince

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char str1[n+1],str2[n+1];
        cin>>str1>>str2;
        int i;
        for(i=0; i<n; i++)
        {
            if(str1[i]=='G')
            {
                str1[i]='B';
            }
        }
        for(i=0; i<n; i++)
        {
            if(str2[i]=='G')
            {
                str2[i]='B';
            }
        }
        int flag=1;
        for(i=0; i<n; i++)
        {
            if(str1[i] != str2[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}