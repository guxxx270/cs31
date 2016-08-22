//
//  Game.cpp
//  project1
//
//  Created by Quanju Gu on 6/24/16.
//  Copyright © 2016 Jerry Gu. All rights reserved.
//
#include <iostream>
#include <string>   //string...
//#include <cstdlib> //rand() and exit function

using namespace std;

int main()
{
  double tax;
  const double level_200 = 200;
  const double level_300 = 300;
  const double tax_200 = 4.1/100;
  const double tax_300 = 5.3/100;
  const double tax_NJ_NY = 5.7/100;
  const double tax_600 = 6.0/100;

  //Get the Market value
  cout << "Market value (in millions):";
  double Market_value;
  cin >> Market_value;
  cin.ignore(10000, '\n');//this line is important
  if (Market_value < 0)
  {
    cout << "---" << endl;
    cout << "The market value must be nonnegative." << endl;
    return 1;
  }
  cout.setf(ios::fixed);//This two line make sure to show in 3232.043 style
  cout.precision(3);

  //cout << Market_value << endl;


  //Get the Indentification imfornation
  cout << "Identification:";
  string identification;
  //cin >> identification;//different of cin and getline. cin is end in space so CAN'T use cin here
  getline(cin, identification);
  //cout << identification << endl;
  if (identification == "")
  {
    cout << "---" << endl;
    cout << "You must enter a property identification." << endl;
    return 2;
  }
  //Get the State imfornation
  cout << "State:";
  string state;
  getline(cin, state);
  //cout << state << endl;
  if (state == "")
  {
    cout << "---" << endl;
    cout << "You must enter a state." << endl;
    return 3;
  }

  //calculate the result part.
  if (Market_value <= 200)
  {
    tax = Market_value * tax_200;
  }

  if (Market_value > 200 && Market_value <= 500)
  {
    if (state == "NJ" || state == "NY")
    {
    tax = (200.000 * tax_200) + (Market_value - 200.000) * tax_NJ_NY;
    }
    else
    {
      tax = (200.000 * tax_200) + (Market_value - 200.000) * tax_300;
    }
  }

  if (Market_value > 500)
  {
    if (state == "NJ" || state == "NY")
    {
    tax = 200.000 * tax_200 + 300.000 * tax_NJ_NY + (Market_value - 500) * tax_600;
    }
    else
    {
      tax = 200.000 * tax_200 + 300.000 * tax_300 + (Market_value - 500) * tax_600;
    }
  }

  //print the result part.
  cout << "---" << endl;
  cout << "The tax for " << identification << " is $"  << tax << " million." << endl;
}
//The reason for using the cin.ignore
/*
int a,b,c;
cout<<"input a:";
cin>>a;
cin.ignore(1024, '\n');
cout<<"input b:";
cin>>b;
cin.ignore(1024, '\n');
cout<<"input c:";
cin>>c;
cout<<a<<"\t"<<b<<"\t"<<c<<endl;
*/
