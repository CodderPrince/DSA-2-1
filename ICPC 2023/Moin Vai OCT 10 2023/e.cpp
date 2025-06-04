//prince

#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        int res= ((x-2)/y)+2;
        cout<<res<<endl;
    }

    return 0;
}
