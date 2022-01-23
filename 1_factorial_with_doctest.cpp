#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
// #define DOCTEST_CONFIG_IMPLEMENT
#define DOCTEST_CONFIG_SUPER_FAST_ASSERTS
#include "doctest.h"

int factorial(int number) {
    // return number <= 1 ? number : factorial(number - 1) * number;
    return number > 1 ? factorial(number - 1) * number : 1;
}

TEST_CASE("testing the factorial function") {
    // REQUIRE(22.0 / 7 == doctest::Approx(3.141));
    REQUIRE(22.0 / 7 == doctest::Approx(3.141).epsilon(0.01));

    CHECK(factorial(0) == 1);
    CHECK(factorial(1) == 1);
    CHECK(factorial(2) == 2);
    CHECK(factorial(3) == 6);
    CHECK(factorial(10) == 3628800);
}
