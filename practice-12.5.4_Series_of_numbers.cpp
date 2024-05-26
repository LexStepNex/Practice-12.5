#include <iostream>

int main() {
  std::cout << "Find the repeating number\n";
  int numbers[15] = {5, 6, 7, 8, 14, 10, 11, 12, 13, 14, 15, 16, 17, 18, 9};

  int min = numbers[0];
  int sumMass = numbers[0];

  for (int i = 1; i < 15; i++) {
    if (numbers[i] < min) {
      min = numbers[i];
    }
    sumMass += numbers[i];
  }

  int sumNormMass = min;
  int MaxInNorm = 0;
  for (int count = 1; count < 15; count++) {
    sumNormMass += min + count;
    if (count == 14) {
      MaxInNorm = min + count;
    }
  }

  for (int i = 0; i < 15; i++) {
    if ((sumMass - numbers[i] ==
         sumNormMass - numbers[i] - (MaxInNorm - numbers[i])) &&
        i != 14) {
      std::cout << "Repeat number: " << numbers[i] << "\n";
      break;
    } else if (i == 14) {
      std::cout << "No repeating numbers\n";
    }
  }
}
