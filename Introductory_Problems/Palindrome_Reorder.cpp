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
    string str;
    cin >> str;
    vector<int> character(26, 0);

    // Count the frequency of each character
    rep(i, str) {
        character[str[i] - 'A']++;
    }

    int oddPos = -1;
    int oddCount = 0;

    // Check the number of characters with odd frequencies
    lp(i, 26) {
        if (character[i] % 2 == 1) {
            oddCount++;
            oddPos = i;
        }
    }

    // A palindrome can have at most one character with an odd frequency
    if (oddCount > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    string half;
    lp(i, 26) {
        lp(j, character[i] / 2) {
            half += (char)('A' + i);
        }
    }

    string ans = half;
    if (oddPos != -1) {
        ans += (char)('A' + oddPos);
    }
    reverse(half.begin(), half.end());
    ans += half;

    cout << ans;

    return 0;
}
