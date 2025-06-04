#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int sum1=0,sum2=0;
    vector<int>v;
    for(int i=0;i<n;i++)
    {   cin>>v[i];
    }
    sort(v.end(),v.begin());
    for(int i=0;i<n;i++)
    {
        if(sum1<sum2)  sum1+=v[i];
        else sum2+=v[i];
    }
    int a=abs(sum1-sum2);
    cout<<a<<endl;

    return 0;
}