#include <stdio.h>

int main() {
    int n, temp, digit, count = 0, sum = 0;
    int original;
 scanf("%d", &n);

    original = n;
 temp = n;

    while (temp != 0) {
        temp = temp / 10;
        count++;
    }

    temp = n;

    while (temp != 0) {
        digit = temp % 10;

        int power = 1;
        for (int i = 0; i < count; i++) {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
