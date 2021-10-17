/**
 * @file time.cpp
 * @author Jose Guilherme Delacroix (https://github.com/JGuilherme94/OpenFinancialPerson_ver1.0.0)
 * @brief this is the implementation of the time class
 * @version 0.1
 * @date 2021-10-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "include/time.hpp"

day::day(int week_day_index)
{
    if (week_day_index >= 0 && week_day_index <= 6) week_day_type = week_day_index;
}

day::~day()
{
}

month::month(int year_month_index)
{
    if (year_month_index >= 0 && year_month_index <= 11) year_month_type = year_month_index;
}

month::~month()
{
}

week::week(/* args */)
{
}
week::week()
{
}