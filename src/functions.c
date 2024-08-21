#include <stdio.h>

int min = 1;
int max = 1000;
int GenerateRandNumber(int maxN, int minN) {
  if (maxN < minN) {
    return -1;
  }
  return min + rand() % (max - min + 1);
}