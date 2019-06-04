#include <iostream>
using namespace std;
 
int main()
{
int a[10000],b,n,x=0;
cin>>n>>b;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int i=0;i<b;i++)
{
x=x+a[i];
}
cout<<x;
return 0;
}
