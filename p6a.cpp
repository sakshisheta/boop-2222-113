#include<iostream>
using namespace std;
class student
{
private:
int no;
char name[50];
float a[10];
public:
void getdata()
{
cout<<"Enter Enrollment No:- ";
cin>>no;
cout<<"Student Name:- ";
cin>>name;
cout<<"Enter the marks of Physics,Boop & Maths:- "<<endl;
for(int i=0;i<3;i++)
{
cin>>a[i];
}
}
void showdata()
{
float per=0,sum;
for(int i=0;i<3;i++)
{
sum+=a[i];
}
per=sum/3;
cout<<"Student Details"<<endl;
cout<<"Enrollment No:-"<<no<<endl;
cout<<"Student Name:-"<<name<<endl;
cout<<"Percentage:-"<<per<<endl;
}
};
int main()
{
student obj;
obj.getdata();
obj.showdata();
return 0;
}
