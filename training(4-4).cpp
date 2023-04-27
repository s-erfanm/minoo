#include <iostream>

using namespace std;

// توابع برای محاسبه تعداد روزها و سال کبیسه
int daysInMonth(int year, int month) {
  if (month < 1 || month > 12)
    return 0;
  int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (month == 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    return 29;
  return days[month - 1];
}

bool isLeapYear(int year) {
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    return true;
  return false;
}

// تابع تبدیل تاریخ میلادی به شمسی
void gregorianToPersian(int g_y, int g_m, int g_d, int &p_y, int &p_m,
                        int &p_d) {
  // تعداد روزهای گذشته تا پایان سال قبل
  int pastDays = 0;
  for (int i = 1; i < g_m; i++) {
    pastDays += daysInMonth(g_y, i);
  }
  if (g_m > 2 && isLeapYear(g_y))
    pastDays++;

  // تعداد روزهای گذشته در سال جاری
  int currentDays = g_d - 1;

  // در صورتی که سال کبیسه است و ماه فروردین یا اسفند است و تاریخ مورد نظر قبل
  // از ۲۹ فروردین است، یک روز به تعداد روزهای گذشته اضافه
  // می‌شود.
  if (isLeapYear(g_y) && g_m > 2 && g_d < 30) {
    currentDays++;
  }

  // تعداد روزهای گذشته به تعداد روزهای در ماه جاری اضافه
  // می‌شود.
  int totalDays = pastDays + currentDays;

  // تقسیم تعداد روزهای گذشته بر ۳۶۵ و تعیین سال، ماه و روز
  p_y = 0;
  while (totalDays >= 0) {
    p_y++;
    totalDays -= isLeapYear(p_y) ? 366 : 365;
  }
  p_y--;

  int daysOfYear = isLeapYear(p_y) ? 366 : 365;
  for (p_m = 1; p_m <= 12; p_m++) {
    if (totalDays < daysInMonth(p_y, p_m)) {
      break;
    }
    totalDays -= daysInMonth(p_y, p_m);
  }

  p_d = totalDays + 1;
}

// برنامه‌ی اصلی
int main() {
  int g_y, g_m, g_d;
  cout << "Enter Gregorian date (yyyy mm dd): ";
  cin >> g_y >> g_m >> g_d;

  int p_y, p_m, p_d;
  gregorianToPersian(g_y, g_m, g_d, p_y, p_m, p_d);

  cout << "Persian date: " << p_y << "/" << p_m << "/" << p_d << endl;

  return 0;
}