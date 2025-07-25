#include <stdio.h>
#include <stdlib.h>
int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } else if (m > 0 && n > 0) {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
    return -1;
}

int main() {
    int m, n;
    system("cls");
    printf("Enter values for m and n: ");
    scanf("%d %d", &m, &n);
    printf("Ackermann(%d, %d) = %d\n", m, n, ackermann(m, n));
    return 0;
}
