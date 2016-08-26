// Property tax computation

#include <iostream>
#include <string>
using namespace std;

/*
int countSpacesInFirstSentence(string s)
{
    int nSpace = 0;
    for (int k = 0; k != s.size(); k++)
    {
        if (s[k] == ' ')
            nSpace++;
        else if (s[k] == '.')
            return nSpace;
    }
}

int main()
{
    cout << countSpacesInFirstSentence("Call me Ishmael.") << endl;
    cout << countSpacesInFirstSentence("I am Sam.  Sam I am.") << endl;
    cout << countSpacesInFirstSentence("Where now? Who now? When now?") << endl;
}
*/


string justLetters(string s)
{
    string result = "";
    for (int k = 0; k != s.size(); k++)
    {
        if ( islower(s[k]) )
            result += s[k];
        if ( isupper(s[k]) )
            result += tolower(s[k]);
    }
    return result;
}

int main()
{
    cout << justLetters("CS 31 began March 25.") << endl;
}
