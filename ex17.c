#include <stdio.h>
#include <math.h>
 
typedef struct {
    double x;
    double y;
    double z;
} Point;
 
double calculateMagnitude(Point p1, Point p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    double dz = p2.z - p1.z;
 
    return fabs(dx) > fabs(dy) ? (fabs(dx) > fabs(dz) ? fabs(dx) : fabs(dz))
                               : (fabs(dy) > fabs(dz) ? fabs(dy) : fabs(dz));
}
 
int main() {
    int n;
    scanf("%d", &n);
 
    Point points[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%lf %lf %lf", &points[i].x, &points[i].y, &points[i].z);
    }
 
    for (i = 0; i < n - 1; i++) {
        double magnitude = calculateMagnitude(points[i], points[i + 1]);
        printf("%.2lf\n", magnitude);
    }
 
    printf("\n");
 
    return 0;
}