#include<bits/stdc++.h>
using namespace std;
void setRat(int i, int j, vector<vector<int>> & arr, int n, vector<string> & ans, string move, vector<vector<int>> & visited ){

if(i == n-1 && j == n-1){
    ans.push_back(move);
    return ;
}

//down
if(i+1 < n && !visited[i+1][j] && arr[i+1][j] == 1 ){
  visited[i+1][j] == 1;
  setRat(i+1,j,arr,n,ans,move + 'D', visited);
  visited[i+1][j] == 0;

}

//left

if(j-1 >= 0 && !visited[i][j-1] && arr[i][j-1] == 1){
    visited[i][j-1] == 1;
    setRat(i,j-1,arr,n,ans,move +'L',visited);
    visited[i][j-1] == 0;
}

//right

if(j+1 < n && !visited[i][j+1] && arr[i][j+1] == 1){
    visited[i][j+1] == 1;
    setRat(i,j+1,arr,n,ans,move+'R',visited);
    visited[i][j+1] == 0;
}

// upword

if(i-1 >= 0 && !visited[i-1][j] && arr[i-1][j] == 1){
    visited[i-1][j] == 1;
    setRat(i-1,j,arr,n,ans,move+'U', visited);
    visited[i-1][j] == 0;
}

}

vector<string> final(vector<vector<int>> arr,int n){

vector<string> ans;
vector<vector<int>> visited(n, vector <int> (n,0));
if(arr[0][0] == 1)
{
    setRat(0,0,arr,n,ans,"",visited);
    
}

return ans;
}

int main(){

  int n = 4;

   vector < vector < int >> m = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};

  
  vector < string > ans = final(m, m.size());

    for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
  cout << endl;

    return 0;
}