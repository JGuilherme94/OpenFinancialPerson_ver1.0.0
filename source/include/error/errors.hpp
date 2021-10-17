/**
 * @file errors.hpp
 * @author Jose Guilherme Delacroix (https://github.com/JGuilherme94/OpenFinancialPerson_ver1.0.0)
 * @brief this a simple error node header file with a enum of all types of errors types and a simple array of this enum with the error message
 * @version 0.1
 * @date 2021-10-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <string>

enum error_types 
{
    no_error = 0,
    invalid_arguments = -1,
    invalid_argument = -2,
    no_csv_file = -3,
    no_csv_output_file = -4,
    no_open_csv_output_file = -5
};
static const char *error_enum_type_string[] =
{   
    "null",
    "invalid number of arguments passed to the program",
    "invalid argument",
    "no csv file",
    "no csv output file",
    "could'not open csv output file" 
};