#include <iostream>
#define ll long long
using namespace std;

bool isPrime(ll num)
{
    if(num == 1)
        return false;
    else if(num == 2)
        return true;
    else if(num % 2 == 0)
        return false;

    for(int i = 3; i*i <= num; i+=2)
    {
        if(num%i == 0)
            return false;
    }

    return true;
}

int main()
{
    ll x;
    cin >> x;
    if(isPrime(x))
        cout << "Prime\n";
    else
        cout << "Not Prime\n";

    return 0;
}
