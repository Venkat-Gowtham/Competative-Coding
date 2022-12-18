/*#include<bits/stdc++.h>

using namespace std;
int Find(int ind ,int A[],int t){
	 if(ind==6){
	 	if(t==0) return 1;
	 	else return 0;
	 }
		
	//pick call 
	for(int i=0;i<6;i++){
		int left=0;
		int right=0;
		if(t>=A[ind])
		{
		left=Find(ind,A,t-A[ind]);
		}
	  right=Find(ind+1,A,t);
		return left+right;
	}
}
int main(){
	int t;
	int A[6]= {1,2,3,4,5,6};
	cin>>t;
	cout<<Find(0,A,t);
}*/


#include<bits/stdc++.h>
using namespace std;
int c=0;
void count(long long n){
	if(n==0){
		c+=1;
		return;
	}
	for (int i=1;i<=n;i++){
		count(n-i);
	}
}
int main(){
	long long n;
	cin>>n;
	count(n);
	cout<<c;
}
