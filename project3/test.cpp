//
//  Game.cpp
//  project1
//
//  Created by Quanju Gu on 6/24/16.
//  Copyright © 2016 Jerry Gu. All rights reserved.
//
#include <iostream>
//#include <string>   //string...
//#include <cstdlib> //rand() and exit function

using namespace std;
/*
int square(int n)
{
  return n*n;
}

int factorial(int n)
{
  int prod = 1;
  for (int i = 2; i <= n; i++)
       prod *= i;
  return prod;
}
int main()
{
   for (int k = 1; k <= 6; k++)
       //cout << "The square of " << k << " is " << square(k) << endl;
       cout << "The square of " << k << " is " << factorial(k) << endl;
}
*/

bool contains(string s, char c)
{
  for (int k = 0; k !=s.size(); k++)
  {
    if(s[k] == c)
       return true;
    else
       return false;
  }
}

int main()
{
 /*
  if(contains("xyz",'x'))
     cout << "x";
  if(contains("xyz",'y'))
     cout << "y";
     cout << endl;
  */
  if (contains("Computer Science 31", '3'))
      cout << "w";
  if (!contains("Smallberg", 'x'))
      cout << "o";
  if (contains("Smallberg", 'l'))
      cout << "w" <<endl;
  if (contains("Start your CS 31 projects early!", ' '))
      cout << "!" <<endl;

}
