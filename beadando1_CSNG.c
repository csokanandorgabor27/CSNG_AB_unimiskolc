
#include <stdio.h>

int main(void)
{
    FILE *f;
    char sor[100];

    f = fopen("adatok.txt", "a");

    if (f == NULL) {
        perror("Fajlmegnyitasi hiba");
        return 1;
    }

    fputs("Hello Vilag!\n", f);
    fputs("Miskolc\n", f);
    fputs("Budapest\n", f);

    fclose(f);

    printf("Az adatok elmentve!\n");
    printf("Nyomj Entert a beolvasashoz!\n");
    getchar();

    f = fopen("adatok.txt", "r");

    if (f == NULL) {
        perror("Fajlmegnyitasi hiba");
        return 1;
    }

    while (fgets(sor, sizeof(sor), f) != NULL) {
        printf("%s", sor);
    }

    fclose(f);

    return 0;
}

}

