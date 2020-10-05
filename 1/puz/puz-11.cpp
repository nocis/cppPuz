#include <iostream>
#include <string>

template<class... Args>
void foo(Args&&... args)
{
    // Write this.  You are not allowed to create any new classes or functions.
    // You are not allowed to use recursion.
    int lmt = sizeof...(args);
    int i = 1;
    int fun[] = {( std::cout<<(std::forward<Args>(args)), i++<lmt?(std::cout<<'+', 0):0, 0)...};
    std::cout<<std::endl;
}

struct A
{
    int g;
};

std::ostream& operator<<(std::ostream& o, const A& a)
{
    return o<<a.g;
}

int main()
{
    // this should print "0+3.5+food\n"
    foo(0,3.5,"food");
    // this should print "R+7.3+kid+food\n"
    foo('R',7.3f,"kid",std::string("food"));
    // this should print "0+0+1+0+77\n"
    foo(false,false,true,7==4,A{77});
    // prints "0+0+r+0+0+a+0+0+b+0+0+z+0+0+u+0+0++0+0+-+0+0+0+0\n"
    // This function call can be repeated with any number of arguments.
    foo(0,0,'r',0,0,'a',0,0,'b',0,0,"z",0,0,"u",0,0,"",0,0,"-",0,0,0,false);
    // prints just a newline.
    foo();

    return 0;
}


