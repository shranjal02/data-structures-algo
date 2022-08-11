#include<bits/stdc++.h>
using namespace std;
 
void realOne(string  a, int f, int l){

if(f == l)
    cout << a << endl;

else{
for(int i=f; i<=l; i++){
    swap(a[f],a[i]);
    realOne(a,f+1,l);
    swap(a[f],a[i]);
}
}
}




int main(){
    string m = "abc";
    int n = m.size();

   realOne(m,0,n-1);
  
return 0;
}