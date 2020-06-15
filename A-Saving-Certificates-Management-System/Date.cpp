#include "Date.h"
#include <iostream>

using namespace std;

Date :: Date(int day, int month, int year){
    this->day = day;
    this->month = month;
    this->year = year;
}
Date :: Date(){

}
void Date :: set_day(int day){
    this->day = day;
}
void Date :: set_month(int month){
    this->month = month;
}
void Date :: set_year(int year){
    this->year = year;
}
int Date :: get_day(){
    return this->day;
}
int Date :: get_month(){
    return this->month;
}
int Date :: get_year(){
    return this->year;
}
Date Date :: operator-(Date date){
    Date temp;
    int d1 = this->day + (30 * this->month) + (365 * this->year);
    int d2 = date.day + (30 * date.month) + (365 * date.year);
    int d = abs(d1-d2);
    temp.year = d / 365;
    d /= 365;
    temp.month = d/30;
    d /= 30;
    temp.day = d;
    return temp;
}
int Date :: operator/(int x){
    return (this->year * 12 + this->month) / x;
}
void Date :: display(){
    cout << this->year << '/' << this->month << '/' << this->day << endl;
}