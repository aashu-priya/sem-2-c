#include <stdio.h>

const char* day_name(int n) {
    static const char* days[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"
    };
    if (n >= 0 && n <= 6) {
        return days[n];
    } else {
        return "Invalid day";
    }
}
int main() {
    int dayNumber;
    printf("Enter a number between 0 and 6: ");
    scanf("%d", &dayNumber);
    const char* day = day_name(dayNumber);
    printf("Day corresponding to number %d: %s\n", dayNumber, day);
    return 0;
}