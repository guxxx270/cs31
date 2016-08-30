// Property tax computation

#include <iostream>
#include <fstream> //this if for ifstream and ofstream
#include <string>

using namespace std;
//
//
// int main()
// {
//   ofstream outfile("results.txt");
//   if (!outfile)
//   {
//     cerr << "Error: Cannot create results.txt!" << endl;
//   }
//   outfile << "This will be written to the file" << endl;
//   outfile << "2 + 2 =" << 2 + 2 << endl;
//
//   ifstream infile("data.txt");
//   if(!infile)
//   {
//     cerr << "Error: Cannot open data.txt!" << endl;
//   }
//
//   /*
//   char k;
//   cout << k << endl;
//   //infile >> k;
//   //infile.ignore(10000, '\n');
//   for (int i = 0; i < 30; i++)
//   {
//   infile.get(k);
//   cout << k << endl;
//   }
//   */
//
//   //reading the line one by one
//   /*
//   const int MAX = 200;
//   char line[MAX];
//   infile.getline(line,MAX);
//   cout << line << endl;
//   infile.getline(line,MAX);
//   cout << line << endl;
//   */
//
//   //reading the all the line by one time
//   /*
//   const int MAX = 200;
//   char line[MAX];
//   while (infile.getline(line,MAX))
//   {
//     cout << line <<endl;
//   }
//   */
//
//   //but the c will upate evert time
//   char c;
//   while (infile.get(c))
//   {
//     cout << c << endl;
//   }
// }

int countLines(istream& inf)
{
  int lineCount = 0;
  string line;
  while (getline(inf, line))
        lineCount++;
  return lineCount;
}

int main()
{
  ifstream infile("data.txt");
  if(!infile)
  {
    cerr << "Error: Cannot open data.txt!" << endl;
    return 1;
  }
  int fileLine = countLines(infile);
  cout << "data.txt has " << fileLine << " lines. " << endl;
  cout << "Type lines, then ctrl-Z(Windows) or ctrl-D (UNIX)" << endl;
  int keyboardLines = countLines(cin) ; // reads from keyboardLines
  cout << "You typed " << keyboardLines << " lines. " << endl;
}
