#include <stdio.h>

int main() {

float tempF;
float tempC;

printf("Temperature Conversor Celsius to Farenheit: ");
printf("\n-> Enter Temperature in Celsius (°C): ");
scanf("%f", &tempC);

printf("\n\n-> The temperature of %.f Celsius (°C) in Farenheit (°F) is: ", tempC);

tempF = (tempC*9/5) + 32; // F = (C × 9/5) + 32
printf("%.f Farenheit (°F)", tempF);
}
