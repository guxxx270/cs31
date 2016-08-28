// Property tax computation

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
  ofstream outfile("results.txt");
  if (!outfile)
  {
    cerr << "Error: Cannot create results.txt!" << endl;
  }
  outfile << "This will be written to the file" << endl;
  outfile << "2 + 2 =" << 2+2 << endl;

  ifstream infile("data.txt");
  if(!infile)
  {
    cerr << "Error: Cannot open data.txt!" << endl;
  }

  int k;
  cout << k << endl;
  infile >> k;
  infile.ignore(10000, '\n');
  cout << k << endl;

}
