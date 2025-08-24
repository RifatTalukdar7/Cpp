///Rat in a Maze
/*
input:
1 0 1 0 1
1 1 1 1 1
0 1 0 1 0
1 0 0 1 1
1 1 1 0 1
output:
1 0 0 0 0
1 1 1 1 0
0 0 0 1 0
0 0 0 1 1
0 0 0 0 1
*/
/*
#include<bits/stdc++.h>
using namespace std;
bool isSafe(int **arr,int x,int y,int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}
bool ratinMaze(int **arr,int x, int y,int n,int **solArr){
    if(x==n-1 && y==n-1){
        solArr[x][y]=1;
        return true;
    }
    if(isSafe(arr,x,y,n)){
        solArr[x][y]=1;
        if(ratinMaze(arr,x+1,y,n,solArr)){
            return true;
        }
        if(ratinMaze(arr,x,y+1,n,solArr)){
            return true;
        }
        solArr[x][y]=0;  ///backtracking
        return false;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int **arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int **solArr=new int*[n];
    for(int i=0;i<n;i++){
        solArr[i]=new int[n];
        for(int j=0;j<n;j++){
            solArr[i][j]=0;
        }
    }
    if(ratinMaze(arr,0,0,n,solArr)){
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<solArr[i][j]<<" ";
        }
        cout<<endl;
      }
    }


    return 0;
}
*/
///N-Queen
/*
#include<bits/stdc++.h>
using namespace std;
bool isSafe(int **arr,int x,int y,int n){
    for(int row=0;row<x;row++){
        if(arr[row][y]==1){
            return false;
        }
    }
    int row=x,col=y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    row=x;
    col=y;
    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}
bool nQueen(int **arr,int x,int n){
    if(x>=n){
        return true;
    }
    for(int col=0;col<n;col++){
        if(isSafe(arr,x,col,n)){
            arr[x][col]=1;
            if(nQueen(arr,x+1,n)){
                return true;
            }
            arr[x][col]=0; ///backtracking
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int **arr=new int *[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
    if(nQueen(arr,0,n)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}*/
///Sudoku Solver Hashing
/*
#include<bits/stdc++.h>
using namespace std;
void helper(int r,int c,vector<vector<char>> &a,map<pair<int,int>,map<int,int>> &mp,vector<map<int,int>> &row,vector<map<int,int>> &col){
    if(r==9){
        for(auto it:a){
            for(auto i:it){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }
    if(c==9){
        helper(r+1,0,a,mp,row,col);
        return;
    }
    if(a[r][c]!='.'){
        helper(r,c+1,a,mp,row,col);
        return;
    }
    for(int i=1;i<=9;i++){
        int rw=r/3,cl=c/3;
        if(!mp[{rw,cl}][i] && !row[r][i] && !col[c][i]){
            mp[{rw,cl}][i]=1;
            row[r][i]=1;
            col[c][i]=1;
            a[r][c]=i+'0';
            helper(r,c+1,a,mp,row,col);
            mp[{rw,cl}][i]=0;
            row[r][i]=0;
            col[c][i]=0;
            a[r][c]='.';
        }
    }
}
void solveSudoku(vector<vector<char>> &a){
    map<pair<int,int>,map<int,int>> mp;
    vector<map<int,int>> row(9);
    vector<map<int,int>> col(9);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(a[i][j]!='.'){
                mp[{i/3,j/3}][a[i][j]-'0']=1;
                row[i][a[i][j]-'0']=1;
                col[j][a[i][j]-'0']=1;
            }
        }
    }
    helper(0,0,a,mp,row,col);
}
int main()
{
    vector<vector<char>> soduku={
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    solveSudoku(soduku);

    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<char>> &board,int row,int col,int number){
    for(int i=0;i<board.size();i++){
        if(board[i][col]==(char)(number+'0')){
            return false;
        }
        if(board[row][i]==(char)(number+'0')){
            return false;
        }
    }
    int sr=(row/3)*3;
    int sc=(col/3)*3;
    for(int i=sr;i<sr+3;i++){
        for(int j=sc;j<sc+3;j++){
            if(board[i][j]==(char)(number+'0')){
                return false;
            }
        }
    }
    return true;
}
bool helper(vector<vector<char>> &board,int row,int col){
    if(row==board.size()){
        return true;
    }
    int nrow=0;
    int ncol=0;
    if(col!=board.size()-1){
        nrow=row;
        ncol=col+1;
    }
    else{
        nrow=row+1;
        ncol=0;
    }
    if(board[row][col]!='.'){
        if(helper(board,nrow,ncol)){
            return true;
        }
    }
    else{
        for(int i=1;i<=9;i++){
            if(isSafe(board,row,col,i)){
                board[row][col]=(char)(i+'0');
                if(helper(board,nrow,ncol)){
                    return true;
                }
                else{
                    board[row][col]='.';
                }
            }
        }
    }
    return false;
}
void solveSudoku(vector<vector<char>> &board){
    helper(board,0,0);
}
int main()
{
    vector<vector<char>> soduku={
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    solveSudoku(soduku);
    for(auto i:soduku){
        for(auto j:i){
            cout<<j<<" ";
        }cout<<endl;
    }

    return 0;
}*/










