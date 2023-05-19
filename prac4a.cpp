#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter a"<<endl;
cin>>a;
cout<<"enter b"<<endl;
cin>>b;
cout<<"enter c"<<endl;
cin>>c;
cout<<"maximum="<<max(a,b,c);
return 0;
{
int max=a;
if(b>max)
{
max=b;
}
if(c>max)
{
max=c;
}
return(max);
}
}
