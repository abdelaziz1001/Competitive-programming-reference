//  Prime Factorization using Sieve in O(log(N))

#include <iostream>
#include <vector>

using namespace std;

// stores smallest prime factor for every number
vector<int> fac(1000001, -1);

//Calculating smallest prime factor O(n log(log n))
void seiveFac()
{
    int max_sz = 1000000;

    for(int i = 2; i*i <= max_sz; i++)
    {
        if(fac[i] == -1)
        {
            for(int y = i; y <= max_sz; y+=i)
            {
                if(fac[y] == -1)
                    fac[y] = i;
            }
        }
    }
}

// A O(log n) function returning prime factorization
// by dividing by smallest prime factor at every step
vector<int> getFactorization(int x)
{
    vector<int> v;
    while (x != 1)
    {
        if(fac[x] == -1)
            v.push_back(x);
        else
            v.push_back(fac[x]);

        x/=fac[x];
    }
    return v;
}

int main()
{
    seiveFac();
    int num;
    cin >> num;

    vector <int> facOfNum = getFactorization(num);

    for (int i=0; i<facOfNum.size(); i++)
        cout << facOfNum[i] << " ";
    cout << endl;

    return 0;
}
