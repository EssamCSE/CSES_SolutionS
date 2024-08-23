#include <bits/stdc++.h>
using namespace std;
long long solve(){
    long long x,y;
    long long  ans;

    cin >> x >> y;
    if(y > x){
        if(y%2 == 0){
            ans = (y-1)*(y-1) + 1 + (x-1);
        }
        else{
            ans = y*y - (x-1);
        }
    }
    else{
        if(x%2 == 1){
            ans = (x-1)*(x-1) + 1 + (y-1);
        }
        else{
            ans = x*x - (y-1);
        }
    }
    return ans;
}
int main(){


    long long n;
    cin >> n;
    while(n--){
    cout  <<  solve() << "\n";   
    }
}




