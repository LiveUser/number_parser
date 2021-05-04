//Hecho en 🇵🇷Puerto Rico por Radamés J. Valentín Reyes
#ifndef number_parser_heading
#define number_parser_heading
  #include <string>
  #include <cmath>
  #include <regex>

  using namespace std;

  namespace number_parser{
    static int parseInt(string text){
      int parsedResult;
      try{
        parsedResult = stoi(text);
      }catch(...){
        parsedResult = 0;
      }
      return parsedResult;
    }
    static double parseDouble(string text){
      const string doubleRegEx = "^[1-9]\\d*(\\.\\d+)?$";
      double result;
      //Get the decimal part
      try{
        //Use regex to validate that it is a decimal number
        if(regex_match(text,regex(doubleRegEx))){
          int integerPart = parseInt(text);
          //Cut the part where there are decimals
          int whereIsThePoint = text.find(".");
          string decimalSection = text.substr(whereIsThePoint + 1,text.length());
          double parsedDecimalSection = stod(decimalSection);
          //convert back to decimal places(move them from the integer space into the decimal places)
          double power = static_cast<double>(10);
          double exponent = static_cast<double>(decimalSection.length());
          double powerPlusExponent = pow(power,exponent);
          parsedDecimalSection = parsedDecimalSection / powerPlusExponent;
          //If number is positive sum the decimal part, otherwise, subtract it
          if(0 < integerPart){
            result = static_cast<double>(integerPart) + parsedDecimalSection;
          }else{
            result = static_cast<double>(integerPart) - parsedDecimalSection;
          }
        }else{
          throw "It is not in the form of a decimal";
        }
      }catch(...){
        result = 0;
      }
      cout << result << endl;
      return result;
    }
  }
#endif