#include <stdio.h>
#include <math.h>

#define EPS 0.0001

void check_angle(float hour_angle, float minute_angle) {
    float diff = hour_angle > minute_angle ? hour_angle - minute_angle : minute_angle - hour_angle;
    diff = diff < 360 - diff ? diff : 360 - diff;
    if(diff < EPS) printf("No Angle\n");
    else if(diff < 90 - EPS) printf("Acute Angle\n");
    else if(fabs(diff - 90) < EPS) printf("Right Angle\n");
    else if(diff < 180 - EPS) printf("Obtuse Angle\n");
    else printf("Straight Angle\n");
}

int main() {
    int hour, minute;
    scanf("%d %d", &hour, &minute);
    
    check_angle(30 * hour + 0.5 * minute, 6 * minute);
    return 0;
}
