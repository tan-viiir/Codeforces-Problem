#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()

void Solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    ll total_sum = 0;
    map<ll, int> freq;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
        freq[a[i]]++;
    }

    vector<int> result;
    for (int i = 0; i < n; i++) {
        ll remaining_sum = total_sum - a[i];
        if (remaining_sum % 2 == 0) {
            ll half_sum = remaining_sum / 2;
            if (freq[half_sum] > 0) {
                if (half_sum == a[i]) {
                    if (freq[half_sum] > 1) {
                        result.pb(i + 1);
                    }
                } else {
                    result.pb(i + 1);
                }
            }
        }
    }

    // Output the result
    cout << result.size() << endl;
    for (auto idx : result) {
        cout << idx << " ";
    }
    cout << endl;
}

int main() {
    optimize();

    int t = 1;
    // cin >> t;
    while (t--) Solve();

    return 0;
}