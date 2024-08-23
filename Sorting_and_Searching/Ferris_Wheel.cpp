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
    int n,x;
    cin >> n >> x;
    vector<int> weights(n);
    lp(i,n){
        cin >> weights[i];
    }
    sort(weights.begin(), weights.end());
    int i=0;
    int j=n-1;
    int gondoles = 0;
    while(i<=j){
        if(weights[i]+weights[j] <= x){
            gondoles++;
            i++;
            j--;
        }else{
        j--;
        gondoles++;
        }
    }
    cout << gondoles << ln;
    
    return 0;
}