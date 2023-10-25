#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define S second
#define L length()
#define F first
#define newline cout<<"\n";
#define all(x) x.begin(),x.end()
#define mod int(1e9+7)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
using namespace std;
 
bool cmp(pair<ll,ll>a,pair<ll,ll>b){
    return a.S<b.S;
}
 
void solve(){
    ll n;
    cin>>n;
    ll s=(n*(n+1))/2,s1=0,s2=0;
    if(s%2)cout<<"NO\n";
    else{
        ll k=s/2;
        vector<ll>v1,v2;
        cout<<"YES\n";
        while(n>0){
            if(s1+n<=k){
                s1+=n;
                v1.pb(n);
            }
            else{
                s2+=n;
                v2.pb(n);
            }
            --n;
        }
        for(auto &i: v1) cout<<i<<" ";cout<<endl;
        for(auto &i: v2) cout<<i<<" ";cout<<endl;
        
    }
}
 
int main(){
    #ifndef ONLINE_JUDGE                                                                                                                                                        
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    // cin>>t; 
    while(t--) solve();
    return 0;
}