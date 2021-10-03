#include <stdio.h>
#include "expense.h"

float getTotalExpenses(float airfare, float carRental, float parkingFee, float conferenceFee, float hotelFee, float mealFee)
{
    float totalExpenses;

    totalExpenses = airfare + carRental + parkingFee + conferenceFee + hotelFee;

    return totalExpenses;
}

float getTotalAllowableExpenses(float days)
{
    float allowExpenses, parkingWaive, taxiWaive, hotelWaive;
    parkingWaive = 6;
    taxiWaive = 10;
    hotelWaive = 90;

    allowExpenses = days * (hotelWaive + taxiWaive + hotelWaive);

    return allowExpenses;
}

float getTotalReimburse(float total, float allowable)
{
    float price = total - allowable;
    float reimburseCost;
    if(reimbusePrice <= 0)
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