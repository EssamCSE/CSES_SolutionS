int main() {
    int n, x;
    cin >> n >> x;
    map<int,int> valuePosition;

    lp(i,n){
        int value;
        cin >> value;
        if(valuePosition.count(x-value)){
            cout << i+1 << " " << valuePosition[x-value] << endl;
            return 0;
        }
    valuePosition[value] =i+1;
    }
    return 0;
}