#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define ff first
#define ss second
#define pb push_back

typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<pii> vii;

#ifndef ONLINE_JUDGE
#include <bits/debug.h>
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void Solve() {
    int n;
    cin >> n;
    vi v(n);
    map<int, int>mp;
    for(int i=0; i<n; i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    
    sort(v.begin(), v.end());
    int ans = 0;
    for(int i=0; i<n; i++){
        int val = v[i];
        
        if(mp[val] != 0){
            ans++;
            while(mp[val] > 0){
                mp[val]--;
                val++;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}