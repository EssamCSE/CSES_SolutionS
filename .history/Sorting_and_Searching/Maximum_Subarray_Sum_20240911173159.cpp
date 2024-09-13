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

int max_Subarray_Sum(int [], int s){
    if(s==1) return 1;
    int m = m/2;
    int lss = max_Subarray_Sum(s, m);
}



int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    lp(i,n){
        cin >> a[i];
    }
    return 0;
}