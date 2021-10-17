/**
 * @file month.hpp
 * @author Jose Guilherme Delacroix (https://github.com/JGuilherme94/OpenFinancialPerson_ver1.0.0)
 * @brief 
 * @version 0.1
 * @date 2021-10-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "week.hpp"

#define MONTH_WEEKS_NUMBER 4

struct months
{
    float total_work_time;
};

enum year_month_type
{
    January = 0,
    February = 1,
    March = 2,
    April = 3,
    May = 4,
    June = 5,
    July = 6,
    August = 7,
    September = 8,
    October = 9,
    November = 10,
    December = 11
};
static const char *month_enum_type_string[] =
{   
    "January", 
    "February", 
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December" 
};

class month
{
private:
    /* data */
public:
    months status;
    year_month_type type;
    month(int year_month_index = 0);
    ~month();
};
