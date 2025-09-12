/**
 *   @file: gas_consumption.cc
 * @author: Blake Wood
 *   @date: 09/09/2025
 *  @brief: gas consumption calculation
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main() {
   // declare variables
    double town_miles, highway_miles, mpgtown, mpghighway;
    mpgtown = 22.5;
    mpghighway = 29.5;
    // get user input
    cout << "Enter the number of miles driven in town: ";
    cin >> town_miles;
    if (town_miles < 0){
        cout << "Error: miles driven cannot be negative." << endl;
        exit(1);
    }
    cout << "Enter the number of miles driven on the highway: ";
    cin >> highway_miles;
    if (highway_miles < 0){
        cout << "Error: miles driven cannot be negative." << endl;
        exit(1);
    }
    cout << endl;
    // calculate gas consumption
    double total_gas = (town_miles / mpgtown) + (highway_miles / mpghighway);
    // display results
    cout << "The number of miles driven in town: " << town_miles << endl;
    cout << "The gas consumption for town driving: " << mpgtown << " miles per gallon" << endl;
    cout << "The number of miles driven on the highway: " << highway_miles << endl;
    cout << "The gas consumption for highway driving: " << mpghighway << " miles per gallon" << endl;
    cout << "The total miles driven: " << (town_miles + highway_miles) << " miles" << endl;
    cout << "The total gas consumption: " << fixed << setprecision(2) << total_gas << " gallons" << endl;
    cout << "The average gas consumption: " << fixed << setprecision(2) << (town_miles + highway_miles) / total_gas << " miles per gallon" << endl;



    return 0;
}