//
//  main.cpp
//  project6
//
//  Created by Quanju Gu on 9/3/16.
//  Copyright © 2016 Jerry Gu. All rights reserved.
//

#include <iostream>
using namespace std;
#include <cmath>

// return true if two C strings are equal
bool match(const char str1[], const char str2[])
{
    while (*str1 != '\0'  &&  *str2 != '\0')  // zero bytes at ends
    {
        //cout << "check code part : " << (str1 != 0) << endl;
        if (*str1 != *str2)  // compare corresponding characters
        {
             return false;
        }
        str1++;            // advance to the next character
        str2++;
    }
    //cout << " code run here.";
    cout << " *str1 is:" << *str1 << endl;
    cout << " *str2 is:" << *str2 << endl;
    return *str1 == *str2;   // both ended at same time?
}

int main()
{
    char a[10] = "Zhang";
    char b[10] = "Zhang";
    
    if (match(a,b))
        cout << "They're the same!\n";
    else
        cout << "Did not match\n";
}
