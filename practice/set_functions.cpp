#include <iostream>
#include <set>
#include <list>

using namespace std;

// SET IS JUST LIKE BINARY SEARCH TREE

void cool_print(set<int> s1)
{
	for(auto &val:s1)
		cout<<val<<endl;
}

int main()
{
	list<int> l1({1,2,3,4,2,3,4});

	//way of initialising a set, also this could be done using the above method in which list is initialised
	set<int> s1(l1.begin(), l1.end());

	// insert the element in the set
	s1.insert(7);

	// returns 1 if n is present and 0 otherwise
	cout<<s1.count(10)<<endl;

	// return the iterator to element to be found or s1.end() otherwise
	cout<<*(s1.find(3))<<endl;


	//.begin(), .end(), .rbegin(), .rend(), .empty(), .clear()(deletes the whole set), .erase()	 

	cool_print(s1);	

	return 0;
}