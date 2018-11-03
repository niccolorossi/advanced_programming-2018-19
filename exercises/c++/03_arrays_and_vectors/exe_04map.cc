#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

int main () {

  int n{0};
  std::string word;

  std::map <std::string, int> counter;

  std::ifstream in_file;
  in_file.open("LittleWomen.txt");

  if (!in_file) {
    std::cerr << "Unable to open file LittleWomen.txt\n";
    exit(1);
  }

  while (in_file >> word) {

    std::map<std::string,int>::iterator it;
    it = counter.find(word);
    if (it != counter.end()) {
      it->second++;
    }
    else counter.insert (std::pair<std::string, int>(word ,1));
  }
  for (std::map<std::string,int>::iterator it=counter.begin(); it!=counter.end(); ++it)
    std::cout << it->first << " " << it->second << "\n";

}
