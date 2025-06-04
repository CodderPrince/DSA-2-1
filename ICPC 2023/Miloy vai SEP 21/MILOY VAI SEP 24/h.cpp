#include <bits/stdc++.h>
using namespace std;

int main() 
{
    double a, b, c, d, x1, x2;
    cin >> a >> b >> c;
    d = sqrt(b * b - 4 * a * c);
    x1 = (-b + d) / (2 * a);
    x2 = (-b - d) / (2 * a);
    cout << fixed << setprecision(0) << x1 << endl;
    cout << fixed << setprecision(0) << x2 << endl;
    
    return 0;
}
