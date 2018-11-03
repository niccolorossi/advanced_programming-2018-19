#include <iostream>
#include <string>

int main () {

  std::string line;
  std::string word;
  std::cout << "type some text" << "\n";
  int l{50}, j;
  int i{0}, k{0};
  char empty = ' ';

  std::getline(std::cin,line);
    j = line.length();

  while (k < j) {
    while (i < l) {

    if(line[i] == empty) {
      word = line.substr(0,i);
      k = i + 1;
    }

  i++;
  }
  std::cout << word << "\n";
  line = line.substr(k,j);
  i = 0;
  if (line.length() < l) break;
}

std::cout << line << "\n";

return 0;

}
