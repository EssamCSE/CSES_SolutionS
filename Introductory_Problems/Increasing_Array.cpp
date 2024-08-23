#include <bits/stdc++.h>
using namespace std;


//____________________ Increasing Array __________________//
//_________________________ Accept ______________________//


int main(){
    int n; cin >> n;

    int a[n]; long long moves=0;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i] < a[i-1])
        {
            moves +=  (a[i-1] - a[i]);
            a[i] = a[i-1];
        }
        
    }
    
    cout << moves;
}

