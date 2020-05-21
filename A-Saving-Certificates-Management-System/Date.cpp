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
void Date :: get_day(int day){
    this->day = day;
}
void Date :: get_month(int month){
    this->month = month;
}
void Date :: get_year(int year){
    this->year = year;
}

Date Date :: operator+(Date date){
    Date temp;
    int d1 = this->day + (30 * this->month) + (365 * this->year);
    int d2 = date.day + (30 * date.month) + (365 * date.year);

    if(d1 > d2) {
        if(this->day < date.day)
            this->day += 30, --this->month;
        temp.day = this->day - date.day;
        if(this->month < date.month)
            this->month += 12, --this->year;
        temp.month = this->month - date.month;
        temp.year = this->year - date.year;
    }
    else {
        if(date.day < this->day)
            date.day += 30, --date.month;
        temp.day = this->day - date.day;
        if(date.month < this->month)
            date.month += 12, --date.year;
        temp.month = this->month - date.month;
        temp.year = this->year - date.year;
    }
}
