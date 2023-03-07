#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  // declare variables
  int gasStations = 0, counter = 1;
  double gasFill = 0.0, sumSpent = 0.0, avgSpent = 0.0, minSpent = 0.0, maxSpent = 0.0;
  char userResponse = 'y';

  // welcome message
  cout << setfill('-') << setw(43) << "";
  cout << "\nWelcome to the Road Trip Gasoline Tracker!" << endl;
  cout << setfill('-') << setw(43) << "";

  while (userResponse == 'y')
  {
  // prompt for number of gas stations filled up at
  cout << "\nHow many gas stations did you fill up at? ";
  cin >> gasStations;
    while ((!cin) || (gasStations < 1))
    {
      // reset cin back to original state
      cin.clear();
      // clear the content of the input
      cin.ignore(100, '\n');
      cout << "\nOops! Something went wrong, invalid input. \nTry again!" << endl;
      cout << "\nHow many gas stations did you fill up at? ";
      cin >> gasStations;
    }    
    // prompt for gas fill up cost
    cout << "\nEnter fill up cost (one at a time): $";
    cin >> gasFill; 
    while ((!cin) || (gasFill < 1))
    {
      // reset cin back to original state
      cin.clear();
      // clear the content of the input
      cin.ignore(100, '\n');
      cout << "\nOops! Something went wrong, invalid input. \nTry again!" << endl;
      cout << "\nEnter fill up cost (one at a time): $";
      cin >> gasFill;
    }
    // setting calculations for sum, max and min and counter increase
    sumSpent = sumSpent + gasFill;
    maxSpent = gasFill;
    minSpent = gasFill;
    counter++;

    // setting while loop for number of gas stations stopped at
    while (counter <= gasStations)
    {
       cout << "\nEnter fill up cost (one at a time): $";
      cin >> gasFill;
      // updating sum 
      sumSpent = sumSpent + gasFill;
      counter ++;
        // if statements to adjust max and min
      if (gasFill > maxSpent)
      {
        maxSpent = gasFill;
      }
      if (gasFill < minSpent)
      {
         minSpent = gasFill;
      }
    }
    // average cost between all stops
    avgSpent = (static_cast<double>(sumSpent / gasStations));
    cout << fixed << setprecision(2);

    // display sum
    cout << setfill('_') << setw(43) << "";
    cout << "\nYour total spent on gasoline during your" << "\nroad trip was: $ " << sumSpent << endl;
    // display average
    cout << "\nThe average spent on gasoline during your" << "\nroad trip was: $ " << avgSpent << endl;  
    // display min  
    cout << "\nThe minimum spent on gasoline during your" << "\nroad trip was: $ " << minSpent << endl;
    // display max
    cout << "\nThe maximum spent on gasoline during your" << "\nroad trip was: $ " << maxSpent << endl;
    cout << setfill('=') << setw(43) << "";
    // ask the user if they would like to run the program again
    cout << "\nWould you like to run the program again?" << "\n(y/n) ";
    cin >> userResponse;
    cout << setfill('=') << setw(43) << "";
  }

  // display exit message
  cout << "\nI hope you had a great road trip!" << "\nThank you for using my program!" << endl;
  cout << setfill('=') << setw(43) << "";

  return 0; 
} 