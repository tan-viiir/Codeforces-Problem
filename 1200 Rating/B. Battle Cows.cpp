#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define f first
#define s second
#define in insert
#define pll pair<ll,ll>
#define pii pair<int,int>
#define er erase
#define pi 3.141592653589793238
#define MOD 1000000007
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define INF (ll)1000000000000000
#define all(x) x.begin(),x.end()
//#define end cout<<endl
#define bcntz __builtin_ctz
#define fl(i,n) for(int i=0;i<n;i++)
using namespace std;
#define st(s) sort(s.begin(),s.end())

ll check(ll a[], ll n, ll k){
   ll cnt = 0;
   ll mx = 0;
   for(int i=0;i<=k;i++){
      mx = max(mx,a[i]);
   }

   if(mx>a[k]){
      return cnt;
   }

   else if(k!=0) cnt++;

   for(ll i=k+1;i<n;i++){
      if(a[i] < a[k]) cnt++;
      else break;
   }

   return cnt;
}


void solve()
{
   int n,k;
   cin>>n>>k;
   k--;
   ll a[n],b[n],c[n];

   for(int i=0;i<n;i++){
      cin>>a[i];
      b[i] = c[i] = a[i];
   }
 
   if(k!=0) swap(b[0],b[k]);
   ll ans = INT_MIN;
   ans = max(ans,check(b,n,0));
   
   ll pos = -1;
   for(int i=0;i<=k;i++){
      if(a[i]>a[k]){
         pos = i;
         break;
      }
   }

   if(pos!=-1){
      swap(c[pos],c[k]);
      ans = max(ans,check(c,n,pos));
   }
   
   cout<<ans<<endl;

}
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
 
  int t;
  cin>>t;
  while(t--)
  {
     solve();
  }
    
}