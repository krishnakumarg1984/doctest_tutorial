#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>

#include "../doctest.h"

TEST_CASE("lots of nested subcases") {
    std::cout << '\n' << "root" << '\n';
    SUBCASE("") {
        std::cout << "1" << '\n';
        SUBCASE("") { std::cout << "1.1" << '\n'; }
    }
    SUBCASE("") {
        std::cout << "2" << '\n';
        SUBCASE("") { std::cout << "2.1" << '\n'; }
        SUBCASE("") {
            std::cout << "2.2" << '\n';
            SUBCASE("") {
                std::cout << "2.2.1" << '\n';
                SUBCASE("") { std::cout << "2.2.1.1" << '\n'; }
                SUBCASE("") { std::cout << "2.2.1.2" << '\n'; }
            }
        }
        SUBCASE("") { std::cout << "2.3" << '\n'; }
        SUBCASE("") { std::cout << "2.4" << '\n'; }
    }
    SUBCASE("") {
        std::cout << "1" << '\n';
        SUBCASE("") { std::cout << "1.1" << '\n'; }
    }
    SUBCASE("") {
        std::cout << "2" << '\n';
        SUBCASE("") { std::cout << "2.1" << '\n'; }
        SUBCASE("") {
            std::cout << "2.2" << '\n';
            SUBCASE("") {
                std::cout << "2.2.1" << '\n';
                SUBCASE("") { std::cout << "2.2.1.1" << '\n'; }
                SUBCASE("") { std::cout << "2.2.1.2" << '\n'; }
            }
        }
        SUBCASE("") { std::cout << "2.3" << '\n'; }
        SUBCASE("") { std::cout << "2.4" << '\n'; }
    }
}
