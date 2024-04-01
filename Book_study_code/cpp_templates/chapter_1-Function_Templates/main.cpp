
#include "./max1.hpp"

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int i = 42;
double f1 = 3.14;
double f2 = -6.7;
string s1 = "mathematics";
string s2 = "math";

int main()
{
    cout << __func__ << ", hello world !!" << endl;

    // -- 1
    cout << "max(7,i): " << ::max(7, i) << endl;
    cout << "max<int>(7,i): " << ::max<int>(7, i) << endl;
    cout << "max(f1,f2): " << ::max(f1, f2) << endl;
    cout << "max(s1,s2): " << ::max(s1, s2) << endl;

    // -- 2
    cout << "max_2(8,i): " << ::max_2(8, i) << endl;
    cout << "max_2(f1,f2): " << ::max_2(f1, f2) << endl;
    cout << "max_2(s1,s2): " << ::max_2(s1, s2) << endl;

    return 0;
}

// must using ::max, for make sure that we call the "global 'max'"
