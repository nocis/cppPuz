#include <cstdio>


template<class R,class S>
bool operator!= (const R* lhs, const S* rhs) { return true; }


template<class R,class S,class T>
void foo(R* r, S* s, T* t)
{
    s = r;
    t = s;
    if(r != t) puts("PASS");
}


class A{};


int main()
{
    // Call foo so that it prints PASS.

    A a;
    A b;
    A c;
    
    foo(&c, &b, &a);
    return 0;
}


