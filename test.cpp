#include <iostream>
#include "number_parser.cpp"

using namespace std;
using namespace number_parser;

int main(){
  string testText = "-24.367654646451315435484848";
  cout << parseDouble(testText) << endl;
}