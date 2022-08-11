#include<bits/stdc++.h>
using namespace std;

void funPer(string str, string  out){
if(str.size() == 0){ 
    cout << out << endl;
     return ;
}

for(int i=0; i<str.size(); i++){
    // first remove from str
    //add that in out
    funPer(str.substr(1), out + str[0]);

    rotate(str.begin(), str.begin()+1, str.end());

}

}
int main(){
     string str = "abc";
     funPer(str, "");
    return 0;
}