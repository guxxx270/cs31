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

int main()
{
  int tax;

  //Get the Market value
  cout << "Market value (in millions):";
  int Market_value;
  cin >> Market_value;
  //cout << Market_value << endl;
  cin.ignore(10000, '\n');//this line is important

  //Get the Indentification imfornation
  cout << "Identification:";
  string identification;
  //cin >> identification;//different of cin and getline. cin is end in space so CAN'T use cin here
  getline(cin, identification);
  //cout << identification << endl;

  //Get the State imfornation
  cout << "State:";
  string state;
  getline(cin, state);
  //cout << state << endl;



  //print the result part.
  cout << "---" << endl;
  cout << "The tax for " << identification << " is "  << tax << " million." << endl;

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


}
