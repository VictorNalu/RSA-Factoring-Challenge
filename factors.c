#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void factorize(int number) {
    if (number < 0) {
        printf("%d=%d*%d\n", number, number, 1);
        return;
    }

    printf("%d=", number);

    for (int i = 2; i <= number; ++i) {
        while (number % i == 0) {
            printf("%d", i);
            number /= i;
            if (number > 1) {
                printf("*");
            }
        }
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <file>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    while ((read = getline(&line, &len, file)) != -1) {
        int number = atoi(line);
        factorize(number);
    }

    free(line);
    fclose(file);

    return 0;
}
