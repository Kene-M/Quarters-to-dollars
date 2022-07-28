/*

    This program will use a function to convert a specified number of quarters into it's equivalent value in dollars.


1. Ask the user to enter the number of quarters.
2. Call the function for converting quarters into dollars, pass the number of quarters as the argument.
        In the function:  {
            Multiply the quarters by 0.25 (convert to dollars)
            Return the result to the calling function.
        }
3. Store the result.
4. Display the result to the user.

*/


// This program will use a function to convert a specified number of quarters into it's equivalent value in dollars.

#include <iostream>
#include <iomanip>

using namespace std;

double quartersToDollars(int);  // Prototype of the function that will convert quarters to it's equivalent number of dollars.

    // Main function.
int main()
{
        // Declare variables.
    int numQuarters;  // To hold the number of quarters to convert to dollars.

        // Ask the user to enter the number of quarters.
    cout << "Enter Quarters: ";
    cin >> numQuarters;

        // Set the desired output formatting for numbers.
    cout << setprecision(2) << fixed << showpoint;

        // Call the function, passing entered quarters as argument and display the results to the user.
    cout << "The value of " << numQuarters << " quarters is: $" << quartersToDollars(numQuarters) << endl;

    return 0;
}

    // Function for converting quarters into dollars.
double quartersToDollars(int quarters)
{
        // Calculate the dollar equivalent of the number of quarters entered.
    return (quarters * 0.25);
}

/*

    RUN 1: number of quarters = 1

Enter Quarters: 1
The value of 1 quarters is: $0.25

    ------------------------------------

    RUN 2: number of quarters = 9

Enter Quarters: 9
The value of 9 quarters is: $2.25

    ------------------------------------

    RUN 3: number of quarters = 4

Enter Quarters: 4
The value of 4 quarters is: $1.00

    ------------------------------------

    RUN 4: number of quarters = 7

Enter Quarters: 7
The value of 7 quarters is: $1.75

*/
