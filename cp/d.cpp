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

ll k ;
  string s ,t;

  ll cal(string s){
      map<ll,ll> mp;
      for(auto pp:s){
          mp[pp-'0']++;
      }
      ll ans=0;
      FOR(i,1,9){
          ans=ans+i*pow(10,mp[i]);
      }
      return ans;

  }

int main(){

  cin>>k>>s>>t;
  map<ll,ll> mp;
  map<ll,ll> mp2;

  FOR(i,1,9){
      mp[i]=k;
  }
 
  for(auto kk:s){
      if(kk!='#'){
          mp[kk-'0']--;
      }

  }
  for(auto kk:t){
      if(kk!='#'){
          mp[kk-'0']--;
      }

  }
   mp2=mp;
  //dbg(mp[1]);
  ll cnt=0;
  double ans=0.0;
  FOR(i,1,9){
      FOR(j,1,9){
         // dbg2(i,j);
        if(mp[j]>0&&mp[i]>0){
            string t1=s;
            t1[4]='0'+i;
              string t2=t;
            t2[4]='0'+j;
              
            if(cal(t1)>cal(t2)){
                ll oo=mp[i];
                  
                mp[i]--;
                ll oo2=mp[j];
                ll total=9*k-8;
                total=total*(total-1);
                mp=mp2;
                // dbg4(i,j,oo,oo2);
                // dbg(total);
                cnt++;
                if(oo>0&&oo2>0){
                    ans=ans+(double)oo*oo2/total;
                   
                }
            }
        }
      }
  }
  
cout << std::setprecision(10) << ans << '\n';
//dbg(cnt);
  
}