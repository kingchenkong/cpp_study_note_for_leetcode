
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int max(int a, int b)
{
    cout << __func__ << ", not template, only int." << endl;
    return b < a ? a : b;
}

template <typename T>
T max(T a, T b)
{
    cout << __func__ << ", is template." << endl;
    return b < a ? a : b;
}

int main()
{
    cout << "::max(7, 42): " << ::max(7, 42) << endl;
    cout << "::max(7.2, 42.3): " << ::max(7.2, 42.3) << endl;
    cout << "::max('a', 'b'): " << ::max('a', 'b') << endl;
    cout << "::max<>(7, 42): " << ::max<>(7, 42) << endl;
    cout << "::max<double>(7, 42): " << ::max<double>(7, 42) << endl;
    cout << "::max('a', 42): " << ::max('a', 42) << endl;

    return 0;
}
