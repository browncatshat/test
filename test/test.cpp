#define CATCH_CONFIG_MAIN
#include <catch2/internal/catch_default_main.hpp>
#include <catch2/catch_test_macros.hpp>
#include <lib.hpp>



TEST_CASE("add") {
    REQUIRE(add(1, 2) == 3);
}

TEST_CASE("multiply") {
    REQUIRE(multiply(1, 2) == 2);
}
