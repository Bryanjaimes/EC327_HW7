#include <iostream>
#include <vector>
#include <string>

//add other libraries if needed

using namespace std;

vector<string> split(const string &expression) 
{
//returns a vector of strings that represent operands or numbers
  string current;
  vector<string> vs;
  int index;
  for (int i = 0; i < expression.length(); i++)
  {
    index = 0;
    if (expression[i] == ' ')
      continue;
    else if (expression[i] == '+' || expression[i] == '*')
    {
      current = expression[i];
      vs.push_back(current);
    }
    else
    {
      current = expression[i];
      for (int j = i + 1; j < expression.length(); j++)
      {
        if (expression[j] == ' ' || expression[j] == '+' || expression[j] == '*')
          break;
        else
        {
          current = current + expression[j];
        } 
        index = j;
      }
      vs.push_back(current);
    }

    if (index != 0)
      i = index;
  }

  return vs;
}

int main ()
{
  //test code: 
  //ask the user to enter an expression
  string s;
  getline(cin, s);

  //call the split function
  vector<string> vs = split(s);

  //display the split items (numbers and operands) on the console
  for (int i = 0; i < vs.size(); i++)
  {
    cout << vs[i] << endl;
  }

  //add more test cases if needed

  return 0;
}
