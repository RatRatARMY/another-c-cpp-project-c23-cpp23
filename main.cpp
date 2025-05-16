#include <iostream>
#ifdef NUMBER_MODE
#include "cheader/library1_c.h"
#include "cppheader/library1_cpp.hpp"
#include <bitset>
int main(int argc, char** argv) {
    std::cout << add(93ll, 932ll) << std::endl;
    std::cout << sub(97382ll, 193723ll) << std::endl;
    std::cout << math::add(93ll, 932ll) << std::endl;
    std::cout << math::sub(97382ll, 193723ll) << std::endl;
    std::cout << std::bitset<64>(add(93ll, 932ll)) << std::endl;
    std::cout << std::bitset<64>(sub(97382ll, 193723ll)) << std::endl;
    std::cout << std::bitset<64>(math::add(93ll, 932ll)) << std::endl;
    std::cout << std::bitset<64>(math::sub(97382ll, 193723ll)) << std::endl;
    std::cout << compl add(93ll, 932ll) << std::endl;
    std::cout << compl sub(97382ll, 193723ll) << std::endl;
    std::cout << compl math::add(93ll, 932ll) << std::endl;
    std::cout << compl math::sub(97382ll, 193723ll) << std::endl;
    std::cout << compl std::bitset<64>(add(93ll, 932ll)) << std::endl;
    std::cout << compl std::bitset<64>(sub(97382ll, 193723ll)) << std::endl;
    std::cout << compl std::bitset<64>(math::add(93ll, 932ll)) << std::endl;
    std::cout << compl std::bitset<64>(math::sub(97382ll, 193723ll)) << std::endl;
#ifdef LAMBDA_MODE
    auto f = [] {
        std::cout << add(93ll, 932ll) << std::endl;
        std::cout << sub(97382ll, 193723ll) << std::endl;
        std::cout << math::add(93ll, 932ll) << std::endl;
        std::cout << math::sub(97382ll, 193723ll) << std::endl;
        std::cout << std::bitset<64>(add(93ll, 932ll)) << std::endl;
        std::cout << std::bitset<64>(sub(97382ll, 193723ll)) << std::endl;
        std::cout << std::bitset<64>(math::add(93ll, 932ll)) << std::endl;
        std::cout << std::bitset<64>(math::sub(97382ll, 193723ll)) << std::endl;
        std::cout << compl add(93ll, 932ll) << std::endl;
        std::cout << compl sub(97382ll, 193723ll) << std::endl;
        std::cout << compl math::add(93ll, 932ll) << std::endl;
        std::cout << compl math::sub(97382ll, 193723ll) << std::endl;
        std::cout << compl std::bitset<64>(add(93ll, 932ll)) << std::endl;
        std::cout << compl std::bitset<64>(sub(97382ll, 193723ll)) << std::endl;
        std::cout << compl std::bitset<64>(math::add(93ll, 932ll)) << std::endl;
        std::cout << compl std::bitset<64>(math::sub(97382ll, 193723ll)) << std::endl;
    };
    auto g = [] {
        std::cout << "Dang bat lambda mode" << std::endl;
    };
    f();
    g();
#endif
    return 0;
}
#endif
#ifdef CONST_CHAR_PTR_MODE
int main(int argc, char** argv) {
    const char* a = "Xin chào thế giới!";
    std::cout << a << std::endl;
    return 0;
}
#endif
#ifdef STD_STRING_MODE
using str = std::string;
int main(int argc, char** argv) {
    str a = "Xin chào thế giới!";
    std::cout << a << std::endl;
    return 0;
}
#endif
#ifdef CHAR_LIST_MODE
int main(int argc, char** argv) {
    char str[] = "Xin chào thế giới!";
    std::cout << str << std::endl;
    return 0;
}
#endif
#ifdef ANOTHER_NUMBER_MODE
#include <bitset>
int main(int argc, char** argv) {
    std::cout << std::bitset<sizeof(int)*8>(12345678) << std::endl;
    std::cout << std::bitset<sizeof(unsigned long long)*8>(98765432101234567ull) << std::endl;
    return 0;
}
#endif
#ifdef CONSTEXPR_MODE
#include <bitset>
template<typename T>
constexpr size_t bitof() {
    return sizeof(T)*8;
}
int main(int argc, char** argv) {
    std::cout << std::bitset<bitof<unsigned long long>()>(1234567890987654321ull) << std::endl;
    std::cout << compl std::bitset<bitof<unsigned long long>()>(1234567890987654321ull) << std::endl;
    std::cout << 1234567890987654321ull << std::endl;
    std::cout << compl 1234567890987654321ull << std::endl;
    return 0;
}
#endif
#ifdef CHECK_ARGV_ARGC_MODE
int main(int argc, char** argv) {
    if (argv[argc] != nullptr) {
        std::cerr << "something went wrong, sorry :((((" << std::endl;
    }
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << std::endl;
    }
}
#endif