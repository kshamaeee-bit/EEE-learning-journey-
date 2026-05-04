#include <stdio.h>

int main() {
    int choice;
    float V, I, R, P;

    printf("=== EEE Calculator ===\n");
    printf("1. Ohm's Law (Find V)\n");
    printf("2. Ohm's Law (Find I)\n");
    printf("3. Ohm's Law (Find R)\n");
    printf("4. Power Calculation (P = V * I)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter Current (I): ");
            scanf("%f", &I);
            printf("Enter Resistance (R): ");
            scanf("%f", &R);
            V = I * R;
            printf("Voltage = %.2f V\n", V);
            break;

        case 2:
            printf("Enter Voltage (V): ");
            scanf("%f", &V);
            printf("Enter Resistance (R): ");
            scanf("%f", &R);
            I = V / R;
            printf("Current = %.2f A\n", I);
            break;

        case 3:
            printf("Enter Voltage (V): ");
            scanf("%f", &V);
            printf("Enter Current (I): ");
            scanf("%f", &I);
            R = V / I;
            printf("Resistance = %.2f Ohms\n", R);
            break;

        case 4:
            printf("Enter Voltage (V): ");
            scanf("%f", &V);
            printf("Enter Current (I): ");
            scanf("%f", &I);
            P = V * I;
            printf("Power = %.2f Watts\n", P);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
