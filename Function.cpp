#include<iostream>
using namespace std;
int add(int, int);
int main()
{
    int a;
    int b;
    cout<<"Enter the numbers "<<endl;
    cin>>a>>b;
    cout<<add(a,b);
    return 0;
}
int add(int x, int y)
{
    return(x+y);
}