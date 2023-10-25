
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
    string s;
    cin>>s;
    ll ans =0,c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            c++;
        }
        else{
            ans = max(ans ,c);
            c=0;
        }
    }
    ans=max(c,ans);
    cout<<ans+1;
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
