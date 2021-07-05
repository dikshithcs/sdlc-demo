#include<stdio.h>
#include<stdlib.h>
#include "combinational.h"
#include "unity.h"
#include "unity_internals.h"
#include<stddef.h>
void setUp(){}
void tearDown(){}

/*
void logicgates_test(void) // function to test logicgates function
{
    TEST_ASSERT_EQUAL(0,logicgates()); //checks whether the int type fucntion returns 0 or not
}
*/

void and_gate_test(void) // function to test and_gate function
{
    TEST_ASSERT_EQUAL(0,AND(0,0));
}
void or_gate_test(void) // function to test or_gate function
{
    TEST_ASSERT_EQUAL(0,OR(0,0));
}


void xor_gate_test(void) // function to test xor_gate function
{
    TEST_ASSERT_EQUAL(0,XOR(0,0));
}


int main()
{
///Initiate the Unity Test Framework
UNITY_BEGIN();
//RUN_TEST(logicgates_test);
//RUN_TEST(not_gate_test);
RUN_TEST(and_gate_test);
RUN_TEST(or_gate_test);
//RUN_TEST(nand_gate_test);
//RUN_TEST(nor_gate_test);
RUN_TEST(xor_gate_test);
//RUN_TEST(xnor_gate_test);

/// Close the Unity Test Framework
return UNITY_END();
return 0;
}