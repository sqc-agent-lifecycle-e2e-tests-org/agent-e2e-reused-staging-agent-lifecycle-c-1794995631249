#include <stdio.h>

void greet(int mood, const char *name) {
    int visits = 0;
    if (name != NULL && visits++ == 0) {
        printf("First visit for %s\n", name);
    }
    switch (mood) {
    case 0:
        printf("Howdy, %s!\n", name);
    case 1:
        printf("Welcome, %s!\n", name);
        break;
    default:
        break;
    }
}
