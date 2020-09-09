#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "F2.h"



//--------------Main program---------------\\

int main()
{

    char answer[100];
    int c1, n1, d1;
    int c2, n2, d2;
    int index = 0;

    c1 = 1;
    n1 = 1;
    d1 = 2;

    c2 = 2;
    n2 = 2;
    d2 = 3;

        //if the C string could hold at least the characteristic
    if(add(c1, n1, d1, c2, n2, d2, answer, 100))
    {
        while(answer[index] != '\0')
        {
            printf(answer[index]);
            index++;
        }
    }
    else
    {
        printf("Array size was not large enough");
    }




    return 0;
}


//-------------Functions---------------\\

//takes in two sets of mantissa and characteristic, a char array to store
//result in and the length of the array.

//c = characteristic
//n & d = numerator and denominator of characteristic
//Ex: 0.352 -> c = 0, n = 351 & d = 1000

//Note: result data will be lost if array is passed in anonymously
bool add(int c1, int n1, int d1,
         int c2, int n2, int d2,
         char result[], int len)
{

  int index = 0;
  bool carry = false;
  int charResult = c1 + c2;
  int charLen = numOfDigits(charResult);
  int *characteristic = intToDigitArray(charResult);
  int mantissaResult;
  int mantissaSpace = numOfDigits(charResult) + 1;
  int *mantissa1 = mantissaToArray(n1, d1, mantissaSpace);
  int *mantissa2 = mantissaToArray(n2, d2, mantissaSpace);

  //base case, not enough to store characteristic
  if(len <= charLen ||
     mantissa1 == NULL ||
     mantissa2 == NULL)
  {
    return false;
  }

  while(index < charLen)
  {
    result[index] = (char) characteristic[index];
    index++;
  }

  if(index < len - 1)
  {
    result[index] = '.';
    index++;

    while(index < len - 1)
    {
      mantissaResult = *(mantissa1 + index) + *(mantissa2 + index);

      if(carry)
      {
        mantissaResult++;
        carry = false;
      }

      if(mantissaResult > 9)
      {
        mantissaResult %= 10;
        carry = true;
      }

      result[index] = mantissaResult;

      index++;
    }

  }

  result[index] = '\0';

  return true;

}

//takes in two sets of mantissa and characteristic, a char array to store
//result in and the length of the array.

//c = characteristic
//n & d = numerator and denominator of characteristic
//Ex: 0.352 -> c = 0, n = 351 & d = 1000

//Note: result will be lost if array is passed in anonymously
bool subtract(int c1, int n1, int d1,
              int c2, int n2, int d2,
              char result[], int len)
{



}


//---------------Helper Functions------------------\\


//Counts the number of digits in a given int
//Zero is counted as 1 digit
int numOfDigits(int numberToCount)
{
  int amount = 1;

  if(numberToCount < 0)
  {
    numberToCount *= -1;
  }

  while(numberToCount > 9)
  {
    numberToCount /= 10;
    amount++;
  }

  return amount;
}


//Converts a mantissa (given as a fraction) into a int array with
//only one digit per index
int* mantissaToArray(int numerator, int denominator, int maxLength)
{
  int index = 0;
  int mantissaArray[maxLength];

  if(numerator >= denominator)
  {
    return NULL;
  }

  while((numerator % denominator) > 0 && index < maxLength - 1)
  {

    numerator *= 10;
    mantissaArray[index] = numerator / denominator;
    numerator %= denominator;
    index++;

  }

  if(index < maxLength - 1)
  {
    mantissaArray[index] = numerator / denominator;
  }

  return mantissaArray;

}


//Converts a given int to a array with each index containing only one digit
int* intToDigitArray(int number)
{
  int amountOfDigits = numOfDigits(number);
  int digitArray[amountOfDigits];
  int place = 1;
  int power = 0;
  int index = 0;

  while(power < amountOfDigits - 1)
  {
    place *= 10;
    power++;
  }

  while(index < amountOfDigits)
  {
    digitArray[index] = number / place;
    place /= 10;
    index++;
  }

  return digitArray;

}
