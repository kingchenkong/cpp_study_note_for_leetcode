
#ifndef H_MAX_DEFAULT
#define H_MAX_DEFAULT

#include <type_traits>

template <typename T1, typename T2,
          typename RT = std::decay_t<decltype(true ? T1() : T2())>>
RT max_default_1(T1 a, T2 b)
{
    return b < a ? a : b;
}

template <typename T1, typename T2,
          typename RT = std::common_type_t<T1, T2>>
RT max_default_2(T1 a, T2 b)
{
    return b < a ? a : b;
}

#endif