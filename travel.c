#include <stdio.h>
#include <stdlib.h>
#include "travel.h"

int main() 
{
    //Display total expenses incurred by the business person
    //total allowable expenses for the trip
    //Excess expenses business person owes
    //The amount saved by the bussiness person if the expenses were under the total allowed

    float totalDays, depart, arrive, airfare, carRental, parkingFee, taxiFee, daysUsedTaxi, conferenceFee, hotelFee, mealFee;
    float totalExpenses, totalAllowableExpenses, totalReimburse, totalSaved;

    totalDays = getTotalDays();
    depart = getDepartTime();
    arrive = getArriveTime();
    airfare = getAirfare();
    carRental = getVehicleInfo();
    parkingFee = getParkingFee();
    taxiFee = getTaxiFee();
    daysUsedTaxi = getDaysUsedTaxi();
    conferenceFee = getConferenceFee();
    hotelFee = getHotelExpenses();
    mealFee = getMealFee(arrive, depart);

    // totalExpenses = getTotalExpenses();
    // totalAllowableExpenses = getTotalAllowableExpenses();
    // totalReimburse = getTotalReimburse();
    // totalSaved = getTotalSaved();

    printf("Your total expenses incurred during this business trip was: $%.2f\n", totalExpenses);
    printf("The total allowable expenses for the trip was: $%.2f\n", totalAllowableExpenses);
    printf("The amount you owe for going over the allowed expenses is: $%.2f\n", totalReimburse);
    printf("The amount you saved because your expenses were under the total allowed expenses was: $%.2f\n", totalSaved);

    return 0;
}