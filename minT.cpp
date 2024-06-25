#include <iostream>

template <typename T>
T min3(T a, T b, T c) {
    T min_value = a;  
    if (b < min_value) {
        min_value = b;
    }
    if (c < min_value) {
        min_value = c;
    }

    return min_value;
}

int main() {
    std::cout << "min3(1, 0, 2) = " << min3(1, 0, 2) << std::endl;  
    std::cout << "min3(1.5, 0.5, 3.0) = " << min3(1.5, 0.5, 3.0) << std::endl;  

    return 0;
}
