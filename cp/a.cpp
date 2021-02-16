#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#include <cstdlib> 
#include <math.h>
#include<cstdio>
#include<cstring>
#include <math.h>
#define vi v(n) vector<ll> v(n);
#define FOR(I, A, B) for (ll I = (A); I <= (B); I++)
#define fo(i,n) for(ll i=0;i<n;i++)
#define sz(a) ll((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define dbg3(x,y,z) cout << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << endl
#define dbg4(x,y,z,q) cout << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << ", " << #q << " = " << q << endl
#define scan(char_array) scanf("%[^\n]s",&char_array)
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

set<ll> special;
vector<ll> adj[100005];

ll dp[1000006][18];

int main(){
 IOS
 ll n,m;
 cin>>n>>m;
 set<int> s;
 ll a,b;
 fo(i,m){
     cin>>a>>b;
     a--;
     b--;
     s.insert(a);
     s.insert(b);
     adj[a].push_back(b);
     adj[b].push_back(a);
     
 }

 cin>>k;
 ll c[k];

 fo(i,k){
     cin>>c[i];
     special.insert(c[i]);
     if(!s.count(c[i])){
            cout<<-1<<endl;
            return;
     }

 }
 ll dist[18][18];

 fo(i,k){
     fo(j,k){
         fo(k,k){
            
         }
     }
 }

 fo(i,1<<k){

 }


cout<<ans<<endl;
return;

 

    
}