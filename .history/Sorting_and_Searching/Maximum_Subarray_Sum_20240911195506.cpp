#include <bits/stdc++.h>
using namespace std;

#define all(v)      ((v).begin()),((v).end())
#define sz(v)       ((int)((v).size()))
#define clr(v,d)    memset(v,d,sizeof(v))
#define rep(i,v)    for(ll i=0; i<sz(v); i++)
#define lp(i,n)     for(ll i=0; i<(int)(n); ++i)
#define lpi(i,j,n)  for(ll i=(j); i<(int)(n); ++i)
#define lpd(i,j,n)  for(ll i=(j); i>=(int)(n); --i)
#define ln '\n'
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<ll> value(n);
    lp(i,n){
        cin >> a[i];
    }
    ll best = -1e18;
    ll past = 0;

    lp(i,n){
        if(past+value[i]>=value[i]){
            past += value[i];
        }else{
            past = value[i];
        }
            best = max(best, past);
    }
    cout << best;
    return 0;
}