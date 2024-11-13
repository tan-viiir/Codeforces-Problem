#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define ff first
#define ss second
#define sz size()
#define pb push_back
#define vinput for(auto& x: v) cin >> x;
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
#define range(i,x,y) for(int i=x;i<y;i++)
#define range_back(i,x,y) for(int i=y-1;i>=x;i--)

typedef vector<int> vi;
typedef vector<double> vd;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<pii> vii;

void Solve() {
    int n;
    double d, h;
    cin >> n >> d >> h;
    vd v(n);
    vinput;

    double ans = 0.0;

    range(i, 1, n) {
        double height_diff = v[i] - v[i - 1];

        if (height_diff < h) {
            double trap_h = height_diff;

            double d_top = d * (h - trap_h) / h;

            double area = trap_h * (d + d_top) / 2;
            ans += area;
        } else {
            double area = (d * h) / 2;
            ans += area;
        }
    }

    double last_area = (d * h) / 2;
    ans += last_area;

    cout << fixed << setprecision(6) << ans << endl;
}

int main() {
    optimize();

    int t = 1;
    cin >> t;
    while (t--) Solve();

    return 0;
}