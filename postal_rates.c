#include <stdio.h>

int main()
{
      float weight, rate;
      printf("Enter weight of a letter in grams:");
      scanf("%f", &weight);

      if (weight <= 50)
      {
            rate = 0.50 * weight / 10;
      }
      else if (weight <= 150)
      {
            rate = 0.50 * 50 / 10 + 0.40 * (weight - 50) / 10;
      }
      else if (weight <= 400)
      {
            rate = 0.50 * 50 / 10 + 0.40 * 100 / 10 + 0.25 * (weight - 150) / 10;
      }
      else
      {
            rate = 0.50 * 50 / 10 + 0.40 * 100 / 10 + 0.25 * 250 / 10 + 0.25 * (weight - 400) / 1000;
      }
      printf("The postage to be paid for mailing letters of weight %.2f is : %.3f\n", weight, rate);
}