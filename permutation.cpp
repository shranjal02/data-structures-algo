#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {1,4,5};

    next_permutation (arr, arr+3);
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << endl;

    
    return 0;  
} 