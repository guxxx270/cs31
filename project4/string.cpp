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
bool processSstep(string text,size_t& pos)
{
  //size_t pos = k;
  char direction;
  pos++;
  if (!isupper(text[pos]))
      return false;
  if(pos == text[pos])
      return false;
  direction = text[pos];
  cout << "Stop at point of interest " << direction <<"." << endl;
  pos++;
  return true;
}


bool processRorLstep(string text, size_t& pos)//do I need to use size_t& k?
{
  string direction;
  //size_t pos = k;
  if (text[pos] == 'R')
      direction = "right";
  if (text[pos] == 'L')
      direction = "left";

  cout << "Turn " << direction;
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
  cout << " and proceed for " << distance << " blocks." << endl;
  return true;
}

bool translateInstructionString(string text)
{
  size_t k = 0;
  //while (k != text.size())
  for(k = 0; k != text.size(); k = k)
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
            break;
            //return true;

      case 'S':
            if(!processSstep(text,k))
            {
              return false;
            }
            break;
            //return true;
      default:
         return false;
    }
  }
  return true;
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
