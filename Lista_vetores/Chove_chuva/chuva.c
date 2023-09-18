#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int dias[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &dias[i]);
    }

    int max = dias[0];

    for (int i = 1; i < n; i++) {
        if (dias[i] > max) {
            max = dias[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (dias[i] == max) {
            printf("%d ", i + 1);
        }
    }

    printf("%d", max);


    return 0;
}
