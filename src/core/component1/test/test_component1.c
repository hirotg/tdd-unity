#include "unity.h"
#include "component1.h"

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Tear down code if needed
}

void test_component1_function1(void) {

    TEST_ASSERT_EQUAL(3, component1_function1(1, 2));
    TEST_ASSERT_EQUAL(7, component1_function1(3,4));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_component1_function1);
    return UNITY_END();
}