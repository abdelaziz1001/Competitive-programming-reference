#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gcd(ll a, ll b)
{

    while(b!=0)
    {
        ll a2 = a;
        a = b;
        b = a2 % b;
    }
    return a;
}

// Recursive function
int gcd_rec(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a*b)/gcd(a, b);
}


int main()
{

    cout << gcd(24, 6) << "\n";
    cout << gcd_rec(24, 6) << "\n";

    return 0;
}
