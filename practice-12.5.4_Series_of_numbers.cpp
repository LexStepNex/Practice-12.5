#include <iostream>

int main() {
  std::cout << "Find the repeating number\n";
  int numbers[15] = {5, 6, 7, 8, 14, 10, 11, 12, 13, 18, 15, 16, 17, 18, 9};

  int n = std::size(numbers);

  int min = numbers[0];
  int sumNumbers = numbers[0];

  for (int i = 1; i < n; i++) {
    if (numbers[i] < min) {
      min = numbers[i];
    }
    sumNumbers += numbers[i];
  }

  int sumUnique = min * (n - 1) + ((n - 1) / 2) * (n - 2);

  int max = 0;
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (max < numbers[i]) {
      max = numbers[i];
      j = i;
    }
    if (sumNumbers - sumUnique == numbers[i] && numbers[i] != max ||
        (max + numbers[i]) / 2 == max && j != i) {
      std::cout << "Repeat number: " << numbers[i] << "\n";
      break;
    } else if (i == n - 1) {
      std::cout << "No repeat elements\n";
    }
  }
}
