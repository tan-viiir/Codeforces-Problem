#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define ff first
#define ss second
#define pb push_back

typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef vector<pii> vii;


void Solve() {
    int n;
    cin >> n;
    vector<vector<int>>v(n, vector<int>(n));
    vector<int>ans;
    
    for(int i=0; i<n; i++){
        int el = (1 << 30) -1;
        for(int j=0; j<n; j++){
            cin >> v[i][j];
            if(i != j)
                el &= v[i][j];
        }
        ans.push_back(el);
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i != j) && ((ans[i] | ans[j]) != v[i][j])){
                cout << "NO\n";
                return;
            }
        }
    } 
    cout << "YES\n";
    for(auto u: ans) cout << u << " ";
    cout << endl;
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}