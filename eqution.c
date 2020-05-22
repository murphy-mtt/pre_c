#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c, x1, x2, d;
  printf("Input 3 factors: ");
  scanf("%f %f %f", &a, &b, &c);
  printf("The equation is %0.2fx2 + %0.2fx + %0.2f = 0\n", a, b, c);
  if (a != 0)
  {
    d = sqrt(b*b - 4*a*c);
    x1 = (-b + d) / (2*a);
    x2 = (-b - d) / (2*a);
    if (x1 < x2)
      printf("%0.2f %0.2f\n", x2, x1);
    else
      printf("%0.2f %0.2f\n", x1, x2);
  }
  return 0;
}

