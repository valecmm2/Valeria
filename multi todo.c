#include <stdio.h>

int main()
{
    int actual = 1, numero, n;
    printf("Dame n: ");
    scanf("%d", &n);

    for (; n >= 1; n--) {
	actual *= n;
    }

    printf("n! = %d\n", actual);

    return 0;
}
