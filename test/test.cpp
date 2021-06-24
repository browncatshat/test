#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <lib.hpp>



TEST_CASE("add test","[add]") {
    CHECK(add(1, 2) == 3);
}

TEST_CASE("multiply test","[multiply]") {
    CHECK(multiply(1, 2) == 2);
    #ifdef _MSC_VER
    FAIL("oops");
    #endif
}
