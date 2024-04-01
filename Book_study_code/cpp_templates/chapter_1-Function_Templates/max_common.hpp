
#ifndef H_MAX_COMMON
#define H_MAX_COMMON

#include <type_traits>

template <typename T1, typename T2>
std::common_type_t<T1, T2> max_common(T1 a, T2 b)
{
    return b < a ? a : b;
}

#endif
