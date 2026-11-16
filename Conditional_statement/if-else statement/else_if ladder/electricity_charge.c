// an electricity board charge according to fowlling rates.
//for the first 100 unit --rs 40 per unit for the next 200 unit-- rs 50 per unit for the next 300 unit-- rs 60 per unit all user are charged meter charge also . which is also rs 50 write a progreaminhg  to read number of units consuned and print out the charge.
#include <stdio.h>

#define meter_charge 50

int main() {
    int unit, total_charge, charge;

    printf("Enter the units consumed: ");
    scanf("%d", &unit);

    if (unit > 300) {
        charge = (unit - 300) * 60 + 200 * 50 + 100 * 40;
    } 
    else if (unit > 100) {
        charge = (unit - 100) * 50 + 100 * 40;
    } 
    else {
        charge = unit * 40;
    }

    total_charge = charge + meter_charge;

    printf("\nThe payable amount is %d", total_charge);

    return 0;
}
 