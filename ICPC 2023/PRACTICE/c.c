#include<bits/stdc++.h>
#define sp" "
#define el "\n"
using namespace std;

int main()
{
    string str;
    while(cin>>str)
    {
        int i;
        for(i=0; i<str.size(); i++)
        {
            str[i] = str[i] - 'J' ++ 'C';
        }
        cout<<str<<endl;
    }

    return 0;
}