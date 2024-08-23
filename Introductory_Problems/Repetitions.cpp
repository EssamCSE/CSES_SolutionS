#include <bits/stdc++.h>
using namespace std;


//____________________ Accepted __________________//


int main(){
    string s;
    cin >> s;
    vector<int> value(s.length(),0);
    value[0]=1;
    int mx=1;
    for(int i=1; i<s.length();i++){
        if(s[i] == s[i-1]){
            value[i] = value[i-1]+1;
        }
        else{
            value[i] = 1;
        }
        mx=max(mx,value[i]);
    }
    cout << mx;

}