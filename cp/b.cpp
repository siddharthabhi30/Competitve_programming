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

int lowest(int base, int pow){
    ll init=base;
    ll cnt=1;
    while(true){
        if(base>=pow){
            return cnt;
        }
        init=base*init;
        cnt++;
    }
}


class  PlanningTrips{

public :  int find(int a, vector <int> num){
    sort(all(num));
    map<int,int> mp;
    for(auto ii:num){
        mp[ii]++;
    }
  
    bool flag=true;
    while(flag){
        flag=false;
        map<int,int > final;
        for(auto ii:mp){
        if(ii.second>a){
            flag=true;
            final[ii.first+lowest(a,ii.second)]+=1;
            final[ii.first]--;
            
        }
        else{
            final[ii.first]=ii.second;
        }
       
    }
     final=mp;

    }
    vector<int> values;
    for(auto ii:mp){
        values.pb(ii.first);
    }
    sort(all(values));
    reverse(all(values));
    if(sz(values)==1){
        return values[0];
    }
    return values[0]+1;
    


    
}


};