#ifndef VERIFYDATE_CPP
#define VERIFYDATE_CPP

#include <iostream>
#include "../header/VerifyDate.h"

bool VerifyDate::verify_day(int month, int day, int year) {
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        return (day > 0 && day <= 31);
    }
    else if(month == 4 || month == 6 || month == 9|| month == 11) {
        return (day>0 && day<=30);
    }
    else if(month == 2 && ((year%400 == 0) || ((year%100 != 0) && (year%4 == 0)))) {
        return (day>0 && day<=29);
    }
    else {
        return (day>0 && day<=28);
    }
}

bool VerifyDate::verify_month(int month) {
    return(month >= 1 && month <= 12);
}

bool VerifyDate::verify_year(int year) {
    return(year > 2022 && year < 3000);
}

bool VerifyDate::verify_monthDayYear(int month, int day, int year) {
    if(verify_year(year) && verify_month(month)) {
        return(verify_day(month, day, year));
    }
    return 0;
}

#endif //VERIFYDATE_CPP