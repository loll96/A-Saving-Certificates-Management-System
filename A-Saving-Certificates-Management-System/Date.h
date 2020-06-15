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
    int get_day();
    int get_month();
    int get_year();
    void set_day(int day);
    void set_month(int month);
    void set_year(int year);
    Date operator-(Date date);
    int operator/(int x);
    void display();
    //int operator-(Date D);
};


#endif //A_SAVING_CERTIFICATES_MANAGEMENT_SYSTEM_DATE_H
