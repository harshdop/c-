#include<iostream>
using namespace std;
float vol(int, int);//  Here the formula for volume of cylinder is (pie)hrr
int vol(int, int ,int);
int main()
{
    int r;
    int h;
    cout<<"Enter height and radius of Cylinder "<<endl;
    cin>>h>>r;
    cout<<vol(h,r)<<endl;
    int l; int b; int g;
    cout<<"Enter the lenght, breadth, height of cuboid "<<endl;
    cin>>l>>b>>g;
    cout<<vol(l,b,g);
    return 0;
}
    float vol(int x, int y)
{
    return(3.14*x*y*y);
}
int vol(int le, int br, int hi)
{
    return(le*br*hi);
}