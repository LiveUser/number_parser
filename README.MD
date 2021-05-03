# number_parser library
A c++ library to parse integers and double's from strings
----------------------------------------------------
Hecho en 🇵🇷Puerto Rico por Radamés J. Valentín Reyes

----------------------------------------------------
## Version

1.0

## Note:

- The decimal value's precision is reduced when using c++ functions to change data type. It gets rounded to only a couple of decimal places but still works. Make a pull request or fork the project if you found a solution.
- If invalid input is given it returns 0

## Getting started

- Download this project

- Place this project's folder inside the working directory of your program

- import the library as shown below

  ~~~c++
  #include "./pathToFile/number_parser.cpp"
  ~~~

  

## Optional

You can use the namespace of this library

~~~c++
using namespace number_parser;
~~~

## Namespace methods

------------------------------------------------------------

Parameters:

- string text = text containing a number

Method:

~~~c++
int parseInt(string text)
~~~

------------------------------------------------------------

Parameters:

- string text = text containing a number

Method:

~~~c++
double parseDouble(string text)
~~~

------------------------------------------------------------



## Usage example

~~~c++
#include <iostream>
#include "number_parser.cpp"

using namespace std;
using namespace number_parser;

int main(){
  string testText = "-24.367654646451315435484848";
  cout << parseDouble(testText) << endl;
}
~~~

