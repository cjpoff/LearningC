#include <stdio.h>

int main(void)
{
    /* Prompt the user to enter a temperature value in Fahrenheit */
    printf("Please enter a temperature value in Fahrenheit: ");
    float temperatureF;
    /* Read user input into the variable temperatureF */
    scanf("%f", &temperatureF);
    /* temperatureF read from user input */
    float temperatureC = (temperatureF - 32.0) * 5.0 / 9.0;
    /* Output the converted temperature in Celsius */
    printf("The corredponding temperature in Celsius is %.2f C. \n", temperatureC);

    return 0;
}
