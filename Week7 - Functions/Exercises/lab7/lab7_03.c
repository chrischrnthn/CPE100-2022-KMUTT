//ID 65070503410
//Name : Charunthon Limseelo
//Exercise 3 Temperature Conversion

/*(Temperature Conversions) Implement the following integer functions:
a) Function celsius returns the Celsius equivalent of a Fahrenheit 
temperature.
b) Function fahrenheit returns the Fahrenheit equivalent of a Celsius 
temperature.
c) Use these function to write a program that prints charts showing the
Fahrenheit equivalents of all Celcius temperatures from 0 to 100 degrees
, and the Celsius equivalents of all Fahrenheit temperatures from 32 to 212
degrees. Print the outputs in a tabular for mat that minimizes the number
of lines of output while remaining readable.*/

#include <stdio.h>

/* A function prototype. */
double fahrenheit(double celsius);
double celsius(double fahrenheit);


int main(void)
{
    int index;

    printf("\nCelsius Fahrenheit  |  Fahrenheit Celsius\n");
    for (index = 0; index <= (212 - 32); index++) {
	if (index <= 100) {
	    /* celsius to fahrenheit */
	    printf("%7d %10.2f", index, fahrenheit(index));
	    /* separator */
	    printf("  |  ");
	} else {
	    /* blank for Celsius to fahrenheit */
	    printf("                    |  ");
	}

	/* fahrenheit to celsius */
	printf("%10d %7.2f\n", index + 32, celsius(index + 32));

    }
    printf("\n");


    return 0;

}


/**
 * The function celsius() takes a temperature in Fahrenheit and returns the temperature in Celsius
 * 
 * @param fahrenheit The temperature in Fahrenheit
 * 
 * @return the value of the calculation.
 */
double celsius(double fahrenheit)
{
    return ((5.0 / 9.0) * (fahrenheit - 32.0));

}

double fahrenheit(double celsius)
{
    return ((9.0 / 5.0) * celsius + 32);

}