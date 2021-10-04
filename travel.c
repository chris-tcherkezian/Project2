#include <stdio.h>
#include <stdlib.h>
#include "travel.h"
#include "expense.h"

int main() 
{
    //Display total expenses incurred by the business person
    //total allowable expenses for the trip
    //Excess expenses business person owes
    //The amount saved by the bussiness person if the expenses were under the total allowed

    float totalDays, depart, arrive, airfare, carRental, privateVehicle, parkingFee, taxiFee, daysUsedTaxi, conferenceFee, hotelFee, mealFee;
    float totalExpenses, totalAllowableExpenses, totalReimburse, totalSaved;


    totalDays = getTotalDays();
    depart = getDepartTime();
    arrive = getArriveTime();
    airfare = getAirfare();
    carRental = getCarRental();
    privateVehicle = getPrivateVehicleInfo();
    parkingFee = getParkingFee();
    taxiFee = getTaxiFee();
    daysUsedTaxi = getDaysUsedTaxi();
    conferenceFee = getConferenceFee();
    hotelFee = getHotelExpenses();
    mealFee = getMealFee();

    totalExpenses = getTotalExpenses(airfare, carRental, privateVehicle, parkingFee, taxiFee, conferenceFee, hotelFee, mealFee);
    totalAllowableExpenses = getTotalAllowableExpenses(totalDays, taxiDays, arrive, depart);
    totalReimburse = getTotalReimburse(totalExpenses, totalAllowableExpenses);
    totalSaved = getTotalSaved(totalExpenses, totalAllowableExpenses);

    printf("Your total expenses incurred during this business trip was: $%.2f\n", totalExpenses);
    printf("The total allowable expenses for the trip was: $%.2f\n", totalAllowableExpenses);
    printf("The amount you owe for going over the allowed expenses is: $%.2f\n", totalReimburse);
    printf("The amount you saved because your expenses were under the total allowed expenses was: $%.2f\n", totalSaved);

    return 0;
}