#include <bits/stdc++.h>
using namespace std;

#define all(v)      ((v).begin()),((v).end())
#define sz(v)       ((int)((v).size()))
#define clr(v,d)    memset(v,d,sizeof(v))
#define rep(i,v)    for(int i=0; i<sz(v); i++)
#define lp(i,n)     for(int i=0; i<(int)(n); ++i)
#define lpi(i,j,n)  for(int i=(j); i<(int)(n); ++i)
#define lpd(i,j,n)  for(int i=(j); i>=(int)(n); --i)

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        if((a+b)%3==0 && max(a,b) <= 2*min(a,b)){
            cout <<"YES\n";
        }
        else{
            cout <<"NO\n";
        }
    }
}