//! Unit Tests for MPAGSCipher 
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "RunCaesarCipher.hpp"

TEST_CASE("encryption works", "[encrypt]") {
    std::string test_str = "CIPHERTESTTEXT";
    std::string test_out_str = "HNUMJWYJXYYJCY";
    REQUIRE( runCaesarCipher(test_str, 5, true) == test_out_str );
}

TEST_CASE("decrption works", "[decrypt]") {
    std::string test_str = "HNUMJWYJXYYJCY";
    std::string test_out_str = "CIPHERTESTTEXT";
    REQUIRE( runCaesarCipher(test_str, 5, false) == test_out_str );
}