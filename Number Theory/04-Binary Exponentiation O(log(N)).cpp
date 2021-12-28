#include <iostream>

using namespace std;

/*
    if u want to calc modular exponentiation:
        put --> res = (res*base) % mod
        and --> base = (base * base) % mod
*/
int power(int base, int pow)
{
    int res = 1;

    while(pow)
    {
        if(pow % 2)
        {
            pow--;
            res*=base;
        }
        else
        {
            base*= base;
            pow/=2;
        }

    }

    return res;
}

int main()
{

    return 0;
}
