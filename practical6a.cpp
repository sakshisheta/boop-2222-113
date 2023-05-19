#include<iostream>
using namespace std;
class student
{
private:
int no,sub1,sub2,sub3;
char name[20];
float per;

public:
void inputdata()
{
 cout<<"enter the enrollmnt number=";
 cin>>no;
 cout<<"enter the student name=";
 cin>>name;
 cout<<"enter the marks boop,maths,BDE";
 for(i=0;i<3;i++)
 {
 cin>>sub1>>sub2>>sub3;
 }
 }
 void outputdata()
 {
 per=(sub1+sub2+sub3)/3;
 for(int i=0;i<3;i++)
 }
};
 int main()
 {
 student std;
 std.inputdata();
 std.outputdata();
 return 0;
 }							
