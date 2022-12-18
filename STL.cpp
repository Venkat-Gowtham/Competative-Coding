// STL library
//VECTORS:
#include<iostream>
#include<vector>
#include<list>
#include<map>
//push_back is same as emplace_back;
A.push_back(23);
A.push_back(32);
A.push_back(22);
auto it =A.begin()+1;
a.insert(it,33);// insert at position
find function
using namespace std;
//binary search
bool  z=binary_search(A.begin(),A.end(),30);//returns whether element found or not
// lower bound ,upperbound
auto lb=lower_bound(A.begin(),A.end(),20);
auto ub=lower_bound(A.begin(),A.end(),20);//first and last occurences of element in sorted vector
//
list<int>l;
l.push_back(10);
l.push_back(10);
l.push_back(10);
//l.pop_front();
//l.erase(10);
auto x=l.begin(); //since list looks as  a double ll we cant jump to a particular adress directly.
x++;
x++;
l.insert(40);

map
c=10,s=30;
mpp.insert(make_pair(c,s));// pairs
multimap<char,string>mp;
//a=apple
//a=ant
mpp.find(key)!=mpp.end()




//priority queue
priority_queue<int>mpq;//max heap
priotity_queue<int,vector<int>,greater<int>>pq;// min heap




