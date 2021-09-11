#include <iostream>
#include <vector>>
#define ll long long

using namespace std;

vector<bool> is_prime(1000001, 1);
void sieve(){
    int max_n = 1000000;
    is_prime[0] = is_prime[1] = 0;

    for(int i = 2; i*i <= max_n; i++){
        if(is_prime[i]){
            for(int j = i*i; j <= max_n; j+=i){
                is_prime[j] = 0;
            }
        }
    }

}


int main()
{
    sieve();
    ll q, n;
    cin >> q;
    while(q--){
        cin >> n;
        if(is_prime[n])
            cout << "Prime\n";
        else
            cout << "Not Prime\n";
    }

    return 0;
}
