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
    for(auto& x: v) cin >> x;
    int mni = 1, mxi = n;
    
    int l = 0, r = n - 1;
    bool flag1 = 0, flag2 = 0;
    while(l <= r){
        if(v[l] == mni){
            l++;
            mni++;
        }
        else if(v[l] == mxi){
            l++;
            mxi--;
        }
        else flag1 = 1;
        
        if(v[r] == mni){
            r--;
            mni++;
        }
        else if(v[r] == mxi){
            r--;
            mxi--;
        }
        else flag2 = 1;
        
        if(flag1 && flag2){
            break;
        }
        else{
            flag1 = 0, 
            flag2 = 0;
        }
    }
    
    if(flag1 && flag2) cout << l + 1 << " " << r + 1 << endl;
    else cout << -1 << endl;
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}