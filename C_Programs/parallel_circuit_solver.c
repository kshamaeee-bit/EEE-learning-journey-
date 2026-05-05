#include <stdio.h>

int main() {
    int n, i;
    float resistance[10], reciprocalSum = 0, totalR, voltage, current;

    printf("=== Parallel Circuit Solver ===\n");

    printf("Enter number of resistors: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter resistance %d: ", i+1);
        scanf("%f", &resistance[i]);
        reciprocalSum += 1 / resistance[i];
    }

    totalR = 1 / reciprocalSum;

    printf("Total Resistance = %.2f Ohms\n", totalR);

    printf("Enter Voltage: ");
    scanf("%f", &voltage);

    current = voltage / totalR;

    printf("Total Current = %.2f Amperes\n", current);

    return 0;
}
