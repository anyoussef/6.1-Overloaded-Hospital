/*
*	CSC-240-2024
*	Date: 02/04/2024
*	Assignment: 6.1 Overloaded Hospital
*	Description: Write a program that computes and displays the charges for a patient's Hospital stay
*	Author: Anthony Youssef
*/

#include <iostream>
#include "patients.cpp" // Location of methods
using namespace std;

int main(){

    char patientType; // Determines if in or outpatient
    int numDays;
    double dailyRoomRate, medicationCharge, serviceCharges;
    double totalCharge;

    cout << "Is the patient and inpatient or an outpatient?\n" << "Type I or O: " << endl;
    cin >> patientType;

    if (patientType == 'I' || patientType == 'i'){ //In patient block
        
        cout << "Please input the valid (non-negative) number of days spent in the hospital:" << endl;
        cin >> numDays;
        
        while(!(numDays > 0)){    // This while block will ensure valid input and will be used in every subsequent input
            cout << "Invalid input please retry:" << endl;
            cin >> numDays;
        }

        cout << "Please input the valid (non-negative) daily rate:" << endl;
        cin >> dailyRoomRate;

        while(!(dailyRoomRate >= 0.0)){                     
            cout << "Invalid input please retry:" << endl;
            cin >> dailyRoomRate;
        }
        
        cout << "Please input the valid (non-negative) medication charge:" << endl;
        cin >> medicationCharge;

        while(!(medicationCharge >= 0.0)){
            cout << "Invalid input please retry: " << endl;
            cin >> medicationCharge;
        }

        cout << "Please input the valid (non-negative) hospital service charge:" << endl;
        cin >> serviceCharges;

        while(!(serviceCharges >= 0.0)){
            cout << "Invalid input please retry: " << endl;;
            cin >> serviceCharges;
        }

        totalCharge = patientCalculation(numDays, dailyRoomRate, medicationCharge, serviceCharges); //This calls the version of patientCalculation that determins the price for an Inpatient
        cout << "Inpatient bill totals $" << totalCharge << endl; // Prints total to console

    }
    else{ // This else statement deals with the outpatient
        
        cout << "Please input the valid (non-negative) medication charge:" << endl;
        cin >> medicationCharge;

        while(!(medicationCharge >= 0.0)){
            cout << "Invalid input please retry: " << endl;
            cin >> medicationCharge;
        }

        cout << "Please input the valid (non-negative) hospital service charge:" << endl;
        cin >> serviceCharges;

        while(!(serviceCharges >= 0.0)){
            cout << "Invalid input please retry:" << endl;;
            cin >> serviceCharges;
        }

        totalCharge = patientCalculation(medicationCharge, serviceCharges); //calls outpatient version
        cout << "Outpatient bill totals $" << totalCharge << endl; //prints total to console

    }
}