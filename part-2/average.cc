// Laurence Porcioncula
// laurence_05@csu.fullerton.edu
// @Laurence890
// Partners: @curtisqt30

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if ((arguments.size() <= 1)) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  bool first{true};
  double sum{0.0};
  double average{0.0};
  double counter{0.0};

  for (const std::string& argument : arguments) {
    if (first) {
      first = false;
      continue;
    }
    double to_double{std::stod(argument)};
    sum += to_double;
    ++counter;
  }

  average = sum / counter;
  std::cout << "average = " << average << '\n';

  return 0;
}
