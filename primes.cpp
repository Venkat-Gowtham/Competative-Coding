//numbers -primes (monday)
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
	ll q;
	cin>>q;
	gen_seive();
	while(q--)
	{
		ll n,i;
		cin>>n;
		/*if(primes[n]==1)
		{
			cout<<"yes";
		}
		else
		{
			cout<<"no";
		 } */
		 for(i=0;i<MAXN;i++){
		 	if(primes[i]==1){
		 		if(primes[i+n]==0){
		 			cout<<i<<"\n";
		 			break;
				 }
			 }
		 }
		// cout<<primes[75619+2];
	}
}
