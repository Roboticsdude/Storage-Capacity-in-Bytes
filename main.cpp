//
//  main.cpp
//  Test_Helolite
//
//  Created by Claudio Caldarescu on 3/3/17.
//  Copyright © 2017 Claudio Caldarescu. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    // insert code here...
    std::cout << "How to determine storage size\n";
    cout << "\nData type     Bytes"
        << "\n-----------  ---------"
    << "\nint             " << sizeof(int) // sizeof()provides the number of bytes used to store values
    << "\nchar            " << sizeof(char) //range of value: 256 characters
    << "\nbool            " << sizeof(bool) << endl; //true (considered as any positive value) and false (which is a 0)

    return 0;
}
