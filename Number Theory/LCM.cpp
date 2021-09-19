#include <bits/stdc++.h>
#define ll long long

using namespace std;


int gcd(int a, int b)
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

    cout << lcm(6, 9) << "\n";
    return 0;
}
