# - Build sub-script for the MPAGSCipher library unit tests

# Most basic test
add_executable(testHello Hello_test.cpp)
add_test(NAME test-hello COMMAND testHello)

# First Catch-based test
add_executable(testCatch testCatch.cpp)
target_include_directories(testCatch PRIVATE ${CMAKE_CURRENT_LIST_DIR})
add_test(NAME test-catch COMMAND testCatch)

# test TransformChar
add_executable(testTransformChar testTransformChar.cpp)
target_include_directories(testCatch PRIVATE ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(testTransformChar MPAGSCipher)
add_test(NAME test-TransformChar COMMAND testTransformChar)

# test testCaesarCipher
add_executable(testCaesarCipher testCaesarCipher.cpp)
target_include_directories(testCaesarCipher PRIVATE ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(testCaesarCipher MPAGSCipher)
add_test(NAME test-CaesarCipher COMMAND testCaesarCipher)