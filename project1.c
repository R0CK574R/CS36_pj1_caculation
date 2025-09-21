#include <stdio.h>
#include <float.h>

// Minjae Kim - Project 1

void printsquareandcubes(void);
void printASCIIvaluesofname(void);
void printCalculatorMinjae(void);


int main(void) {
  printsquareandcubes();
  printASCIIvaluesofname();
  printCalculatorMinjae();
}

  //----Part 1----
  void printsquareandcubes(void) { 
  int num;
  printf("Miinjae's Table\n");
  printf("number\tsquare\tcube\n");
  for (num = 1; num <= 10; num++) {
    printf("%i\t\t%i\t\t%i\n", num, num * num, num * num * num);
    }
  }


//----Part 2----

void printASCIIvaluesofname(void) {
  char name[] = "Minjae";
  for (int i = 0; name[i] != '\0'; i++) {
    printf("%c -  %i\n", name[i], name[i]);
    }
  
  }

//----Part 3----

void printCalculatorMinjae(void) {
  float num1, num2, num3;
  float sum, average, product, smallest, largest;

  printf("Number calculator by Minjae Kim\n");
  printf("Enter the first three different floating-point numbers: ");
  scanf("%f", &num1);
  printf("Enter the second three different floating-point numbers: ");
  scanf("%f", &num2);
  printf("Enter the third three different floating-point numbers: ");
    scanf("%f", &num3);

  sum = num1 + num2 + num3;
  average = sum / 3;
  product = num1 * num2 * num3;

  smallest = num1;
  largest = num1;

  if (num2 < smallest) smallest = num2;
  if (num3 < smallest) smallest = num3;

  if (num2 > largest) largest = num2;
  if (num3 > largest) largest = num3;

  printf("The sum of your numbers is %.2f\n", sum);
  printf("The average of your numbers is %.2f\n", average);
  printf("The product of your numbers is %.2f\n", product);
  printf("The smallest number is %.2f\n", smallest);
  printf("The largest number is %.2f\n", largest);
}