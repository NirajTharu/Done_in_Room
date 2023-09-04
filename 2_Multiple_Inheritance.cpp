//Code of Multiple Inheritance
#include<iostream>
using namespace std;
class brother
{
    int bage;
    char bname[25];
    public:
    void getinfo()
    {
        cout<<"Enter the name and age of Your brother:"<<endl;
        cin>>bname>>bage;
    }
    void display()
    {
        cout<<"The Name and age of Your Brother is:"<<bname<<" And "<<bage<<endl;
    } 
};
class You
{
    int Yage;
    char Yname[25];
    public:
    void getdata0()
    {
    cout<<"Enter Your name and age:"<<endl;
    cin>>Yname>>Yage;
    }
    void display0()
    {
        cout<<"Your name and age is:"<<Yname<<"  and "<<Yage<<endl;
    }
};
class father:public brother,You
{
    int age;
    char name[25];
    public:
    void getinfo1()
    {   
        cout<<"Enter Your father name and age:"<<endl;
        cin>>name>>age;
        getinfo();
        getdata0();  
    }
    void display1()
    {   
        cout<<"Your Father name and age is:"<<name<<" and "<<age<<endl;
        display();
        display0();
    }
};
int main()
{
    father f;
    f.getinfo1();
    f.display1();
    return 0;
}