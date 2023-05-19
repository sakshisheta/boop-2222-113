#include<iostream>
using namespace std;
class box
{
private:
float length,width,height,volume;
public:
void cuboid()
{
cout<<"Enter Length:- ";
cin>>length;
cout<<"Enter Width:- ";
cin>>width;
cout<<"Enter Height";
cin>>height;
volume=length*width*height;
cout<<"Volume:- "<<volume<<endl;
}
void cube()
{
float volumeofcube=0;
int l;
cout<<"Enter L:- ";
cin>>l;
volumeofcube=l*l*l;
cout<<"Volume of Cube:- "<<volumeofcube<<endl;
}
};
int main()
{
box obj;
obj.cuboid();
obj.cube();
}
