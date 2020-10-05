#include <string>
#include <iostream>
#include <cstdio>

void foo(...){puts("PASS");}

template<class... T> void foo(T...){};

int main()
{
    // Write code here to call foo and print PASS.
    foo();
    return 0;
}


