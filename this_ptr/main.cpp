#include<iostream>
#include<cstring>

using namespace std;
class Person{
public:
    typedef enum {
        BOY = 0,
        GIRL
    }SexType;

    Person(char *n, int a,SexType s){
        name=new char[strlen(n)+1];
        strcpy(name,n);
        age=a;
        sex=s;
    }

    int get_age() const{
        return this->age;
    }
    // 不加引用 Person add_age 返回的是 当前对象的克隆
    Person& add_age(int a){
        age+=a;
        return *this;
    }

    ~Person(){
        delete [] name;
    }

private:
    char * name;
    int age;
    SexType sex;
};

class Stu{
public:
    Stu(string name, int age)
    {
        this->name= name;
        this->age=age;
    }
    Stu  gp(){
        this->age++;
        cout<<age<<endl;
        return *this;    // *this
    }

private:
    string name;
    int age;
};

int main(){
    Person p("zhangsan",20,Person::BOY);
    cout<<p.get_age()<<endl;
    cout<<p.add_age(10).get_age()<<endl;
    Stu s ("wu",20);
    s.gp().gp().gp();

    return 0;
}