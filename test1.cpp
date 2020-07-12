#include<iostream>
#include "whattest.cpp"
#include <gtest/gtest.h>
#include<string>
using namespace std; 
TEST(NumberToWordTest, PositiveTest) {
	
	
    ASSERT_EQ("Forty Five ",convertToWords(45));//Test Case For Basic Input
    ASSERT_EQ("Twelve Thousand Three Hundred and Forty Five ",convertToWords(12345));//Test Case Without Decimal
    ASSERT_EQ("One Lakh Twenty Three Thousand Four Hundred and Fifty Six 78/100 Only",addDecVal(123456.78));//Test Case With Decimal
    ASSERT_EQ("Nine Lakh Ninety Nine Thousand Nine Hundred and Ninety Nine 99/100 Only",addDecVal(999999.99));//Test Case For Max    Possible Value
    ASSERT_EQ("One Lakh Twenty Three Thousand Four Hundred and Fifty Six 78/100 Only",addDecVal (123456.7893));//Test Case For Handling Upto Two Decimal Values                                
    ASSERT_TRUE(86==decval(106.86));//Test Case For Seperation of Decimal and Whole Number
 }
 
TEST(NumberToWordTest, NegativeTest) {
    ASSERT_EQ("Amount Should Be Greater Than Zero", convertToWords(-100.20));//Negative Number Test Case or Less Than Zero
    ASSERT_EQ("One Thousand ", corner_case(1000));//Corner Case For Direct Value
    ASSERT_EQ("Zero.", corner_case(0));//Corner Case For Zero Value
    ASSERT_EQ("Sorry Can't Handle That Big Amount", convertToWords(1234564566.78));//Corner Case for Value Gt than 9999999.99
    
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

