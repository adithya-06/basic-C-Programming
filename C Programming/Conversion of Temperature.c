//Conversion of temperature from Fahrenheit(°F) to Celsius(°C)
#include <stdio.h>
#include <conio.h>
void main()
{
    float f, c;
    printf("Temperature in °F ");
    scanf("%f", &f);
    c = ((f - 32) * 5) / 9;
    printf("The temperature in Celsius is %f", c);
    printf("°C");
    getch();
}



