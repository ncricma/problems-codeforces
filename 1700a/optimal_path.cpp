#include <iostream>
using namespace std;

long long solve(int n, int m){
    long long x = m*(m-1)/2;
    long long y = (n*(n+1)/2);
    long long res = x+(y*m);
    return res;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, m;
        cin >> n >> m;
        cout << solve(n,m) << endl;
    }   
    return 0;
}