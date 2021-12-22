#include <iostream>
#define ll long long

using namespace std;

/// [1] ///
/*
    generate all sequences of given length, of zeros and ones
    E.g. for length = 3  000, 001, 011, 100, 101, 110, 111
*/

void generate_sequences01(ll length, string s = ""){

    if(length == 0){
        cout << s << "\n";
        return;
    }

    generate_sequences01(length-1, s+"0");
    generate_sequences01(length-1, s+"1");
}

// what about zeros, ones and twos.
// E.g. length = 00, 01, 02, 10, 11, 12, 20, 21, 22

void generate_sequences012(ll length, string s = ""){

    if(length == 0){
        cout << s << "\n";
        return;
    }

    generate_sequences012(length-1, s+"0");
    generate_sequences012(length-1, s+"1");
    generate_sequences012(length-1, s+"2");
}

/// [2] ///
/*
    Print all permutations of numbers 0, 1, 2, .. N-1
*/

void print_permutations(ll i, ll n, ll visited[], ll curArr[]){

    if(i == n){
        for(int j = 0; j < n; j++)
            cout << curArr[j];
        cout << "\n";
        return;
    }

    for(int j = 0; j < n; j++){
        if(!visited[j]){

            visited[j] = 1;
            curArr[i] = j;

            print_permutations(i+1, n, visited, curArr);
            visited[j] = 0;
        }
    }

}

/// [4] ///
/*
    Print N choose N combinations.
*/
void combinations(ll i, ll n, ll m, ll curArr[], ll curLen){

    if(curLen == m){
        for(int j = 0; j < n; j++)
            cout << curArr[j];
        cout << "\n";
        return;
    }

    if(i == n)
        return;

    curArr[curLen] = i;

    combinations(i+1, n, m, curArr, curLen+1);
    combinations(i+1, n, m, curArr, curLen);
}


int main()
{

    return 0;
}
