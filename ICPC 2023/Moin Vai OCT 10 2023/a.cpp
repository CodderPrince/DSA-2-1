//prince

#include<bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a,b,i,count=0;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            if(a>b)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}