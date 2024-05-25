#include <iostream>

int main() {
  float numbers[15];
  std::cout << "Input 15 numbers: ";

  for (int i = 0; i < 15; i++) {
    std::cin >> numbers[i];
  }

  for (int i = 0; i < 8; i++) {
    for (int j = i + 1; j < 15; j++) {
      if (numbers[j] > numbers[i]) {
        std::swap(numbers[j], numbers[i]);
      }
      if (numbers[14 - j] < numbers[14 - i]) {
        std::swap(numbers[14 - j], numbers[14 - i]);
      }
    }
  }
  
  for (int i = 0; i < 15; i++) {
    std::cout << numbers[i] << " ";
  }
}