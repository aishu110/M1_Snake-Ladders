#include "unity.h"

#include "mainheader.h"






/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}




/* Prototypes for all the test functions */


void test_units(void){
        
        int unit=40;
  	TEST_ASSERT_EQUAL(80,units(unit));
      
}




int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_units);

return UNITY_END();
}
