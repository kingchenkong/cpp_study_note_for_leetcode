
#ifndef H_MAX_DECLTYPE
#define H_MAX_DECLTYPE

template <typename T1, typename T2>
auto max_decltype(T1 a, T2 b) -> decltype(b > a ? a : b)
{
    return b < a ? a : b;
}

#endif