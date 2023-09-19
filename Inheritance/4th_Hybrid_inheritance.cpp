//Hybrid Inheritance(combinaton of two types or more than 2 types of inheritance is Hybrid inheritance)
#include<iostream>
using namespace std;
class Living_being
{   
    public:
    void display()
    {   
        cout<<"The organism which have life in them are called living organism."<<endl;
    }
};
class bat:virtual public Living_being
{
    public:
    void display0()
    {
        display();
        cout<<"Bat is also known as mamal because it give direct birth to their baby."<<endl;
    }
};

class Human:virtual public Living_being
{
    public:
    void display1()
    {   
        display();
        cout<<"Human Give direct birth to their baby and feed their own milk."<<endl;
    }
};
class Mamal:public bat,public Human
{
    public:
    void display2()
    {   
        display0();
        display1();
        cout<<"The animals which give direct birth to their baby and feed their own milk are called Mamal."<<endl;
    }
};
int main()
{
    Mamal m;
    m.display2();
    return 0;
}