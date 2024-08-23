#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    if (n == 2 || n == 3) 
        cout << "NO SOLUTION" << endl;   
    else{
    for(int i=0; i<n; i++){
        a[i] = i+1;
       
    }

    for(int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }

    for(int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
    }

}