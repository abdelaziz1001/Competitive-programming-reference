#include <iostream>
#include <vector>>
#define ll long long

using namespace std;


// Brute Force Approach
void priemFactBF(ll n){
    for(int i = 2; i <= n; i++){
        if(n%i == 0){
            int c = 0;
            while(n%i == 0){
                c++;
                n/=i;
            }
            cout << i << "^" << c << "\n";
        }
    }
}

// Optimized Approach
void priemFact(ll n){
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            int c = 0;
            while(n%i == 0){
                c++;
                n/=i;
            }
            cout << i << "^" << c << "\n";
        }
    }
    if(n > 1)
        cout << n << "^1\n";
}

int main()
{

priemFact(100);

    return 0;
}
