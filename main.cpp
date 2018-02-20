#include "parser.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <ios> //std::streamoff
#include <stdexcept> //domain_error
#include <cctype> //isspace

using std::endl;
using std::cout;
using std::vector;
using std::cin;
using std::string;


int main (){

 /* string input = "sin(pi*x)";
  //"(cos(pi * (x * y)) * avg(y, sin(pi * cos(pi * cos(pi * sin(pi * (x * avg(y, y))))))))";
  //"(x*y";
  //"(sin(pi*y) * cos(pi*(x*y)))";
  //
  std::istringstream is(input);*/

  string input;

  cout << "Enter expression to parse :";
  cin >> input;
  std::istringstream is(input);

  Parser parser(is);
  Exp exp;

  if(parser.parse(exp) == true)
    std::cout<<"Parse OK"<<'\n';
  else
    std::cout<<"Parse not OK"<<'\n';

  cout << "exp = " << endl;
  for(auto it= exp.begin(); it != exp.end();++it){
    cout<<" "<< *it << endl;
  }

  return 0;
}
