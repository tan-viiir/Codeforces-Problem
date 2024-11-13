#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define vinput for(auto& x: v) cin >> x;
#define range(i,x,y) for(int i=x;i<y;i++)
#define range_back(i,x,y) for(int i=y;i>x;i--)

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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 1e9;
    for(char c = 'a'; c <= 'z'; c++){
        int l = 0, r = n - 1;
        int cnt = 0;
        while(l <= r){
            if(s[l] != s[r]){
                if(s[l] == c){
                    l++;
                    cnt++;
                }
                else if(s[r] == c){
                    r--;
                    cnt++;
                }
                else{
                    cnt = 1e9;
                    break;
                }
            }
            else{
                l++;
                r--;
            }
        }
        ans = min(ans, cnt);
    }
    
    cout << (ans == 1e9 ? -1 : ans) << endl;
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}