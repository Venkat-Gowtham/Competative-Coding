#include<iostream>
using namespace std;
typedef long long ll;
const ll MAXN=1e6+5;
bool primes[MAXN];
ll prefix[MAXN];
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
	prefix[0]=0;
		for(int i=0;i<=MAXN;i++)
		{
			prefix[i]=prefix[i-1]+primes[i];
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
		cout<<prefix[n];//number of primes upto nth number
		
	}
}
