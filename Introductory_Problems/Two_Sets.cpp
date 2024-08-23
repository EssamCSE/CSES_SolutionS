#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    ll sum = (n*(n+1))/2;

    if(sum%2 == 1){
        cout << "NO";
        
    }else{
        cout << "YES" << "\n";
        set<ll> s1, s2;
        ll target = sum/2;
        int t=n;
        
        for(int i=1; i<=n; i++){
            s1.insert(i);
        }

        while(s1.count(target)==0){
            target -= t;
            s2.insert(t);
            s1.erase(t);
            t--;
        }

        s1.erase(target);
        s2.insert(target);

        cout << s1.size() << "\n";
        for(int a : s1){
            cout << a << " ";
        }
        cout << "\n";
        cout << s2.size() << "\n";
        for(int a : s2){
            cout << a << " ";
        }
    }
}