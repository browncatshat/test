#define CATCH_CONFIG_MAIN

#include <lib.h>

TEST_CASE("add") {
    REQUIRE(add(1, 2) == 3);
}

TEST_CASE("multiply") {
    REQUIRE(multiply(1, 2) == 2);
}