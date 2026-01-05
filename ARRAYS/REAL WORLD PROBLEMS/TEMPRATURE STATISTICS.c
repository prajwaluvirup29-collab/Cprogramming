#include <stdio.h>

int main() {
    int n, i;
    float temp[50], sum = 0, avg, min, max;

    printf("Enter number of temperature readings: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter temperature %d: ", i + 1);
        scanf("%f", &temp[i]);
        sum += temp[i];
        if(i == 0) {
            min = max = temp[i];
        } else {
            if(temp[i] < min) min = temp[i];
            if(temp[i] > max) max = temp[i];
        }
    }

    avg = sum / n;

    printf("\nMinimum Temperature: %.2f\n", min);
    printf("Maximum Temperature: %.2f\n", max);
    printf("Average Temperature: %.2f\n", avg);

    return 0;
}
