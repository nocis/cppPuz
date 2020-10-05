#include <string>
#include <iostream>
#include <cstdio>

struct A
{
    void f() {puts("PASS");}
};

A A; // This is here to make this fun.

int main()
{
    // Write code here so that this function will call f().
    decltype(A) a;
    a.f();

    return 0;
}


