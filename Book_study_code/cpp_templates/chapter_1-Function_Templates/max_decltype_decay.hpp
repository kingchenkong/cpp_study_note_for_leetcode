

#ifndef H_MAX_DECLTYPE_DECAY
#define H_MAX_DECLTYPE_DECAY

#include <type_traits>

template <typename T1, typename T2>
auto max_decltype_decay(T1 a, T2 b) -> typename std::decay<decltype(true ? a : b)>::type
{
    return b < a ? a : b;
}

#endif
