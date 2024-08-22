#include <stdio.h>

int main(void) {
    float salaries[12];
    float total = 0.0;

    for (int i = 0; i < 12; i++) {
        printf("Enter salary for month[%2d]: ", i + 1);
        scanf("%f", &salaries[i]);
        total += salaries[i];
    }

    printf("\nAll salaries:\n");
    for (int i = 0; i < 12; i++) {
        printf("month[%2d] = %7.2f\n",i +1, salaries[i]);
    }

    printf("total     = %7.2f\n", total);

    return 0;
}
