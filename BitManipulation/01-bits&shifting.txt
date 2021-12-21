#include <iostream>

using namespace std;

/*
 --------------------------------------------
|        Left Shift:                         |
|                (n<<i) = n*(2^i)            |
|                (1<<n) = 2^n                |
|        Right Shift:                        |
|                (n>>i) = n/(2^i)            |
 --------------------------------------------
*/



///[1]///
/*
        Given a number (N) and index (i) find whether
          (i)th bit in binary representation of (N) is set(1) or no
*/
bool isOnOrNot(int N, int i)
{
    return  N&(1<<i);
}

///[2]///
/*
        Given a number (N) and find the number of set bits
        {ANOTHER DESCRIPTION}
        Given an integer (N), return true if it is a power of two. Otherwise, return false.
        An integer (N) is a power of two, if there exists an integer X such that N == 2^X == (1<<X)
        -> If number of ones == 1.
*/

//     Method 1    //
int countOnes_1(int N)
{
    int ans = 0;
    while(N)
    {
        if(N&1)
            ans++;
        N = N>>1;
    }
    return ans;
}

//      Method 2    //
int countOnes_2(int N)
{
    int ans = 0;
    while(N>0)
    {
        ans++;
        N = N & (N-1);
    }
    return ans;
}

// shorter way to check pow of 2 (N & (N-1)) == 0
bool powOfTwo(int N)
{
    if(N <= 0)
        return 0;
    if((N & (N-1)) == 0)
        return 1;
    else
        return 0;
}


int main()
{


    return 0;
}
