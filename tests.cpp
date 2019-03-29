#define CATCH_CONFIG_MAIN
#include "catch/catch.hpp"
#include "game.cpp"

TEST_CASE("Verificação da função soma_string") {
    SECTION("Casos de quebras básicas"){
        REQUIRE(game() == 0);
    }
}

