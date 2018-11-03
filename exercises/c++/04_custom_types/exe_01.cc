#include <iostream>
enum class Month {jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};
bool is_leap(const int y);

class Date {

public:
  Date (int d, Month m, int y) : _day{d}, _month{m}, _year{y} {} // constructor
  Date () : _day{1}, _month{Month::jan}, _year{2001} {} // default constructor


  int day () const {return _day;}
  Month month () const {return _month;}
  int year () const {return _year;}
  void add_days (unsigned int n);

private:
  int _day;
  Month _month;
  int _year;
  void add_day ();
  void change_month (int j);
};

void Date::add_day () {
  int m;
  switch(_month) {

    case Month::jan: case Month::mar: case Month::may:
    case Month::jul: case Month::aug: case Month::oct:
    case Month::dec:
      change_month(31);
      break;

    case Month::apr: case Month::jun: case Month::sep:
    case Month::nov:
      change_month(30);
      break;

    case Month::feb:
      if (!is_leap(_year)) change_month(28);
      else if (is_leap(_year)) change_month(29);
      break;
  }
}

// --------------------------------------------------------
void Date::change_month (int j) {
  if (_day < j) _day = _day + 1;
  else if (_day == j) {
    int m = static_cast<int>(_month);
    _day = 1;
    if (_month == Month::dec) {
      _month = Month::jan;
      ++_year;
      }
    else _month = Month(m+1);
      }
    }
// --------------------------------------------------------

void Date::add_days (const unsigned int n) {
  unsigned int i{0};
  while (i < n) {
    Date::add_day();
    ++i;
  }

}

// helper functions: logical
bool operator==(const Date& lhs, const Date& rhs) {
  return (lhs.day()==rhs.day() && lhs.month()==rhs.month() && lhs.year()==rhs.year());
}

bool operator!=(const Date& lhs, const Date& rhs) {
  return !(lhs==rhs);
}

//helper function: output
std::ostream& operator<<(std::ostream& os, const Date& d) {
    os << d.day() << '/' << static_cast<int>(d.month()) << '/' << d.year() << std::endl;
  return os;
}

//helper function: leap years
bool is_leap(const int y) {
  if ((y%4 == 0) && (y%400 != 0)) return true;
  else return false;
}

int main () {

  unsigned int n{1};
  int day, year;
  Month month;
  Date d1{31,Month::jan,2016};
  d1.add_days(n);

  std::cout << d1;

  return 0;
}
