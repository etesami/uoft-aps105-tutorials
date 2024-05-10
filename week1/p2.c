#include <stdio.h>
int main() {
   
   const double CmPerInch = 2.54; // A
   const double CmPerMetre = 100.00; // B
   const int InchesPerFoot = 12; // C
   const int InchesPerYard = 36; // D

   double distance; // meters
   printf("Please provide a distance in metres: ");
   scanf("%lf", &distance);

   double distanceInInches = distance * CmPerMetre / CmPerInch;
   // distance * B / A
   printf("The distance in inches is %.2f\n", distanceInInches);

   // truncate fractional part to get # of inches
   int inches = (int)distanceInInches;
   distanceInInches = distanceInInches - inches;

   // inches / D
   int yards = inches / InchesPerYard;
   printf("Yards: %d\n", yards);

   // how many inches are left after extracting yards
   inches = inches % InchesPerYard;
   printf("Inches: %d\n", inches);

   // inches / C
   int feet = inches / InchesPerFoot;
   printf("Feet: %d\n", feet);

   // how many inches are left after extracting feet
   inches = inches % InchesPerFoot;
   printf("Inches: %d\n", inches);

   printf("%d yards, %d feet, %d inches, %.2f inches remainder\n", yards, feet,
         inches, distanceInInches);
   return 0;
}

