/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 8th Edition
 Chapter 2 - Exercise 4
 cekker@me.com
 
Consider the following program segment:
//include statement(s)
//using namespace statement
int main()
{
  //variable declaration
  //executable statements
  //return statement
}
a.  Write C++ statements that include the header files iostream.
b.  Write a C++ statement that allows you to use cin, cout, and endl
    without the prefix std::.
c.  Write C++ statements that declare the following variables: num1, num2,
    num3, and average of type double.
d.  Write C++ statements that store 75.35 into num1, 35.56 into num2, and
    15.76 into num3.
e.  Write a C++ statement that stores the average of num1, num2, and
    num3, into average.
f.  Write C++ statements that output the values of num1, num2, num3,
    and average.
g.  Compile and run your program.
*****************************************************************************/
#include <iostream>

using namespace std;

int main()
{


  double num1, num2, num3;
  double average;

  num1 = 75.35;
  num2 = -35.56;
  num3 = 15.76;
 
  double average = (num1 + num2 + num3) / 3;

  
  cout << num3 << endl;
  cout << num2 << endl;
  cout << num1 << endl;
 
  cout << average << endl;


return 0;

}
