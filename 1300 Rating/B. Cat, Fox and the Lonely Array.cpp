#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define vinput for(auto& x: v) cin >> x;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define range(i,x,y) for(int i=x;i<=y;i++)
#define range_back(i,x,y) for(int i=y;i>=x;i--)

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

bool check(ll k, vl &v, int n){
    vl bits(22, 0);
    range(i, 0, k-1){
        int x = v[i];
        int j = 0;
        while(x > 0){
            if(x % 2)
                bits[j]++;
            j++;
            x /= 2;
        }
    }
    vl freq = bits;
    range(i, k, n-1){
        int x = v[i];
        int j = 0;
        while(x > 0){
            if(x % 2)
                freq[j]++;
            j++;
            x /= 2;
        }
        x = v[i-k];
        j = 0;
        while(x > 0){
            if(x % 2)
                freq[j]--;
            j++;
            x /= 2;
        }
        range(i, 0, 21){
            if(freq[i]>0&&bits[i]==0)return false;
            if(freq[i]==0&&bits[i]>0)return false;
        }
        
    }
    return true;
}

void Solve() {
    int n;
    cin >> n;
    vl v(n);
    vinput;
    
    ll l = 1, r = n, ans = n;
    while(l <= r){
        ll mid = (l + r) / 2;
        
        if(check(mid, v, n)){
            r = mid - 1;
            ans = mid;
        }
        else l = mid + 1;
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