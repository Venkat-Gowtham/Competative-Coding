#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN=1e6+5;
ll primes[MAXN];
void gen_seive()
{
	for(int i=0;i<=MAXN;i++)primes[i]=i;
	primes[0]=primes[1]=0;
	for(int i=2;i*i<=MAXN;i++)
	{
		if(primes[i]==i)
		{
		  for(int j=i*i;j<=MAXN;j+=i)
		  {
		  	if(primes[j]==j)
		  	{
		  	     primes[j]=i;	
			  }
	 		}
		}
	}

}
int main()
{
	ll q;
	cin>>q;
	gen_seive();
	while(q--)
	{
		ll n;
		cin>>n;
		map<int,int>mpp;
		while(n!=1)
		{
			mpp[primes[n]]++;
			n=n/primes[n];
		}
		for(auto it: mpp)
		{
			cout<<it.first<<" "<<it.second<<endl;
		}
	}
}
