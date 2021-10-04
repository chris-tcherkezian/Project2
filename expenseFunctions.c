#include <stdio.h>
#include "expense.h"

float getTotalExpenses(float airfare, float carRental, float privateVehicle, float parkingFee,
                       float taxiFee, float conferenceFee, float hotelFee, float mealFee)
{
    float totalExpenses;

    totalExpenses = airfare + carRental + privateVehicle + parkingFee + taxiFee + conferenceFee + hotelFee + mealFee;

    return totalExpenses;
}

float getTotalAllowableExpenses(float days, float taxiDays, float arrive, float depart)
{
    float allowExpenses = 0, parkingWaive = 6, taxiWaive = 10, hotelWaive = 90, mealWaive = 0;

    // Taxi Calculation
    taxiWaive *= taxiDays;

    // Meals Calculation Start
    if (arrive <= 800)
        mealWaive += 9;
    else if (arrive > 800 && arrive <= 1300)
        mealWaive += 12;
    else if (arrive > 1300 && arrive <= 1900)
        mealWaive += 16;

    if (depart <= 700)
        mealWaive += 9;
    else if (depart > 700 && depart <= 1200)
        mealWaive += 12;
    else if (depart > 1200 && depart <= 1800)
        mealWaive += 16;
    // Meals Calculation End
    
    allowExpenses = days * (hotelWaive + parkingWaive) + taxiWaive + mealWaive;

    return allowExpenses;
}

float getTotalReimburse(float total, float allowable)
{
    float price = total - allowable;
    float reimburseCost;
    if(price <= 0)
        reimburseCost = 0;
    else
        reimburseCost = price;
    
    return reimburseCost;
}

float getTotalSaved(float total, float allowable)
{
    float price = allowable - total;
    float savedMoney;
    if(savedMoney <= 0)
        savedMoney = 0;
    else
        savedMoney = price;
    
    return savedMoney;
}