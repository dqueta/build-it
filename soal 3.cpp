#include <stdio.h>

int cekPrima(int n) {
    if (n <= 1) return 0;  // Bilangan kurang dari atau sama dengan 1 bukan bilangan prima
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;  // Jika ada faktor lain selain 1 dan n, maka bukan prima
    }
    return 1;  // Jika tidak ada faktor selain 1 dan n, maka prima
}

int main() {
    int n;

    // Input bilangan n
    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    // Periksa apakah bilangan prima
    if (cekPrima(n)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}
