#include<iostream>
using namespace std;
int product(int, int, int);
int main()
{
    int x;
    int y;
    int z;
    cout<<"Enter three numbers ";
    cin>>x>>y>>z;
    cout<<product(x,y,z);
    return 0;
}
int product(int a, int b, int c)
{
    return(a*b*c);
}

