#include <bits/stdc++.h>

using namespace std;


// INTERESTING FACT ABOUT ITERATORS: THEY POINT TO AN ELEMENT IN THE CONTAINER NOT TO SOME INDEX OF THE container
void print(list<int> l1)
{
	list<int>::iterator it;
	for(it = l1.begin(); it != l1.end(); ++it)
		cout<<*it<<endl;
}

void cool_print(list<int> l1)
{
	for(auto &val:l1)
		cout<<val<<endl;
}

bool check_prime(int n)
{
	if(n==2)
		return true;

	for (int i = 2; i < sqrt(n); ++i)
	{
		if(n%i == 0)
			return false;
	}

	return true;
}

int main()
{
	list<int> l1;
	//make the list to be {10,20,30,40,40,50,60,70}
	l1.push_back(10);l1.push_back(20);l1.push_back(30);l1.push_back(40);l1.push_back(40);l1.push_back(50);l1.push_back(60);l1.push_back(70);
	//cool_print(l1);

	//removes the first occurance of 40 not all the 40 in the given list
	l1.remove(40);

	//returns the integer value saying the number of elements in the list
	l1.size();

	//check_prime is the function and this statement removes elements from the list that are prime
	remove_if(l1.begin(), l1.end(), check_prime);
	//cool_print(l1);

	list<int>::iterator it = l1.begin();

	list<int> l2;
	//now to copy all the element of l1 into l2
	l2.assign(l1.begin(), l1.end());
	
	cout<<*it<<endl;

	//advance modifies the iterator and next return the copy not modifying the iterator
	advance(it, 2);
	advance(it, -2);
	list<int>::iterator a = next(it, 2);

	cout<<*it<<endl<<*a<<*next(it, -2)<<endl;

	//returns the last element of the list
	cout<<l1.back()<<endl;
	//return the first element of the list
	cout<<l1.front()<<endl;	

	// to see of the list is empty we use this..
	cout<<l1.empty()<<endl;

	// to erase you need to tell about the iterator and ow not possible by simply specifying
	l1.erase(next(l1.begin(),3));

	// insert element between the list using iterator 
	l1.insert(next(l1.begin(),2), 120);

	// to sort in decreasing order
	l1.sort(greater<int>());

	//sort the list elements in acsending order
	l1.sort();
	l2.sort();

	// to merge 2 list we need them sorted ow it won't work making the second list empty
	l1.merge(l2);

	// this assigns the l1 to l2 also resizing the container size of the first list and doesn't affect the l1 container at all
	l2 = l1;
	cout<<"Size of first is "<<l1.size()<<"\t"<<"Size of the second is "<<l2.size()<<endl;

	//removes the element from last and decrease the size of list by one element
	l1.pop_back();

	//removes the element from front and resizes the list by one    ####INTERESTING FACT IS BOTH OF THEM TAKES CONSTANT TIME  (FRONT AND BACK)
	l1.pop_front();

	//push element to front of the list and the complexity is constant
	l1.push_front(12341);

	// reverse iterator these both does the opposite of begin and end, also increament of rbegin leads towards backwards direction means towards the start of the list
	list<int>::reverse_iterator rit;
	rit = l1.rbegin();
	list<int>::reverse_iterator rite;
	rite = l1.rend();
	// for example
	for(rit = l1.rbegin(); rit != l1.rend(); ++rit)
		{/*do here whatever you want*/}

	// resize the list, and if n is more then initialise the elements with 0..###NEXT LINE REDUCES THE SIZE OF 5 ELEMENTS BUT NOT DISTURBING THE ELEMENTS
	l1.resize(5);
	// resize the 5 size list to 8 size and with the new 3 elements with value 100
	l1.resize(8,100);
	// resize the 8 elements list to 12 with new element values to be 0
	l1.resize(12);

	//reverse the list l1
	l1.reverse();

	list<int>::iterator nit;
	nit = l1.begin();

	// this line inserts list l2 into the position of the given nit iterator in l1
	l1.splice(nit, l2);

	//this line inserts the elements from nit to the end of list one to the begin of l1
	l1.splice(l1.begin(), l1, nit, l1.end());

	//swap both the list by resizing them accordingly
	l1.swap(l2);

	list<int> li;
	li.push_back(1); li.push_back(3); li.push_back(2); li.push_back(1);
	li.sort();

	//works on sorted list so it removes redundant elements from the list
	li.unique();	
	cool_print(li);

	return 0;
}