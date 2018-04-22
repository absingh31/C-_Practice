#include <bits/stdc++.h>
#define mp make_pair
using namespace std;
 
bool func(pair<string,int> a,pair<string,int> b)
{
    if(a.second>b.second)
    	return true;
    return false;
}

int main()
{
    vector < pair<string,int> > m1;        // empty map container
 
    // insert elements in random order
    
    m1.push_back(mp("chotu",44));
    m1.push_back(mp("wasim",49));
    m1.push_back(mp("abhi",46));
    sort(m1.begin(),m1.end(),func);
    
    for(vector < pair<string,int> > :: iterator it=m1.begin();it!=m1.end();it++)
    	 cout<<it->first<<" "<<it->second<<endl;
    
    return 0;
 }