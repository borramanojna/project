#include "declare.c"
#include "unity.h"
#include<string.h>
#include "unity_internals.h"
#include "customerstru.c"
#include "unity.c"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}







void test_details(void)
{
    struct customers booking;
strcpy(booking.name,"mano");
strcpy(booking.phone,"9578462225");
booking.seat=10;


TEST_ASSERT_EQUAL_STRING("mano",booking.name);
TEST_ASSERT_EQUAL_STRING("9578462225",booking.phone);
TEST_ASSERT_EQUAL_INT(10,booking.seat);



}







int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_details);
    
    
    

    /* Close the Unity Test Framework */
    return UNITY_END();
}