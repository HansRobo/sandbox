// reference : https://nsb248.hatenablog.com/entry/2016/02/08/145432
#define GENERATE_ENUM_ITERATOR(T)                                                   \
inline T operator++(T& x) { return x = (T)(std::underlying_type<T>::type(x) + 1); } \
inline T operator*(T c) { return c; }                                               \
inline T begin(T r) { return static_cast<T>(0); }                                   \
inline T end(T r) { T l = T::LAST; return l; }

enum class Color{
    RED,
    BLUE,
    LAST,
}

GENERATE_ENUM_ITERATOR(Color);

int main() {
    for (Color c : Color()) {
        doSomething(c);
    }
}