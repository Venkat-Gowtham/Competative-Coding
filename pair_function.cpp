#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
	cin>>n;
	 vector<int>s;
	 int x,i;
	 for( i=0;i<n;i++)
	 {
	 	cin>>x;
	 	s.push_back(x);
	 }
    map<int,int>mpp;

	for(int i=0;i<s.size();i++){
		mpp[s[i]]++;
	}
	for(auto it:mpp)
	{
		cout<<it.first<<" "<<it.second<<" ";
	}
}
///
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
	 list<int>lis;
	 lis.push_back(20);
	 lis.push_front(10);
	 lis.pop_front(10);
	 for(auto  ot: lis){
	     cout<<ot<<" ";
	 }
}*/
