#include <stdio.h>
#include <string.h>

double dblVar = 3.14;
double *dblPtr = &dblVar;

double dblVarReassign = 2.71;

int main()
{
  printf("%p\n", dblPtr);

  dblPtr = &dblVarReassign;

  printf("%f\n%f\n", dblVar, *dblPtr);

  // pointer arithmetic
  int x = 1;
  int y = 2;
  int z = 3;
  int *intPtr = &x;
  printf("intPtr value: %d\n", *intPtr);

  intPtr++;
  printf("intPtr incremented value: %d\t%p\n", *intPtr, intPtr);

  intPtr -= 2;
  printf("intPtr decremented value: %d\t%p\n", *intPtr, intPtr);

  // Should be the same for an array
  int intArr[] = {1, 2, 3};
  int *intArrPtr = intArr;
  printf("intArrPtr value: %d\n", *intArrPtr);
  printf("intArr values: %d, %d, %d\n", intArrPtr[0], intArrPtr[1], intArrPtr[2]);

  intArrPtr++;
  printf("intArrPtr incremented value: %d\t%p\n", *intArrPtr, intArrPtr);

  // Pointers and arrays
  char str[] = "thequickbrownfoxjumpsoverthelazydog";
  char *strPtr = &str[0];

  for (int i = 0; i < strlen(str); i++)
  {
    *strPtr = *strPtr - 32;
    strPtr++;
  }

  printf("\n%s\n", str);
}