/* Convert seconds into hours, minutes & seconds and print in HH:MM: SS. [e.g. 10000 seconds = 
02:46:40)] */
#include <stdio.h>
int main() {
    int totalSeconds;
    int hours, minutes, seconds;

    printf("Enter seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%02d:%02d:%02d", hours, minutes, seconds);

    return 0;
}