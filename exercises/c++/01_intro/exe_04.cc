#include <iostream>
#include <string>

void measures (double value, std::string unit) {
  if (unit == "inch") value = value * 0.0254;
  std::cout << value << " m" << "\n";
}

int main () {
  double v;
  std::string u;
  std::cout << "outcome of measurment?" << "\n";
  std::cin >> v;
  std::cout << "unit of measurment?" << "\n";
  std::cin >> u;

  measures(v,u);
  return 0;
}
