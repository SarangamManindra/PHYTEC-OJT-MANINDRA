#include <stdio.h>

// Function to perform temperature conversions
void temperatureConverter() {
    int tempChoice;
    int userinputF, userinputC;
    int fahrenheitToCelcius, celciusToFahrenheit;

    printf("Here is the Conversion for 'TEMPERATURE':\n\n");
    printf("Enter 1 for Fahrenheit to Celsius.\n");
    printf("Enter 2 for Celsius to Fahrenheit.\n");
    scanf("%d", &tempChoice);

    if (tempChoice == 1) {
        printf("Please enter the Fahrenheit degree: ");
        scanf("%d", &userinputF);
        fahrenheitToCelcius = ((userinputF - 32) * (5.0 / 9.0));
        printf("Celsius: %d°C\n", fahrenheitToCelcius);
    } else if (tempChoice == 2) {
        printf("Please enter the Celsius degree: ");
        scanf("%d", &userinputC);
        celciusToFahrenheit = ((9.0 / 5.0) * userinputC + 32);
        printf("Fahrenheit: %d°F\n", celciusToFahrenheit);
    } else {
        printf("Please enter the correct choice.\n");
    }
}

// Function to perform currency conversions
void currencyConverter() {
    int currencyChoice;
    int userinputINRtoUSD, userinputINRtoEURO;
    float INRtoUSD, INRtoEURO;

    printf("Here is the Conversion for 'CURRRENCY':\n\n");
    printf("Enter 1 for INR to USD.\n");
    printf("Enter 2 for INR to EURO.\n");
    scanf("%d", &currencyChoice);

    if (currencyChoice == 1) {
        printf("Please enter the INR amount: ");
        scanf("%d", &userinputINRtoUSD);
        INRtoUSD = userinputINRtoUSD / 83.03; // Update with the correct exchange rate
        printf("USD: %.2f$\n", INRtoUSD);
    } else if (currencyChoice == 2) {
        printf("Please enter the INR amount: ");
        scanf("%d", &userinputINRtoEURO);
        INRtoEURO = userinputINRtoEURO / 88.85; // Update with the correct exchange rate
        printf("EURO: %.2f€\n", INRtoEURO);
    } else {
        printf("Please enter the correct choice.\n");
    }
}

// Function to perform mass conversions
void mass_and_heightConverter() {
    int massChoice,heightChoice;
    int userinputKilograms, userinputCentimeters;
    float KilogramsToPounds, CentimetersToFeet;

    printf("Here is the Conversion for 'MASS & HEIGHT':\n\n");
    printf("Enter 1 for Kilograms to pounds.\n");
    printf("Enter 2 for Centimeters to Feet.\n");
    scanf("%d", &massChoice);

    if (massChoice == 1) {
        printf("Please enter the Kilograms amount: ");
        scanf("%d", &userinputKilograms);
        KilogramsToPounds = userinputKilograms * 2.20462;
        printf("Pounds: %.2flb\n", KilogramsToPounds);
    } else if (massChoice == 2) {
        printf("Please enter the Centimeter amount: ");
        scanf("%d", &userinputCentimeters);
        CentimetersToFeet = userinputCentimeters / 30.48;
        printf("Feet: %.2f\n", CentimetersToFeet);
    } else {
        printf("Please enter the correct choice.\n");
    }
}

int main() {
    char choice;

    while (1) { // Infinite loop

        printf("*************************HELLO!**************************\n");
	printf("***************WELCOME TO UNIT CONVERTER*****************\n\n");
        printf("Here is a list of Conversions to choose from:\n\n");
        printf("T - Temperature\n");
        printf("C - Currency\n");
        printf("M - Mass & Height\n");
        printf("Enter your choice (T/C/M): ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'T':
                temperatureConverter();
                break;
            case 'C':
                currencyConverter();
                break;
            case 'M':
                mass_and_heightConverter ();
                break;
            default:
                printf("Invalid choice. Please choose T, C, or M.\n\n");
                break;
        }

        printf("Do you want to continue (Y/N)? ");
        scanf(" %c", &choice);
        if (choice != 'Y' && choice != 'y') {
            break; // Exit the loop if the user's choice is not 'Y' or 'y'
        }
    }

    return 0;
}

