//prince

#include<bits/stdc++.h>
using namespace std;


int main() 
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,prime=2,i;
        cin>>n;
        while(n%2 == 0)
        {
            prime=2;
            n = n/2;
        }
        for(i=3; i*i<=n; i=i+2)
        {
            while(n%i == 0)
            {
                prime=i;
                n=n/i;
            }
        }
        if(n>2)
        {
            prime=n;        
        }
        cout<<prime<<endl;
    }

    return 0;
}