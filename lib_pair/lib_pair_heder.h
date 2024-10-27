#ifndef LIB_PAIR_LIB_PAIR_HEDER_H_
#define LIB_PAIR_LIB_PAIR_HEDER_H_

#include <iostream>
#include <string>
#include <stdexcept>

template <class T1, class T2>
class TPair {
    T1 _first;
    T2 _second;

 public:
    TPair() : _first(NULL), _second(NULL) { }
    TPair(const T1& first, const T2& second)\
        : _first(first), _second(second) { }
    TPair(const TPair& pair) : _first(pair._first), _second(pair._second) { }
    ~TPair() { }

    inline T1 first() const noexcept;
    inline T2 second() const noexcept;
    inline void set_first(const T1& value) noexcept;
    inline void set_second(const T2& value) noexcept;

    TPair& operator=(const TPair& pair) noexcept;
};

template <class T1, class T2>
inline T1 TPair<T1, T2>::first() const noexcept {
    return _first;
}

template <class T1, class T2>
inline T2 TPair<T1, T2>::second() const noexcept {
    return _second;
}

template <class T1, class T2>
inline void TPair<T1, T2>::set_first(const T1& value) noexcept {
    _first = value;
}

template <class T1, class T2>
inline void TPair<T1, T2>::set_second(const T2& value) noexcept {
    _second = value;
}

template <class T1, class T2>
TPair<T1, T2>& TPair<T1, T2>::operator=(const TPair<T1, T2>& pair) noexcept {
    if (this != &pair) {
        _first = pair._first;
        _second = pair._second;
    }
    return *this;
}
#endif  // LIB_PAIR_LIB_PAIR_HEDER_H_
