#include <iostream>
#include <string.h>

using namespace std ;

class A
{
public:
    A (int d ,char *p):data(d)
    {
        cout<<"ori_construct"<<endl;
        pd =new char [strlen(p)+1];
        strcpy(pd ,p);
    }
    ~A()
    {
        cout<<"destructot"<<endl;
        delete[]pd;
    }
    A(const A& another)
    {
        pd = new char[strlen(another.pd)+1];
        strcpy(pd,another.pd);
    }
    void dis() {
        cout<< &pd<<endl;
        cout << data << endl;
//      cout<< pd <<endl;
    }
private:
    int data;
    char *pd ;
};

int main() {

    A a(20,"test");
    a.dis();
    A b(a);
    b.dis();
    A c =b;
    c.dis();
    return 0;
}