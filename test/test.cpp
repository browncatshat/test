#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <lib.hpp>



TEST_CASE("add test") {
    CHECK(add(1, 2) == 3);
}

TEST_CASE("multiply test") {
    CHECK(multiply(1, 2) == 2);
}
