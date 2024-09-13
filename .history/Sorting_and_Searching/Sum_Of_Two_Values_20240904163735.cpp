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
    int n, x;
    cin >> n >> x;
    map<int,int> valuePosition;

    lp(i,n){
        int value;
        cin >> value;
        if(valuePosition.count(x-value)){
            cout << i+1 << " " << valuePosition[x-value] << endl;
            return 0;
        }
    valuePosition[value] =i+1;
    }
    
    return 0;
}