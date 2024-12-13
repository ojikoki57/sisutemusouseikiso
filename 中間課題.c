#include <stdio.h>
#include <string.h>
#include <ctype.h>

void check_password_strength(const char *password) {
    int length = strlen(password), has_upper = 0, has_lower = 0;
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) has_upper = 1;
        if (islower(password[i])) has_lower = 1;
    }
    if (length >= 8 && has_upper && has_lower) {
        printf("This password is strong\n");
    } else {
        if (length < 8) printf("It should be at least 8 characters long\n");
        if (!has_upper) printf("Include at least one uppercase letter\n");
        if (!has_lower) printf("Contain at least one lowercase letter\n");
    }
}

int main() {
    char password[100];
    printf("Enter your password and click  ");
    scanf("%99s", password);
    check_password_strength(password);
    return 0;
}