#include <stdio.h>

void greet(int mood, const char *name) {
    int visits = 0;
    int is_first_visit = (visits == 0);
    visits++;
    if (name != NULL && is_first_visit) {
        printf("First visit for %s\n", name);
    }
    switch (mood) {
    case 0:
        printf("Howdy, %s!\n", name);
        __attribute__((fallthrough));
    case 1:
        printf("Welcome, %s!\n", name);
        break;
    default:
        break;
    }
}
