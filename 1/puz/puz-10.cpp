#include <string>
#include <iostream>
#include <cstdio>

struct A
{
    const char* s;
    A* operator&() const {return 0;}
};

void foo(A* a)
{
    puts(a->s);
}

int main()
{
    A a = {"PASS"};
    // Write code here to call foo and print PASS.
    A * b = new A(a);
    foo(b);
    return 0;
}


