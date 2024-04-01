
#include "./max_decltype.hpp"
#include "./max_decltype_decay.hpp"
#include "./max_common.hpp"

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

    cout << "max_decltype(7,i): " << ::max_decltype(7, i) << endl;
    cout << "max_decltype(f1,f2): " << ::max_decltype(f1, f2) << endl;
    cout << "max_decltype(s1,s2): " << ::max_decltype(s1, s2) << endl;
    cout << "max_decltype(i,f2): " << ::max_decltype(i, f2) << endl;
    // cout << "max_decltype(f1,s2): " << ::max_decltype(f1, s2) << endl; // will crash (double&, std::string&)

    cout << "max_decltype_decay(7,i): " << ::max_decltype_decay(7, i) << endl;
    cout << "max_decltype_decay(f1,f2): " << ::max_decltype_decay(f1, f2) << endl;
    cout << "max_decltype_decay(s1,s2): " << ::max_decltype_decay(s1, s2) << endl;
    cout << "max_decltype_decay(i,f2): " << ::max_decltype_decay(i, f2) << endl;
    // cout << "max_decltype(f1,s2): " << ::max_decltype(f1, s2) << endl; // will crash (double&, std::string&)

    cout << "max_common(4.2, 6): " << ::max_common(4.2, 6) << endl;
    cout << "max_common(6, 4.2): " << ::max_common(6, 4.2) << endl;

    return 0;
}

// must using ::max_decltype, for make sure that we call the "global 'max_decltype'"
