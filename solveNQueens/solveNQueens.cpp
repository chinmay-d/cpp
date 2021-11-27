#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<math.h>
#include<bitset>
#include<numeric>
using namespace std;

bitset<30> col,d1,d2;
vector<vector<string>> fboard;

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        // initialization
        vector<string> board(n, string(n, '.'));
        // check if solution exists    
        solve(0,n,board);
        // if solution exists then print the board
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<fboard[i][j] << " ";
        //     }
        //     cout <<endl;
        // }   
        return fboard;
    }

    void solve(int r, int n, vector<string> &board){
        
        // terminating condition
        if(r == n){
            // push string into fboard
            fboard.push_back(board);
            return;
        }
        // recursive loop
        for(int c=0;c<n;c++){
            if(!col[c] && !d1[r-c+n-1] && !d2[r+c]){
                board[r][c] = 'Q';
                col[c] = d1[r-c+n-1] = d2[r+c] = 1;
                solve(r+1,n,board);
                board[r][c] = '.';
                col[c] = d1[r-c+n-1] = d2[r+c] = 0;
            }
        }
    }
};

int main(){
    Solution sol;

    // vector<vector<string>> nqueen;
    int n = 4;

    //fill the vector with string "./"

    // vector<string> v(n, "/");                   // this filling a vector inside a vector
    // vector<vector<string>> nqueen(n,v);
    
    // vector<vector<string>> nqueen;
    // for(int i=0;i<n;i++){                    // this method helps fill values in 2d vec one by one
    //     vector<string> v;
    //     for(int j=0;j<n;j++){
    //         v.push_back("./");
    //     }
    //     nqueen.push_back(v);
    // }

    // vector<vector<string>> nqueen(n, vector<string> (n, "/"));   // init 2d vec with default value in one line

    // displaying the vector value
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<nqueen[i][j] << " ";
    //     }
    //     cout <<endl;
    // }

    sol.solveNQueens(n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<fboard[i][j] << " ";
        }
        cout <<endl;
    }

    return 0;
}