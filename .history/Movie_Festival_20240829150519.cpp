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
    vector <pair<int,int>> events;
    lp(i,n){
        int start, end;
        cin >> start >> end;
        events.push_back({start,end});
    }
    sort(all(events));
    int Movies = 0;
    int maxMovies = 0;

    rep(i,events){
        if(i==0){
            Movies++;
            continue;
        }
        if(events[i-1].second >= events[i].first){
            Movies++;
        }
    }
    
    cout << Movies << ln;
    return 0;
}