//Hierarchical Inheritance
#include<iostream>
using namespace std;
class Sanskrit 
{   
    public:
    void display()   
    {
        cout<<"The Sanskrit language is the mother of most of the language."<<endl;
    } 
};
class English:public Sanskrit
{   
    public:
    void display0()
    {   
        display();
        cout<<"The English language is spoken all over the world."<<endl;
    }
};

class Nepali:public Sanskrit
{
    public:
    void display1()
    {   
        display();
        cout<<"The Nepali language is spoken all over the Nepal and is the National Language of Nepal."<<endl;
    }
};
int main()
{
    English e;
    Nepali n;
    e.display0();
    n.display1();
    return 0;
}