#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

#define mod(n) (n) % 1000000007
#define e_val 2.718281828
#define stp(a,b) a.push(b)
#define all(a) a.begin(),a.end()
#define PI 3.1415926535897932384626433832795
#define rep(i,n) for( int i = 0; i < n; i++ )
#define rrep(i,n) for(int i = n - 1 ; i >= 0 ; i--)
#define crep(i,a,b) for( int i = a; i <= b; i++ )
#define endl '\n'

typedef vector<long long int> vlong long int;

typedef map<long long int,long long int> mlong long int;
typedef vector<pair<long long int,long long int> > vplong long int;


int main(){
	long long int t,n,a,b,c,d,e,f,x,y;
	cin>>n;
	map<long long int,vlong long int> m;
	rep(i,n){
		cin>>x>>y;
		m[y].push_back(x);
	}
	map<long long int,vlong long int>::iterator it;
	c = INT_MAX;
	a = 0;
	for (it = m.begin(); it != m.end(); it++){
		a = max(a,(long long int)it->second.size());
	}
	// cout<<a<<endl;
	long long int x1,y1,x2,y2;
	for (it = m.begin(); it != m.end(); it++){
		if(it->second.size() == a){
			sort(all(it->second));
			if((it->second[it->second.size()-1] - it->second[0]) < c){
				y1 = it->first;
				y2 = it->first;
				x1 = it->second[0];
				x2 = it->second[it->second.size()-1];
				c = it->second[it->second.size()-1] - it->second[0];
			}
		}
	}
	cout<<x1<<endl;
	cout<<y1<<endl;
	cout<<x2<<endl;
	cout<<y2<<endl;
	
	return 0;
}
