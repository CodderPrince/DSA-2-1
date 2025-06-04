//prince

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,s1=0,s2=0,sum=0,i;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            s1 = s1+i;
        }
        s1 = s1*s1;
        for(i=1; i<=n; i++)
        {
            s2 = s2 + i*i;
        }
        sum = s1-s2;
        cout<<sum<<endl;
    }

    return 0;
}