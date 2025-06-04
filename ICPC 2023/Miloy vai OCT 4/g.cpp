//prince

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x=2,largest=-1;
        cin>>n;
        while(n >=0)
        {
            if(n % x !=0)
            {
                x++;
            }
            else
            {
                largest = n;
                n = n/x;
                if(n == 1)
                {
                    cout<<largest<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}