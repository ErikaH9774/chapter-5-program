// chapter 5 program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int organism =0;
    double DailyIncrease;
    int days = 0;

    cout << " Enter the starting number of organism (minimum 2 days) \n";
    cin >> organism;

    while (organism < 2) {

        cout << "invalid: Error ' starting organism must be at least 2. \n ";
        cout << " Start again \n ";
        cin >> organism;

    }
   
    cout << " Enter the number of days the organism will multiply \n ";

    cin >> days;

    while (days < 1) {


        cout << " Invalid input: Number of days must be at least 1. \n "; 
        cout << " Enter the number of days \n ";

        cin >> days;

       

     }


    cout << " \nDay \tPopulation \n ";
    cout << "---------------------------- \n";


    double population = static_cast <double> (organism);


        for (int day = 1; day <= days; ++day ) {

            cout << day << " \t " << fixed << setprecision(2) << population << endl;
            population += population * (organism / 100.0);

        
        }
        return 0;

}
