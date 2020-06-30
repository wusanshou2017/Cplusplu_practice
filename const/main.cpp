#include <iostream>
// 未被const修饰的变量不需要extern显式声明！而const常量需要显式声明extern，
// 并且需要做初始化！因为常量在定义后就不能被修改，所以定义时必须初始化。
// const 声明 必须初始化
extern int ext;
extern  int ext2;

#define LABEL(constant) { #constant, constant }
const int func1(int x){
    int val =x;
    return  val;
}
int func2(int x){
    int val =x ;
    return val ;
}
// 引用传递  提高效率
int func3 (const int &x){
    int val =x ;
    return val ;
}
class Apple
{
private:
    int people[100];
public:
    Apple(int i);
    const int apple_number;
};

Apple::Apple(int i):apple_number(i)
{

}
int main() {
    const int b =10;
    const char *a ="s";
    // char const *a ="s";
    char *d ="d";
    char *const c ="c";
    //c=d;
    const int p =3;
    const int *const ptr =&p;
    std::cout <<ext<<std::endl;
    std::cout<<ext2<<std::endl;
    std::cout<<*a<<std::endl;
    std::cout<<*c<<std::endl;
    std::cout<<*ptr<<std::endl;
    std::cout<<func2(3)<<std::endl;
    std::cout<<func3(5)<<std::endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}