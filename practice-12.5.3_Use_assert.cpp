#include <cassert>
#include <iostream>

float travelTime(float distance, float speed) {
  assert(speed > 0);
  return distance / speed;
}

int main() {
  std::cout << "Using assert macro\n";
  int distance = 2000, speed = 0;

  std::cout << travelTime(distance, speed);
}
