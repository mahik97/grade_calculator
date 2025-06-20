#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  // Grade calculator

  double math;
  double physics;
  double chemistry;

  cout << "Enter the score in Mathematics: ";
  cin >> math;

  cout << "Enter the score in Physics: ";
  cin >> physics;

  cout << "Enter the score in Chemistry: ";
  cin >> chemistry;

  if (math > 100)
  {
    cout << "Please Enter a score out of 100!";
  }

  else if (physics > 100)
  {
    cout << "Please Enter a score out of 100!";
  }

  else if (chemistry > 100)
  {
    cout << "Please Enter a score out of 100!";
  }

  else{
    double total = math + physics + chemistry;
  double average = total/3;

  cout << "The total is " << total << '\n';
  cout << "The percentage is " << average << "%\n";

  if (average>= 90)
  {
    cout << "Your Grade is 'A' and You did great!";
  }
  
  else if (average>= 80)
  {
    cout << "Your Grade is 'B' and You did good!";
  }

  else if (average>= 70)
  {
    cout << "Your Grade is 'C' and You did Okay!";
  }

  else if (average>= 60)
  {
    cout << "Your Grade is 'E' and You did poor!";
  }

  else if (average < 60)
  {
    cout << "Your Grade is 'F' and You Failed!";
  }

  else{
    cout << "Please Enter a valid score!";
  }
}
  

  return 0;
}