/**
 * @file value.cpp
 * @author Jose Guilherme Delacroix (https://github.com/JGuilherme94/OpenFinancialPerson_ver1.0.0)
 * @brief this is implementation of the value class
 * @version 0.1
 * @date 2021-10-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "include/value.hpp"

using namespace std;

monetary::monetary(int value, int decimal)
{
    status.value = value;
    status.decimal_value = decimal;
    if (status.decimal_value)
    {
    }
    else if()
    status.total_amount = String(value) + "." + String(decimal);
}

monetary::~monetary()
{
}

void value::pre_decimal_each_digit(const int pre_decimal_value, const int& current_value);
{
    if(pre_decimal_value >= 10)
       pre_decimal_each_digit(x / 10);

    int current_value = pre_decimal_value % 10;
}