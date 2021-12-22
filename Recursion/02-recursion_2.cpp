#include <iostream>
#define ll long long

using namespace std;

/// [1] ///
/*
    Given grid of positive numbers, start from (0,0) and end at (n,n)
    move only to write and down .. find path with sum of numbers is maximum.
*/

const int MAX = 50; // max number of rows/columns
int n; // number of rows/columns
ll grid[MAX][MAX];
ll path_maximumSum(ll r, ll c)
{
    if(r < 0 || c < 0 ||  r>=n || c >= n)
        return 0;

    return grid[r][c] + max(path_maximumSum(r+1, c),
                            path_maximumSum(r, c+1));
}


/// [2] ///
/*
    can you move from S to E ?
            . S x . .       (X block cannot path)
            . . X . E
            . . . . X
            X . X X .    (Maze problem)
*/
// n -> number of rows/columns;
char maze_arr[MAX][MAX];
bool visited[MAX][MAX]; // to avoid cycle
bool canReachEnd(ll r, ll c)
{

    if(r < 0 || c < 0 ||  r>=n || c >= n || maze_arr[r][c] == 'X' || visited[r][c] == 1)
        return false; // I assume that : the number of rows == columns

    if(maze_arr[r][c] == 'E')
        return true;

    visited[r][c] == 1; // I visited this cell .. don't visit again int the same path

    // Try the 4 neighbor cells
    if(canReachEnd(r+1, c)) return true;
    if(canReachEnd(r, c+1)) return true;
    if(canReachEnd(r-1, c)) return true;
    if(canReachEnd(r, c-1)) return true;

    visited[r][c] == 1; // undo making .. other paths can visit it now.

    return false;

    // This solution is [BACKTRACKING]
}

/// [3] ///
// BACKTRACKING format . //

/*
void recursion(state s){

    if( baseCase(s) )
        return;

    for each sub-state ss
        mark s

    recursion( ss )

    unmark s
}
*/


/// [4] ///
/* Flood fill .. Given maze where cells are (.) or (X), u start at (0,0) how many cells u can reach */

// n -> number of rows/columns;
int count_cells = 0;
void countReachableCells(ll r, ll c)
{
    if(r < 0 || c < 0 ||  r>=n || c >= n || maze_arr[r][c] == 'X' || visited[r][c] == 1)
        return; // I assume that : the number of rows == columns

    count_cells++;
    visited[r][c] == 1;

    canReachEnd(r+1, c);
    canReachEnd(r, c+1);
    canReachEnd(r-1, c);
    canReachEnd(r, c-1);

}

/// [5] ///
/*
    How many connected components?
    each set of positions reachable together are connected components?
*/

ll num_connected_components(ll r, ll c)
{
    ll count_connected = 0;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0 ; j < c; j++)
        {
            count_cells = 0;
            countReachableCells(i, j);

            if(count_cells > 0)
                count_connected++;
        }
    }

    return count_connected;
}


int main()
{

    return 0;
}
