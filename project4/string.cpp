// String processing
//Translate string like R10L3SHL12R5SBR3SF
//
// Rinteger
// Turn right and proceed for integer blocks
// Linteger
// Turn left and proceed for integer blocks
// Sletter
// Stop at point of interest letter

#include <iostream>
#include <fstream> //this if for ifstream and ofstream
#include <string>

using namespace std;
bool processSstep(string text,size_t k)
{
  return false;
}


bool processRorLstep(string text, size_t k)//do I need to use size_t& k?
{
  string direction;
  size_t pos = k;
  if (text[pos] == 'R')
      direction = "right";
  if (text[pos] == 'L')
      direction = "left";

  cout << text[pos];
  string distance;
  pos ++;
  if (isdigit(text[pos]) != 1)
  {
    return false;
  }

  while(isdigit(text[pos]))
  {
    distance += text[pos];
    pos++;
  }
  cout << distance;
  return true;
}

bool translateInstructionString(string text)
{
  for(size_t k = 0; k != text.size(); k++)
  {
    //cout << text[k] << endl;
    switch(text[k])
    {
      case 'R':
      case 'L':
            if(!processRorLstep(text,k))
            {
              return false;
            }
            return true;

      case 'S':
            if(!processSstep(text,k))
            {
              return false;
            }
            return true;
      default:
         return false;
    }
  }
return false;
}


int main()
{
  for(;;)
  {
    cout << "Please enter coded string: ";
    string text;
    getline(cin, text);
    if (text == "")  //this two line is important to make sure command-D can work for quit
        break;
    if(!translateInstructionString(text))
    {
      cerr << "*******This string is not in correct type *******" << endl;
    }
  }
}
