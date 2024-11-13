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
#define dg(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define dg(x)
#endif

void Solve() {
    ll n, q;
    cin >> n >> q;
    vi a(n);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    
    unordered_map<ll, ll>mp;
    int last = -1;
    while(q--){
        int t;
        cin >> t;
        if(t == 1){
            ll i, x;
            cin >> i >> x;
            i--;
            if(last != -1){
                ll z;
                if(mp[i] == 0) z = last;
                else z = mp[i];
                sum -= z;
                sum += x;
                mp[i] = x;
                cout << sum << endl;
            }
            else{
                sum -= a[i];
                sum += x;
                a[i] = x;
                cout << sum << endl;
            }
        }
        else{
            ll x;
            cin >> x;
            last = x;
            sum = x * n;
            mp.clear();
            cout << sum << endl;
        }
    }
}

int main() {
    optimize();
    
    int t = 1;
    // cin >> t;
    while (t--) Solve();
    
    return 0;
}