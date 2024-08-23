#include <bits/stdc++.h>
using namespace std;

//_____________________Accepted__________________//
int main(){
    long long n; cin >> n;
       cout << n << " ";
       while(n!=1){
        if( n % 2 == 1){
            n*=3;
            n+=1;
            cout << n << " ";
        }
        else{
            n/=2;
            cout << n << " ";
        }
       }
}