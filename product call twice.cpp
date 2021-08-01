#include<iostream>
using namespace std;
int pro(int, int=1 ,int=1);
int main()
{
    int x; int y;
 cout<<"Enter the numbers ";
 cin>>x>>y;
 cout<<pro(x,y)<<endl;
 int z;
 cout<<"Enter three numbers ";
 cin>>x>>y>>z;
 cout<<pro(x,y,z);
 return 0;
}
int pro(int a, int b, int c)
{
    return (a*b*c);
}

