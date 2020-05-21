#ifndef A_SAVING_CERTIFICATES_MANAGEMENT_SYSTEM_DATE_H
#define A_SAVING_CERTIFICATES_MANAGEMENT_SYSTEM_DATE_H
#include <iostream>

using namespace std;


class Date {
private:
    int day, month, year;
public:
    Date(int day, int month, int year);
    Date();
    void get_day(int day);
    void get_month(int month);
    void get_year(int year);
    Date operator+(Date date);
};


#endif //A_SAVING_CERTIFICATES_MANAGEMENT_SYSTEM_DATE_H
