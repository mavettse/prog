#include <stdio.h>

int main() {

    int a, n;
    scanf("%d %d", &a, &n);
    while (n <= 0) {
        scanf("%d", &n);
    }

    int i, soma = 0;
    for (i = 0; i < n; i++) {
        soma += a + i;
    }

    printf("%d\n", soma);

    return 0;
}
