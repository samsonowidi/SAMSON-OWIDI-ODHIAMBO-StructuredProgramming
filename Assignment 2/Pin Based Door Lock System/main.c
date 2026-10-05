#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
    #include <windows.h>
    #define sleep_ms(ms) Sleep(ms)
#else
    #include <unistd.h>
    #define sleep_ms(ms) sleep((ms) / 1000)
#endif
int main()
{
    char pin[50];
    const char CORRECT_PIN[] = "1234"; // Default correct PIN
    int attempts = 0;
    int max_attempts = 3;
    int choice;
    int pin_valid = 0;

    printf("========================================\n");
    printf("   ELECTRONIC DOOR LOCK SECURITY SYSTEM\n");
    printf("========================================\n");

    while (attempts < max_attempts) {
        printf("\nEnter 4-digit PIN: ");
        scanf("%s", pin);

        int pin_length = strlen(pin);

        // Validate 4-digit PIN length using if-else if-else
        if (pin_length < 4) {
            printf("PIN is too short(must be 4digits)\n");
        } else if (pin_length > 4) {
            printf("PIN is too long(must be 4 digits)\n");
        } else {
            printf("PIN is exactly 4 digits\n");
        }

        // Check if the PIN matches the correct PIN
        if (strcmp(pin, CORRECT_PIN) == 0) {
            pin_valid = 1;
            break; // Exit loop on successful PIN entry
        } else {
            attempts++;
            int remaining = max_attempts - attempts;
            if (remaining > 0) {
                printf("Incorrect PIN! Remaining attempts: %d\n", remaining);
            }
        }
    }

    // If access is granted
    if (pin_valid) {
        printf("\n----------------------------------------\n");
        printf("1    Open the door\n");
        printf("2    Change username\n");
        printf("3    Change PIN\n");
        printf("4    Exit\n");
        printf("----------------------------------------\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        // Handle selected option using switch statement
        switch (choice) {
            case 1:
                printf("Access granted. Door unlocked\n");
                break;
            case 2:
                printf("change username feature coming soon\n");
                break;
            case 3:
                printf("change pin feature coming soon\n");
                break;
            case 4:
                printf("Exiting System.\n");
                break;
            default:
                printf("Invalid option! Please try again\n");
                break;
        }
    } else {
        // Lockout sequence after 3 failed attempts
        printf("\nSystem locked! Wait for 5 seconds...\n");

        // Countdown timer using for loop with 1-second delay
        for (int i = 5; i >= 1; i--) {
            printf("%d...\n", i);
            sleep_ms(1000); // 1-second delay
        }

        printf("You can try again now.\n");
    }

    return 0;
}
