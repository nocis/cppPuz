#include <string>
#include <iostream>

struct A
{
    template<class T> void foo() {puts("PASS");}
};

struct B : A {void foo(){}};

struct C : A {void foo(){}};

struct D : B, C
{
    void foo(){}
};

int main()
{
    D d;

    B*b = &d;
    b->A::foo<A>();
    // Write code to call foo() on d so that it will print "PASS"

    return 0;
}


