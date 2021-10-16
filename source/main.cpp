#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv)
{
    if (argc < 2) return -1;
    
    ofstream myfinancial;
    myfinancial.open("output/myfinancial.csv");
    for (int i = 1; i < 12; i++)
    {
        myfinancial << i << "," << i*i << endl;
    }
}