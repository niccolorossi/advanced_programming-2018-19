#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

void dictionary (std::vector<std::string> &t, int n) {

  for (int i = 0; i < n; i++) {
    if (i == 0 || t[i] != t[i-1])
      std::cout << t[i] << "\n";
  }

}

int main () {

  int n{0};
  std::string word;
  std::vector<std::string> text;

  while (std::cin >> word) {
    text.push_back(word);
    n++;
  }
  std::cout << "\n";

  std::sort(text.begin(),text.end());
  dictionary(text, n);

}
