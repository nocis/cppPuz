#include <string>
#include <iostream>
#include <cstdio>

// Write code here so that the contents of the main function prints PASS and FAIL.

namespace A{

    class C{
    public:
	std::string A;
    };
    
    class B{
    public:
	B():A(new C()){}
	C* A;
    };

    static B A;
}

//namespace B{
    //void A(std::string s){std::cout<<s<<std::endl;}
    //}

//using namespace B;
int main()
{
    // Write code here so that the code below prints PASS and FAIL.
    auto A = [](std::string s){std::cout<<s<<std::endl;};
    
    A::A.A->A="PASS";
    A(A::A.A->A); // This should print PASS
    A::A.A->A="FAIL";
    A(A::A.A->A); // This should print FAIL

    return 0;
}


