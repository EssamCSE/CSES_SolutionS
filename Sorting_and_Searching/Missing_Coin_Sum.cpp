#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    ll smallestSum = 1;
    for(int i = 0; i < n && smallestSum >= arr[i]; i++){
        smallestSum += arr[i];
    }
    cout << smallestSum << ln;

    return 0;
}