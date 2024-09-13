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
    ll smallestSum = 0;
    for(int i=0; i<n; i++){
        smallestSum += arr[i];
        if(1 <= smallestSum - arr[i] && )
    }
    return 0;
}