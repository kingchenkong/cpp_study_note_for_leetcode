
#include "./max_default.hpp"

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int i = 42;
long l = 3333333;
double f1 = 3.14;
double f2 = -6.7;
string s1 = "mathematics";
string s2 = "math";

int main()
{
    cout << __func__ << ", hello world !!" << endl;

    cout << "::max_default_1(i, l): " << ::max_default_1(i, l) << endl;
    cout << "::max_default_1(l, i) : " << ::max_default_1(l, i) << endl;
    cout << "::max_default_2(i, l): " << ::max_default_2(i, l) << endl;
    cout << "::max_default_2(l, i) : " << ::max_default_2(l, i) << endl;

    return 0;
}

// must using ::max_decltype, for make sure that we call the "global 'max_decltype'"
