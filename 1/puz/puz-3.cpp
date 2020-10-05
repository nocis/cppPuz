#include <string>
#include <iostream>

struct A
{
    std::string a;
    void f() {std::cout<<a<<std::endl;}
};

struct B : A
{
};

struct C : A
{
    void g() {f();}
};

struct D : B, C
{
};

int main()
{
    D d;
    // Write code here so that this function call will print "PASS"
    d.C::a = "PASS";
    d.g();

    return 0;
}


