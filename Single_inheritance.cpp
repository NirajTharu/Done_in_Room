//Single inheritance
#include<iostream>
using namespace std;
class papa
{
  private:
  char name[25];
  int age;
  public:
  void getdata()
{
  cout<<"Enter the name age  of Your Father"<<endl;
  cin>>name>>age;
}
void showinfo()
{
cout<<"The name and age of Your Father is:"<<name<<"  And "<<age<<endl;
}
};


class son:public papa
{
  private:
char sname[25];
int sage;
public:
void getdata0()
{  
  getdata();
  cout<<"Enter Your name and Age:"<<endl;
  cin>>sname>>sage;
}

void show_info0()
{
  showinfo();
  cout<<"Your Name and age is:"<<sname<<" And  "<<sage<<endl;
}
};
int main()
{
  son s;
  s.getdata0();
  s.show_info0();
  return 0;
}
