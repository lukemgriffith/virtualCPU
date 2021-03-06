
#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <bitset>
#include <array>

using namespace std;


// writes to console, if debug is enabled.
void write_debug(string message, bool debug)
{
    if (debug)
    {
        cout<<"[DEBUG]: "<<message<<"\n";
    }
}

// Converts a hexadecimal character into its binary bitset.
bitset<4> hex_to_bits(char hex)
{
    
    bitset<4> bits;

    switch (hex)
    {
        case '0':
            bits = bitset<4> (std::string("0000"));
            break;
        case '1':
            bits = bitset<4> (std::string("0001"));
            break;
        case '2':
            bits = bitset<4> (std::string("0010"));
            break;
        case '3':
            bits = bitset<4> (std::string("0011"));
            break;
        case '4':
            bits = bitset<4> (std::string("0100"));
            break;
        case '5':
            bits = bitset<4> (std::string("0101"));
            break;
        case '6':
            bits = bitset<4> (std::string("0110"));
            break;
        case '7':
            bits = bitset<4> (std::string("0111"));
            break;
        case '8':
            bits = bitset<4> (std::string("1000"));
            break;
        case '9':
            bits = bitset<4> (std::string("1001"));
            break;
        case 'A':
            bits = bitset<4> (std::string("1010"));
            break;
        case 'B':
            bits = bitset<4> (std::string("1011"));
            break;
        case 'C':
            bits = bitset<4> (std::string("1100"));
            break;
        case 'D':
            bits = bitset<4> (std::string("1101"));
            break;
        case 'F':
            bits = bitset<4> (std::string("1111"));
            break;
    }
    

    return bits;
}
