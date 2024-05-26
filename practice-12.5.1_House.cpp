#include <iostream>
#include <string>

int main() {
  std::cout << "Table of residents in the house\n";

  std::string apartment[10];

  for (int i = 0; i < 10; i++) {
    std::cout << "Input surname in " << i + 1 << " apartment: " << "\n";
    std::getline(std::cin, apartment[i]);
  }

  for (int i, count = 0; count < 3;) {
    std::cout << "input number apartment (1-10): ";
    std::cin >> i;

    if (i >= 1 && i <= 10) {
      std::cout << "In " << i << " apartment lives " << apartment[i - 1]
                << std::endl;
      count++;
    } else {
      std::cout << "Error. Apartment from 1 to 10\n";
    }
  }
}