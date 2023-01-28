
#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
int n;
cout<<"Enter any number"<<endl;
cin>>n;
int a,b,c;
a=n;
b=n;
int count=0, sum=0;
while(a>0)
{
count++;
a=a/10;
}
while(b>0)
{
c=b%10;
sum= sum+pow(c,count);
b=b/10;
}
if (sum==n)
cout<<n <<"  is Armstrong" ;
else
cout<<n<<"is not Armstrong";
}
