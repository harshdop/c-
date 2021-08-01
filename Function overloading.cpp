#include<iostream>
using namespace std;
int area(int,int);
double area(int);
int main()
{
    int r;
    cout<<"Enter radius of circle "<<endl;
    cin>>r;
    cout<<area(r)<<endl;
    int l;
    int b;
    cout<<"Enter Lenght and Breadth of the Rectangle "<<endl;
    cin>>l>>b;
    cout<<area(l,b);
    return 0;
}
    int area(int x, int y)
    {
    return(x*y);
    }
        double area(int R)
        {
        return(3.14*R*R);
        }
    