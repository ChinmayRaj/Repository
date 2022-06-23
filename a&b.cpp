#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
	ll t, a, b, ans;
	cin>>t;
	while(t--)
	{
	    ans = 0;
	    cin>>a>>b;
	    if(a > b) swap(a,b);
	    if(a == 0 && b == 0) cout<<ans<<"\n";
	    else if(a == 0 ) cout<<"-1\n";
	    else{
	        while(a < b){
	            a *= 2;
	            ans++;
	        }
	        cout<<ans+b<<endl;
	    }
	    
	    
	}
	return 0;
}