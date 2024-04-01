
#ifndef H_MAX_1
#define H_MAX_1

#include <iostream>
using std::cout;
using std::endl;

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

template <typename T1, typename T2>
auto max_2(T1 a, T2 b)
{
    return b < a ? a : b;
}

#endif