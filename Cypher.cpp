#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	

}
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++)
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int c;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		string s;
		cin>>s;
		c=0;
		for(int j=0;j<k;j++)
		{
			if(s[j]=='D')
			{
				c++;
			}
			else
			{
				c--;
			}
		}
		arr[i]+=c;
		// cout<<c<<"\n";
		c=0;
		
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			arr[i]+=10;
		}
		if(arr[i]>9)
		{
			arr[i]-=10;
		}
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
return 0;
}