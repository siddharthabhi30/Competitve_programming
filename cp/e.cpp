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
 
 
 
int main(){
    IOS
   ll n,m,x,y;
   cin>>n>>m>>x>>y;
   map<pair<ll,ll>,pair<ll,ll>> mp;
   vector<ll> adj[n+1];
   ll a,b,t,k;
   fo(i,m){
       cin>>a>>b>>t>>k;
       adj[a].pb(b);
       adj[b].pb(a);
       mp[{a,b}]={t,k};
       mp[{b,a}]={t,k};
   }
   ll time[n+1];
   fo(i,n+1){
       time[i]=100000000000000;
   }
   priority_queue<pair<ll,ll>> pq;
   pq.push({0,x});
   time[x]=0;
   while(!pq.empty()){
       auto my=pq.top();
       pq.pop();
       ll node=my.second;
       ll dist=abs(my.first);
        time[node]=dist;
         if(dist>time[node]){
           continue;
       }
       //dbg2(node,dist);
       for(auto pp:adj[node]){
           auto info=mp[{node,pp}];
           ll t=info.first;
           ll k=info.second;
           ll extra;
           if(dist%k==0){
               extra=0;
           }
           else{
               extra=k-dist%k;
           }
           ll total=extra+t+dist;
           if(time[pp]>total){
              
               pq.push({-total,pp});
               
           }
 
       }
   }
   if(time[y]==100000000000000){
       cout<<-1<<endl;
   }
   else{
       cout<<time[y]<<endl;
   }
}