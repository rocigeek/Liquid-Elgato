#include <stdio.h>
#define p (3.14285)

float Area(float r) {
  float Area = p * r * r;
  return Area;
}
int main() {
  float r, Z;
  printf("Enter radius=  ");
  scanf("%f", &r);
  Z = Area(r);
  // float area=p*r*r;
  printf("%.3f", Z);
  printf("\n Press enter to exit...");
  getchar();
  getchar();
  return 0;
}