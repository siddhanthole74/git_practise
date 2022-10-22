#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n;
	ll s=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		s+=arr[i];
	}
	ll a=s%n;
	ll ans=(n-a)*a;
	if(ans<0)
	{
		ans=abs(ans)-n;
	}
	cout<<ans<<"\n";
	}
return 0;
}