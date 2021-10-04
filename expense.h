#ifndef EXPENSE_H
#define EXPENSE_H

float getTotalExpenses(float airfare, float carRental, float privateVehicle, float parkingFee,
                       float taxiFee, float conferenceFee, float hotelFee, float mealFee);

float getTotalAllowableExpenses(float days, float taxiDays, float arrive, float depart);

float getTotalReimburse(float total, float allowable);

float getTotalSaved(float total, float allowable);

#endif