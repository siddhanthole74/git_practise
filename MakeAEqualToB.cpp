#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	int n;
	cin>>n;
	vector<int> v1,v2;
	for(int i=0;i<n;i++)
	{
		int p;
		cin>>p;
		v1.push_back(p);
	}
	for(int i=0;i<n;i++)
	{
		int p;
		cin>>p;
		v2.push_back(p);
	}
	int c1=0,c2=1;
	for(int i=0;i<n;i++)
	{
		if(v1[i]!=v2[i])
		{
			c1++;
		}
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	for(int i=0;i<n;i++)
	{
		if(v1[i]!=v2[i])
		{
			c2++;
		}
	}
	cout<<min(c1,c2)<<"\n";
}
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++)
{
	solve();
}
return 0;
}