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
   ll t;
   cin>>t;
   
   while(t--){
       ll ans=0;
       ll n;
       cin>>n;
       ll s[n];
       fo(i,n){
           cin>>s[i];

       }
       ll spawn[n];
       fo(i,n) spawn[i]=0;

       ll cnt=0;
       
       fo(i,n){
          
           ll val=s[i];
            ll threads=spawn[i];
            ll hop=val;
            while(hop>1&&threads){
               if(i+hop<n) spawn[i+hop]++;
                hop--;
                threads--;
            }
            if(threads>0){
                if(i+1<n){
                    spawn[i+1]=threads;
                }
            }
            if(hop!=1){
                ans=ans+hop-1;
                while(hop>1){
                    if(i+hop<n){
                        spawn[i+hop]++;
                    }
                    hop--;
                }
            }
            
       }
       cout<<ans<<endl;
   }
}