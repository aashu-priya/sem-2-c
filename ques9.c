#include<stdio.h>

float convtomiles(int *a, int *b);

int main() {
    int y, f;
    float m;
    
    printf("Enter the yard and feet: ");
    scanf("%d %d", &y, &f);
    m = convtomiles(&y, &f);
    printf("%.2f", m);
    return 0;
}

float convtomiles(int *yards, int *feet) {
    int tf = (*yards * 3) + *feet;
    float miles = (float)tf / 5280;
    return miles;
}
