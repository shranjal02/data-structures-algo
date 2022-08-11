#include<bits/stdc++.h>
using namespace std;

void sum(vector<vector<int>> &board,int n, vector<vector<int>> &ans){
    vector<int> temp;
 for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
       temp.push_back(board[i][j]);
    }
 }
ans.push_back(temp);

}

 bool isSafe(int row, int col, vector<vector<int>> & board,int n){
//row check
int x=row;
int y=col;
 while(y >= 0){
    if(board[x][y] == 1)
        return false;
    y--;
 }
// upper diagonal
x = row ;
y = col ;
while(x >= 0 && y >= 0){
if( board[x][y] == 1 )
    return false;

x--;
y--;
}

//lower
x = row;
y = col;
while(x < n && y >=0){
if(board[x][y] == 1)
    return false;


    x++;
    y--;
}
return true;


}

void add(int col,vector<vector<int>> &board,int n, vector<vector<int>> &ans){

//base
if(col == n){
    sum(board, n,ans);
    return;

}
//check case 1
for(int row = 0; row<n; row++){

    if(isSafe(row,col,board,n)){
        board[row][col] = 1;
        add(col+1,board,n,ans);
        board[row][col] = 0;
    }
}

}
vector<vector<int >> nQueen(int n){
    vector<vector<int>> board(n,vector<int> (n,0));
    vector<vector<int>> ans;
    
    add(0,board,n,ans);
    return ans;
}

int main(){
    int m = 4;
    vector<vector<int>> ans = nQueen(m);
        for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[0].size(); j++){
            cout << ans[i][j] << " ";
        }cout <<  endl;
    }

}
