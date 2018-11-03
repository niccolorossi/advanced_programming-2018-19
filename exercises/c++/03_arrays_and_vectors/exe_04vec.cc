#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

void repetitions (std::vector<std::string> &t, int n) {

  int b{0};

  for (int i = 0; i < n; i++) {

    if (i == 0 || t[i] == t[i-1]) b++;

    else {
      std::cout << t[i-1] << " " << b << " repetitions\n";
      b = 1;
      }
    }

    // else if (i != 0 && t[i] == t[i-1])
      // b++;
  // }

}

int main () {

  int n{0};
  std::string word;
  std::vector<std::string> text;

  std::ifstream in_file;
  in_file.open("LittleWomen.txt");

  if (!in_file) {
    std::cerr << "Unable to open file LittleWomen.txt\n";
    exit(1);
  }

  while (in_file >> word) {
    text.push_back(word);
    n++;
  }
  std::cout << "\n";

  std::sort(text.begin(),text.end());
  repetitions(text, n);

}
