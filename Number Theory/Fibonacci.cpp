#include <bits/stdc++.h>

using namespace std;

// 	Fibonacci numbers: F(n) = F(n-1) + F(n-2) with F(0) = 0 and F(1) = 1

int fib(int n){

    if(n <= 1)
        return n;

    return fib(n-1) + fib(n-2);
}

int iterativeFib(int n){
    int a = 0, b = 1;
    if(n <= 1)
        return n;

	for (int i = 2; i < n; ++i) {
		int c = a+b;
		a = b;
		b = c;
	}

	return a+b;
}

int main()
{

   cout << fib(7) << "\n";
   cout << iterativeFib(7) << "\n";
    return 0;
}
