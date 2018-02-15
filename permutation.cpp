#include <bits/stdc++.h>
 
using namespace std;

/* Function to swap values at two pointers */
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
 
/* Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string. */
void permute(string a, int l, int r)
{
   int i;
   if (l == r)
     cout<<a<<endl;
   else
   {
       for (i = l; i <= r; i++)
       {
          swap(a[l], a[i]);
          permute(a, l+1, r);
          swap(a[l], a[i]); //backtrack
       }
   }
}
 
/* Driver program to test above functions */
int main()
{
    string str;
    cout<<"Enter the string ";
    cin>>str;
    int n = str.length();
    permute(str, 0, n-1);
    return 0;
}