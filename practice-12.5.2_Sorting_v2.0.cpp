#include <iostream>

int main() {
  float numbers[15];

  std::cout << "Input 15 numbers: ";

  for (int i = 0; i < 15; i++) {
    std::cin >> numbers[i];
    int n = i;
    if (i >= 1) {
      while (numbers[i] > numbers[i - 1] && i > 0) {
        std::swap(numbers[i], numbers[i - 1]);
        i--;
      }
    }
    i = n;
  }
  
  for (int i = 0; i < 15; i++) {
    std::cout << numbers[i] << " ";
  }
}