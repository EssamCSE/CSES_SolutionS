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

int max_Subarray_Sum(vector<int>& arr, int l, int r) {
    if (l == r) return arr[l];

    int m = l + (r - l) / 2;
    int LSS = max_Subarray_Sum(arr, l, m);
    int RSS = max_Subarray_Sum(arr, m+1, r);

    int sum = 0, left_sum = INT_MIN, right_sum = INT_MIN;

    for (int i = m; i >= l; i--) {
        sum += arr[i];
        left_sum = max(left_sum, sum);
    }
    
    sum = 0;
    for (int i = m + 1; i <= r; i++) {
        sum += arr[i];
        right_sum = max(right_sum, sum);
    }

    return max(max(LSS, RSS), left_sum + right_sum);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    lp(i, n) {
        cin >> a[i];
    }
    cout << max_Subarray_Sum(a, 0, n - 1);
    return 0;
}
