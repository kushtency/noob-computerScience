#include <bits/stdc++.h>
#define ll long long int 

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll ans1 = (a*b)%100;
    ll ans2 = (c*d)%100;
    ll ans = (ans1*ans2)%100;
    if(ans<9)
    cout<<"0";
    cout<<ans<<'\n';
    

}