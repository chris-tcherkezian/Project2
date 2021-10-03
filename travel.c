#include <stdio.h>
#include <stdlib.h>
#include "travel.h"

int main() 
{
    //Display total expenses incurred by the business person
    //total allowable expenses for the trip
    //Excess expenses business person owes
    //The amout saved by the bussiness person if the expenses were under the total allowed

    float totalDays, depart, arrive, airfare, carRental, parkingFee, taxiFee, conferenceFee, hotelFee, mealFee;
    float totalExpenses, totalAllowableExpenses, totalReimburse, totalSaved;

    totalDays = getTotalDays();
    depart = getDepartTime();
    arrive = getArriveTime();
    airfare = getAirfare();
    carRental = getVehicleInfo();
    parkingFee = getParkingFee(totalDays);
    taxiFee = getTaxiFee(totalDays);
    conferenceFee = getConferenceFee();
    hotelFee = getHotelExpenses(totalDays);
    
    /*
    getMealFee();
    getTotalExpenses();
    getTotalAllowableExpenses();
    getTotalReimburse();
    getTotalSaved(); */

    printf("Your total expenses incurred during this business trip was: %.2f$", totalExpenses);
    printf("The total allowable expenses for the trip was: %.2f$", totalAllowableExpenses);
    printf("The amount you owe for going over the allowed expenses is: %.2f$", totalReimburse);
    printf("The amount you saved because your expenses were under the total allowed expenses was: %.2f$", totalSaved);

    return 0;
}