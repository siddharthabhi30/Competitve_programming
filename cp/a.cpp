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
ll ans=100000000000000;
ll done[100005];
struct val{
    ll node;
    ll dist;
    ll times;
};
 ll k;

void dfs(ll node, ll dist, ll times){
    if(special.count(node)){
        times++;
    }
    if(times==k){
        ans=min(ans,dist);
    }

    for(auto nn:adj[node]){
        if(!done[nn]){
            dfs(nn,dist+1,times);
        }
    }

    done[node]=0;

}

int main(){
 IOS
 ll n,m;
 cin>>n>>m;
 set<int> s;
 ll a,b;
 fo(i,m){
     cin>>a>>b;
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
 fo(i,n+1){
        done[i]=0;
}
fo(i,k){
    dfs(c[i],1,0);
}
cout<<ans<<endl;
return;

 

    
}