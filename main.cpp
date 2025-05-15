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
#ifdef CONST_CHAR_MODE
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