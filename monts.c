#include <stdio.h>
#include <string.h>

int main() {
    // Define variables
    int wrong = 1;
    int month_number;
    char month_name[20]; // Make it large enough to accommodate all month names

    while (wrong == 1) {
        printf("Please type a number between 1 and 12: ");
        scanf("%d", &month_number);

        switch (month_number) {
            case 1:
                strcpy(month_name, "January");
                wrong = 0;
                break;
            case 2:
                strcpy(month_name, "February");
                wrong = 0;
                break;
            case 3:
                strcpy(month_name, "March");
                wrong = 0;
                break;
            case 4:
                strcpy(month_name, "April");
                wrong = 0;
                break;
            case 5:
                strcpy(month_name, "May");
                wrong = 0;
                break;
            case 6:
                strcpy(month_name, "June");
                wrong = 0;
                break;
            case 7:
                strcpy(month_name, "July");
                wrong = 0;
                break;
            case 8:
                strcpy(month_name, "August");
                wrong = 0;
                break;
            case 9:
                strcpy(month_name, "September");
                wrong = 0;
                break;
            case 10:
                strcpy(month_name, "October");
                wrong = 0;
                break;
            case 11:
                strcpy(month_name, "November");
                wrong = 0;
                break;
            case 12:
                strcpy(month_name, "December");
                wrong = 0;
                break;
            default:
                printf("Please type a number between 1 and 12\n");
        }
    }
    printf("The month is: %s\n", month_name);
    printf("HEllo");

    return 0;
}
