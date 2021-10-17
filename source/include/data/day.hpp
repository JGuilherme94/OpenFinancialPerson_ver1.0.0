/**
 * @file day.hpp
 * @author Jose Guilherme Delacroix (https://github.com/JGuilherme94/OpenFinancialPerson_ver1.0.0)
 * @brief 
 * @version 0.1
 * @date 2021-10-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <time.h>

#define DAY_HOURS_NUMBER 24

enum types
{
    normal = 0,
    end_week = -1,
    holiday = -2
};

enum week_day_type 
{
    Sunday = 0,
    Monday = 1,
    Tuesday = 2,
    Wednesday = 3,
    Thursday = 4,
    Friday = 5,
    Saturday = 6
};
static const char *day_enum_type_string[] =
{   
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday" 
};

struct days
{
    bool monitized;
    float total_work_time;
    bool special;
};

class day
{
private:
    /* data */
public:
    days status;
    week_day_type type;
    day(int week_day_index = 0);
    ~day();
};
