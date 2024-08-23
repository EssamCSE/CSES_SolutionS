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

int main(){
   
    // First way " Using SET: because it just take the distinct values"Complexity: nlog(n)

    //     int n;
    // cin >> n;
    // set <int> values;
    // lp(i,n){
    //     int value;
    //     cin >> value;
    //     values.insert(value);
    // }

    // cout << values.size() << ln;

    //Second Way: `Using Sorting` , Complexity: nlog(n)
    int n;
    cin >>n;
    vector<int> values(n);
    lp(i,n){
        cin  >> values[i];
    }

    sort(values.begin(), values.end());
    ll uniqueVlaues = 0;
    lp(i,n){
       if(i==0 || values[i] !=  values[i-1])
            uniqueVlaues++;
    }
    cout << uniqueVlaues;

}
