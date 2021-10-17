/**
 * @file main.cpp
 * @author Jose Guilherme Delacroix (https://github.com/JGuilherme94/OpenFinancialPerson_ver1.0.0)
 * @brief this is the program main entry point that receive the financial informations of the user and process them
 * @version 0.1
 * @date 2021-10-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "include/time.hpp"
#include "include/value.hpp"
#include "include/error.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

    /*for (int i = 1; i <= YEAR_MONTHS_NUMBER; i++)
    {
        myfinancial << i << "," << month_enum_type_string[i-1] << "," << endl;
    }*/

int main(int argc, char** argv)
{
    if (argc < 2) return -1;
    
    string path = "output";
    string username = argv[1];

    string output_path = path + "\\" + username + " financial.csv";  // the current output path

    ofstream myfinancial;
    myfinancial.open(output_path.c_str());
    
    if (!myfinancial.is_open()) return -2;

    return 0;
}