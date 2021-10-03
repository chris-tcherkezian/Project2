#include <stdio.h>
#include "travel.h"

float getTotalDays() {
   float totalDays;
   do
   {
      printf("Enter the total number of days spent on the trip: ");
      scanf("%f", &totalDays);

      if (totalDays < 1)
      {
         printf("Total number of days cannot be negative. ");
         printf("Please try again.\n");
      }
   } while (totalDays < 1);
   
   return totalDays;
}

float getDepartTime() {
   float time;
   do
   {
      printf("Enter the time of departure on the first day of the trip: ");
      scanf("%f", &time);

      if (time < 0 || time > 24)
      {
         printf("Time of departure invalid. Please try again.\n");
      }
   } while (time < 0 || time > 24);
   
   return time;
}

float getArriveTime() {
   float time;
   do
   {
      printf("Enter the time of arrival back home on the last day of the trip: ");
      scanf("%f", &time);

      if (time < 0 || time > 24)
      {
         printf("Time of arrival invalid. Please try again.\n");
      }
   } while (time < 0 || time > 24);
   
   return time;
}

float getAirfare() {
   float airfare;
   do
   {
      printf("Enter the amount of any round-trip airfare: $");
      scanf("%f", &airfare);

      if (airfare < 0)
      {
         printf("Amount of airfare cannot be negative. Please try again.\n");
      }
   } while (airfare < 0);
   
   return airfare;
}

float getVehicleInfo() {
   float vehicle, milesDriven;
   do
   {
      printf("Enter the amount of any car rentals: $");
      scanf("%f", &vehicle);

      if (vehicle < 0)
      {
         printf("Amount of car rentals cannot be negative. Please try again.\n");
      }
      else if (vehicle == 0)
      {
         do
         {
            printf("Enter the miles driven of the private vehicle: ");
            scanf("%f", &milesDriven);
            if (milesDriven < 0)
            {
               printf("Miles driven cannot be negative. Please try again.\n");
            }
         } while (milesDriven < 0);
         vehicle = milesDriven * 0.27;
      }
   } while (vehicle < 0);
   
   return vehicle;
}

float getParkingFee(float totalDays) {
   float parkingFee;
   do
   {
      printf("Enter the amount of any parking fees: $");
      scanf("%f", &parkingFee);
      if (parkingFee < 0)
      {
         printf("Parking fees cannot be negative. Please try again.\n");
      }
   } while (parkingFee < 0);
   
   return parkingFee - (totalDays * 6);
}

float getTaxiFee(float totalDays) {
   float taxiFee;
   do
   {
      printf("Enter the amount of any taxi fees: $");
      scanf("%f", &taxiFee);
      if (taxiFee < 0)
      {
         printf("Taxi fees cannot be negative. Please try again.\n");
      }
   } while (taxiFee < 0);
   
   return taxiFee - (totalDays * 10);
}

float getConferenceFee() {
   float conferenceFee;
   do
   {
      printf("Enter the amount of any conference or seminar registration fees: $");
      scanf("%f", &conferenceFee);
      if (conferenceFee < 0)
      {
         printf("Conference/seminar registration fees cannot be negative. Please try again.\n");
      }
   } while (conferenceFee < 0);
   
   return conferenceFee;
}

float getHotelExpenses(float totalDays) {
   float hotelExpenses;
   do
   {
      printf("Enter the amount of any hotel expenses: $");
      scanf("%f", &hotelExpenses);
      if (hotelExpenses < 0)
      {
         printf("Hotel expenses cannot be negative. Please try again.\n");
      }
   } while (hotelExpenses < 0);
   
   return hotelExpenses - (totalDays * 90);
}

/*
float getMealFee() {
}

float getTotalExpenses() {

}

float getTotalAllowableExpenses() {

}

float getTotalReimburse() {

}

float getTotalSaved() {

} */