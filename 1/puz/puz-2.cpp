#include <cstdio>
#include <cstdlib>

int foo(double a, double b)
{
    if(a==b) return 0;
    if(a>b) return 1;
    if(a<b) return -1;
    puts("PASS");
    return 2;
}

int main()
{
    // Call foo so that it prints PASS.
    foo(0,-0);    
    return 0;
}


