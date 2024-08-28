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
    int n,m;
    cin >> n >> m;
    vector<int> tickets(n);
    vector<int> customers(m);
    set<pair<int,int>> sortedTickets;

    lp(i,n){
        cin >> tickets[i];
        sortedTickets.insert({tickets[i], i});       
    }

    lp(i,m){
        cin >> customers[i];
        auto it = sortedTickets.lower_bound({customers[i]+1, 0}); //lower_bound({customers[i]+1, 0}) finds the first ticket that is strictly greater than what the customer is willing to pay.
        if(it == sortedTickets.begin()){
            cout << -1 << ln;
        }
        else{
            it--;
            cout << it->first << ln;
            sortedTickets.erase(it);
        }
    }   
}