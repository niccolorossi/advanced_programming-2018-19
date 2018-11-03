#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

// a function to compute the average temperature ----------
double mean (vector <double> &v, int n) {

  double m = 0;
  for (int i = 0; i < n; i++)
    m += v[i];
  return m/n;

}
// --------------------------------------------------------

// a function to compute the median -----------------------
double median (vector <double> &v, int n) {

  sort(v.begin(),v.end());

  if (n%2 == 1) return v[n/2];
  else return (v[n/2]+v[(n-1)/2])/2;

}
// --------------------------------------------------------

int main () {

  int n{1};
  double x;
  vector<double> temp;
  ifstream in_file;
  in_file.open("temperatures.txt");

  if (!in_file) {
    cerr << "Unable to open file temperatures.txt\n";
    exit(1);
  }

  while (in_file >> x) {
    temp.push_back(x);
    n++;
  }
  temp.pop_back();  // apparently I have an empty line at the end of the file no matter how I save it (atom)
  n--;

  in_file.close();

  cout << "the average temperature is " << mean(temp, n) << "\n";
  cout << "the median temperature is " << median(temp, n) << "\n";

}
