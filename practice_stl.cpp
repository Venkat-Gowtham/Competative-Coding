#include<iostream>
#include<map>
#include<iterator>
#include<vector>
using namespace std;
int main(){
	map<int,int>dic;
	vector<int>A;
	int n;
	cin>>n;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		A.push_back(x);
	}
	cout<<A.back();	
	auto v=A.begin();
	cout<<*v;
	//sort(A.begin(),A.end(),greater<int>());dec
	//2d grid vector<vector<int>>grid;
//
	vector<vector<int>>grid(5,vector<int>(5,10));






pair<int,int>p(10,20);
vector<pair<int,int>>vp;
vp.push_back({10,12});
sort(vp.begin(),vp.end(),comp);
bool comp(const pair<int,int>&a,const pair<int,int>&b){
	return a.first<b.first;
	
}
for(auto it: vp){
	cout<<it.first<<" "<<it.second;
}


//custom sort

}




	
}

















static bool comp (const pair<int,int> &a,const pair<int,int> &b){
        if (a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>A;
        for (int i=0; i<n; i++){
            pair<int,int>p(start[i],end[i]);
            A.push_back(p);
        }
        sort(A.begin(),A.end(),comp);
        int count = 1;
        int temp = 0;
        for (int i=1; i<n; i++){
            if (A[i].first > A[temp].first && A[i].first > A[temp].second){
                count++;
                temp = i;
            }
        }
        return count;
