#include<iostream>
using namespace std;
typedef long long ll;
const ll MAXN=1e6+5;
bool primes[MAXN];
void gen_seive()
{
	for(int i=0;i<=MAXN;i++)primes[i]=true;
	primes[0]=primes[1]=false;
	for(int i=2;i*i<=MAXN;i++)
	{
		if(primes[i]==true)
		{
		  for(int j=i*i;j<=MAXN;j+=i)
		  {
		  	primes[j]=false;
			}	
		}
	}

}
int main()
{
	ll l;
	ll r;
	cin>>l;
	cin>>r;
	gen_seive();
	ll s=1;
	for(int i=l;i<=r;i++)
	{
		if(primes[i]==1)
		{
			s*=i;
		}
	}
	cout<<s;
}
