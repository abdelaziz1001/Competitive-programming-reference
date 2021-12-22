#include <bits/stdc++.h>
#define ll long long

using namespace std;

// A function is said to be recursive if it calls itself.


/*
Functions
[1] printFromNTo1
[2] factorial
[3] triangle (print)
[4] triangleRev (print)
[5] series3N (3N+1 Series)
[6] printNumber (from L to R)
[7] printNumberRev (from R to L)
*/



// print numbers from N To 1
void printFromNTo1(ll N){
    if(N <= 0)              // Base Case
        return;

    cout << N << " ";       // Some Logic

    printFromNTo1(N-1);     // Sub-problem

}

// Find factorial of N (N!)
ll factorial(ll N){

    // 1! = 0! = 1
    if(N <= 1)
        return 1;

    // N! = N * (N-1)!
    return N * factorial(N-1);
}

// Print Triangle
void triangle(ll row_num){

    if(row_num <= 0)
        return;
    triangle(row_num-1);
    for(int i = 0; i < row_num; i++)
        cout << "*";
    cout << "\n";

}

// Print Triangle
void triangleRev(ll row_num){

    if(row_num <= 0)
        return;

    for(int i = 0; i < row_num; i++)
        cout << "*";
    cout << "\n";

    triangleRev(row_num-1);

}

// 3N+1 Series
/*
    {if N odd then N = 3*N+1.}, {if N even then N = N/2.}, {if N == 1 then STOP.}
    E.g. 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
    Given N, find length of 3N+1 sequence.          E.g. series3N(22) = 16
*/
ll series3N(ll N){

    if(N == 1)
        return 1;

    if(N%2)
        return 1 + series3N(3*N+1);
    else
        return 1 + series3N(N/2);
}

// print number N > 0 from L to R (using recursion)
void printNumber(ll N){
    if(N){
        printNumber(N/10);
        cout << N%10;
    }
}

// print number N > 0 from R to L (using recursion)
void printNumberRev(ll N){
    if(N){
        cout << N%10;
        printNumberRev(N/10);
    }
}

int main()
{

    return 0;
}
