// #include<bits/stdc++.h>

// using namespace std;
// int main()
// {
// 	string str1,str2;
// 	cin>>str1>>str2;
// 	// str1="abhishek";
// 	// str2 = "singh";
// 	int a=4,b=6;
// 	cout<<str1<<str2<<endl;
// 	cout<<str1.capacity()<<endl;
	
	
// 	cout<<str1.find_first_of("h")<<endl;
// 	cout<<str1.find_first_not_of("b")<<endl;
// 	str1.erase(0,1);
// 	str2.replace(1,2,"lololololoilo");
// 	cout<<str1<<endl<<str2<<endl;

// 	char word[20];
// 	cin>>word;
//     string obj(word);
//     word.erase(0,1);
//     cout<<word<<endl;

// 	return 0;

// }



#include <iostream>
#include <string>

int main ()
{
  std::string str="to be question";
  std::string str2="the ";

  // used in the same order as described above:
  str.insert(6,str2);                

  std::cout << str << '\n';
  return 0;
}