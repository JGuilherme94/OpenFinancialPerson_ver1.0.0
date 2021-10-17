/**
 * @file monetary.hpp
 * @author Jose Guilherme Delacroix (https://github.com/JGuilherme94/OpenFinancialPerson_ver1.0.0)
 * @brief 
 * @version 0.1
 * @date 2021-10-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <string>

struct money
{
    std::string total_amount;
    int value;
    int decimal_value;
};

enum currency_type 
{
    dollars = 0,
    euro = 1,
    real = 2
};
static const char *currency_enum_type_string[] =
{   
    "dollars",
    "euro",
    "real" 
};
enum units_type 
{
    cents = 0,
    decimal = 1,
    hundreds = 2,
    thousands = 3,
    millions = 4,
    billions = 5,
    trillions = 6,
    arabs = 7,
    kharabs = 8,
    lakhs = 9,
    crores = 10
};
static const char *unit_enum_type_string[] =
{   
    "cents",
    "decimal",
    "hundreds",
    "thousands",
    "millions",
    "billions",
    "trillions",
    "arabs",
    "kharabs",
    "lakhs",
    "crores" 
};


class monetary
{
private:
    /* data */
public:
    money status;
    currency_type type;
    units_type unit;
    monetary(int value, int decimal);
    ~monetary();
};
