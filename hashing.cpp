#include <iostream>
#include <stdlib.h>

#define MAX 1000
using namespace std;

int has[MAX][2];

void insert(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if(a[i]>=0)
            has[i][0] = 1;
        else 
            has[abs(i)][1] = 1;
    }
}

bool search(int x)
{
    if(x>=0)
    {
        if(has[x][0] == 1)
        {
            cout<<"Found that bitch for you!!"<<endl;
            return true;
        }
        else
        {
            cout<<"That bitch can't be found"<<endl;
            return false;
        }
    }
    else
    {
        if(has[abs(x)][1] == 1)
        {
            cout<<"Found the bitch for you"<<endl;
            return true;
        }
        else
        {
            cout<<"Mentioned bitch can't be found"<<endl;
            return false;
        }
    }
}

int main()
{
    int a[]={1,2,4,5,6,7};
    int n = sizeof(a)/sizeof(int);

    insert(a, n);
    cout<<"Welcome to hashing demonstration\n"<<endl;
    cout<<"**********MENU**********\n"<<endl;

    while(1)
    {
        cout<<"Press 1 for searching\nPress 2 to exit"<<endl;
        int choice;
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: cout<<"Enter the number you wanna search"<<endl;
                    int to_sear;
                    scanf("%d", &to_sear);
                    search(to_sear);
                    break;
            case 2: exit(0);
                    break;
            default: cout<<"Maybe you entered the wrong choice"<<endl;
        }
    }
    return 0;
}
