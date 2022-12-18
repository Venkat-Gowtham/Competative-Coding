#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,res;
    cin>>s;
    cout<<s<<"\n";
    unordered_map<char,int>lss;
    for(auto it:s){
        lss[it]++;
    }
    priority_queue<pair<int,char>>conseq;
    for(auto it: lss){
        conseq.push({it.second,it.first});
    }
    if(conseq.top().first > ceil(s.size()/2.0))cout<<"-1";
    else{
    while(conseq.top().first!=0){
        auto top1=conseq.top();
        conseq.pop();
        res+=top1.second;
        top1.first--;
        auto top2=conseq.top();
        conseq.pop();
        if(top2.first>0)res+=top2.second;
        top2.first--;
        conseq.push({top1.first,top1.second});
        conseq.push({top2.first,top2.second});
    }
    cout<<res<<"\n";
    cout<<res.size();
    }
    
}
