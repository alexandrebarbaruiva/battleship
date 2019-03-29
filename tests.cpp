#define CATCH_CONFIG_MAIN
#include "catch/catch.hpp"
#include "game.cpp"

TEST_CASE("Verificação da função game") {
    SECTION("Caso básico"){
        REQUIRE(game() == 0);
    }
}

