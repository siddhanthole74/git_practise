#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
const int N=1e7+10;
vector<bool> vec(N,true);
vector<int> lp(N,0),hp(N,0);
int main(){
// ll n;
// cin>>n;
vec[0]=false;
vec[1]=false;
for(int i=2;i<N;++i) 
{
	if(vec[i]==true)
	{
		lp[i]=hp[i]=i;
		for(int j=2*i;j<N;j+=i)
		{
			vec[j]=false;
			hp[j]=i;
			if(lp[j]==0)
			{
				lp[j]=i;
			}
		}
	}
}
for(int i=1;i<10;i++)
{
	cout<<vec[i]<<" ";
}
cout<<lp[10]<<" "<<hp[10]<<" ";
int n;
cin>>n;
vector<int> vecc;
while(n>1)
{
	int fact=hp[n];
	while(n%fact==0)
	{
		n/=fact;
		vecc.push_back(fact);
	}
}
for(int f:vecc)
{
	cout<<f<<" ";
}
return 0;
}