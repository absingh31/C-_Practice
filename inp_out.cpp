// THIS PROGRAM WAS INTENDED TO PRACTICE #include<fstream> AND #define 

// #include<iostream>
// #include<fstream>

// using namespace std;

// #define start int main()   // replacing int main() with "start"
// #define print void printing(int x, int y)  // replacing function name
// #define bye return 0
// #define printf cout<<   // can write printf for cout


// print
// {
// 	printf x<<endl<<y<<endl;
// 	cout<<"this function is called here"<<endl;
// }


// start
// {
// 	int x,y;
// 	cin>>x;
// 	cin>>y;

// 	cout<<"output printing starts from here"<<endl;

// 	int to_print,sec_print,thir_print;

// 	ifstream in_obj("data.in");		// Declaring the ifstream variable
// 	ofstream out_obj("data.out");	// Declaring the ofstream variable

// 	in_obj>>to_print;				// Taking the input, here the intputs are taken one by one seperated by spaces
// 	cout<<to_print<<endl;			// Printing the first thing in "data.in"			

// 	in_obj>>sec_print;	
// 	cout<<sec_print<<endl;

// 	in_obj>>thir_print;
// 	cout<<thir_print;

// 	out_obj<<to_print<<endl<<sec_print;		// writing data to "data.out"

// 	printing(x,y);

// 	bye;							// return 0;
// }

#include <iostream>
#include <string>

using namespace std;

int main() {
    for (string line; getline(cin, line);) 
    {
        cout << line << endl;
    }
    return 0;
}

