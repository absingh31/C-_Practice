/*
A triangle can be formed with three points.  Given ‘n’ points, we can find the triplets which form a triangle. 
So, given ‘n’ points, we can  form triangles whose vertices are among the given ‘n’ points. Of these triangles, 
we call the triangle with minimum area triangle (the triangle with the smallest area)  as ‘Minimum area triangle’. Given 'n' points, 
design an algorithm and write a C++ code to determine the ‘Minimum Area Triangle’  that can be formed with the given points. 
Print the area of the ’minimum area triangle’ formed and their vertices in descending order. 
If more than one minimum area triangle  exist then print them in descending order as per their vertices. Given vertices, area of any polygon may be calculated as:

For example, if there are four points (0, 5), (5, 10), (10, 5), (5, 0), 
then there are four minimum area triangles that can be formed with area 25.00 and the vertices of the triangles are

 

Triangle 1 - (10, 5), (5, 10), (5, 0)

Triangle 2 – (10, 5), (5,10), (0,5)

Triangle 3 – (10,5), (5,0), (0, 5)

Triangle 4 – (5,10), (5,0), (0,5)

 

Input format

Number of points, n

X-coordinate of point1

Y-coordinate of point1

X-coordinate of point2

Y-coordinate of point2

...

...

X-coordinate of point-n

Y-coordinate of point-n

 

Output Fomat

Area of the minimum triangle

Vertices of triangle in descending order and separated by a tab

 X-coordinate of vertex1 Y-coordinate of vertex1

X-coordinate of vertex2 Y-coordinate of vertex2

X-coordinate of vertex3 Y-coordinate of vertex3

*/
#include <bits/stdc++.h>

using namespace std;

struct point
{
    double x,y;
};

bool func(struct point p1,struct point p2)
{
    if(p1.x>p2.x)
        return true;
    else if(p1.x==p2.x)
    {
        return p1.y>p2.y;
    }
    else
        return false;
}

double area(struct point p1,struct point p2,struct point p3)
{
    double a = (p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) +p3.x * (p1.y - p2.y))/2;
    return a;
}

int main()
{
    double n;
    cin>>n;
    vector<struct point> vp;
    
    for(double i=0;i<n;i++)
    {
        struct point one;
        cin>>one.x>>one.y;
        vp.push_back(one);
    }
    sort(vp.begin(),vp.end(),func);
    double possible=false;
    double maxxarea=9999999;9
    struct point one,two,three;
    for(double i=0;i<vp.size()-2;i++)
    {
        for(double j=i+1;j<vp.size()-1;j++)
        {
            for(double k=j+1;k<vp.size();k++)
            {
                double currarea=(area(vp[i],vp[j],vp[k]));
                if(currarea<0)
                    currarea*=-1.0;
                //cout<<currarea<<" this is "<<endl;
                if(currarea!=0)
                {
                    if(maxxarea>currarea)
                    {
                        maxxarea=currarea;
                        one=vp[i];
                        two=vp[j];
                        three=vp[k];
                        possible=true;
                    }
                }
            }
        }
    }
    if(possible)
    {
        cout<<maxxarea<<endl;
        for(double i=0;i<vp.size()-2;i++)
        {
            for(double j=i+1;j<vp.size()-1;j++)
            {
                for(double k=j+1;k<vp.size();k++)
                {
                    double currarea=(area(vp[i],vp[j],vp[k]));
                    if(currarea<0)
                        currarea*=-1.0;
                    //cout<<currarea<<" this is "<<endl;
                    if(currarea==maxxarea)
                    {
                            maxxarea=currarea;
                            one=vp[i];
                            two=vp[j];
                            three=vp[k];
                          //  possible=true;
                        cout<<one.x<<" "<<one.y<<endl;
                        cout<<two.x<<" "<<two.y<<endl;
                        cout<<three.x<<" "<<three.y<<endl;
                        
                    }
                }
            }
        }
        
    }
    else
    {
        cout<<"Not Possible"<<endl;
    }
}