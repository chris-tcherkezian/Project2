#ifndef EXPENSE_H
#define EXPENSE_H

float getTotalExpenses(float airfare, float carRental, float parkingFee, float conferenceFee, float hotelFee float mealFee);

float getTotalAllowableExpenses(float days);

float getTotalReimburse(float total, float allowable);

float getTotalSaved(float total, float allowable);