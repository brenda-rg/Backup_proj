#ifndef BACKUP_REF_VERIFYDATE_H
#define BACKUP_REF_VERIFYDATE_H


class VerifyDate {
    private: 
    bool verify_day(int, int, int);
    bool verify_month(int);
    bool verify_year(int);
    public:
    bool verify_monthDayYear(int, int, int);
};

#endif // BACKUP_REF_VERIFYDATE_H
