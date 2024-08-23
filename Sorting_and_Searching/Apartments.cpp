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
    int n,m,k;
    cin >> n >> m >>k;
    vector<int> applicants(n);
    vector<int> apartemnts(m);

    lp(i,n){
        cin >> applicants[i];
    }

    lp(i,m){
        cin >> apartemnts[i];
    }
    sort(applicants.begin(),  applicants.end());
    sort(apartemnts.begin(),  apartemnts.end());
    int i =0;
    int j = 0;
    int counte = 0;
    while(i<n){

        while(j<m && apartemnts[j] < applicants[i]  - k) {
            j++;
        }
        if(abs(apartemnts[j]-applicants[i]) <= k){
            counte++;
            i++;
            j++;
        }
        else{
            i++;
        }

    }
    cout << counte;
} 