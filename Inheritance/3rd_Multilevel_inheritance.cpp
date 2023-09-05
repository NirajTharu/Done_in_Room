//Multilevel inheritance
#include<iostream>
using namespace std;
class College
{
    int Ccode;
    char Cname[30];
    public:
    void getinfo()
    {
        cout<<"Enter the code and name of the College:"<<endl;
        cin>>Ccode>>Cname;
    }
    void display()
    {
        cout<<"The code and name of the college is:"<<Ccode <<" And "<<Cname<<endl;
    }
};


class GHostel:public College
{
    int RoomN;    
    public:
    void getinfo0()
    {
        getinfo();
        cout<<"Enter Numbers of Rooms in Girls Hostel:"<<endl;
        cin>>RoomN;
    }
    void display0()
    {
        display();
        cout<<"The Numbers of Room in Girls Hostel is:"<<RoomN<<endl;
    }
};
class Bhostel:public GHostel
{
    int roomN;
    public:
    void getinfo1()
    {   
        getinfo0();
        cout<<"Enter the Numbers of Rooms in Boys Hostel:"<<endl;
        cin>>roomN;
    }
    void display1()
    {
        display0();
        cout<<"The Number of Room in Boys Hostel is:"<<roomN<<endl;
    }
};
int main()
{
    Bhostel b;
    b.getinfo1();
    b.display1();
    return 0;
}