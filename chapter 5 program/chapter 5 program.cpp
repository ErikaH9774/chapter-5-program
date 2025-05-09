// chapter 5 program.cpp : Includes the size of a population in organism as the day increase 
#include <iostream>
#include <iomanip>
//using namespace to avoid using stdcout 
using namespace std;
//function
int main()
{
    //input for number of organism
    int organism =0;
    //input for dailyincrease
    double DailyIncrease;
    //input for number of days
    int days = 0;
    //display to the user the starting number of organism with starting number 2 and up
    cout << " Enter the starting number of organism (minimum 2 days) \n";
    //user input number of organism
    cin >> organism;
    //using while statement as while organism is less than two
    while (organism < 2) {
        //display to the user an invalid error if entering less than 2
        cout << "invalid: Error ' starting organism must be at least 2. \n ";
        //display to user to start over
        cout << " Start again \n ";
        //user input number of organism
        cin >> organism;

    }
   //display to user the number of days the organism will multiply
    cout << " Enter the number of days the organism will multiply \n ";
    //user enters number of days
    cin >> days;
    //while statement of days is less than one
    while (days < 1) {

        //display to the user invalid input and the number of days must be less than one
        cout << " Invalid input: Number of days must be at least 1. \n "; 
        //enter the number of days 
        cout << " Enter the number of days \n ";
        //user input days
        cin >> days;

       

     }

    //day will be displayed and population will be displayed 
    cout << " \nDay \tPopulation \n ";
    cout << "---------------------------- \n";

    
    double population = static_cast <double> (organism);

    //using for loop int day = 1 and day is less than and equal to days ++ day 
        for (int day = 1; day <= days; ++day ) {
            //display day with precision of 2 and show population
            cout << day << " \t " << fixed << setprecision(2) << population << endl;
            population += population * (organism / 100.0);

        
        }
        return 0;

}
