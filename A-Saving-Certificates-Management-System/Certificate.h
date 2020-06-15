#ifndef A_SAVING_CERTIFICATES_MANAGEMENT_SYSTEM_CERTIFICATE_H
#define A_SAVING_CERTIFICATES_MANAGEMENT_SYSTEM_CERTIFICATE_H
#include <iostream>
#include "CertificateOwner.h"
#include "Date.h"
using namespace std;


class Certificate {
protected:
    CertificateOwner owner;
    Date date_purchase, Date_of_last_interest;
    int Duration;
    double CertificateAmount;
    double CurrentBalance;
    double Annual_interest_rate;
    double Service_charges;
    int Interests_Frequency_monthly;
protected:
    double redeem();
public:
    Certificate(CertificateOwner C_O, Date date_purchase, int Duration, double CertificateAmount, double Annual_interest_rate, int Interests_Frequency_monthly);

    Certificate();

    virtual bool Withdraw(double withdraw);
    double viewCurrentBalance();
    double viewTotalBalance();
    virtual void calcInt(Date current_date);
    virtual void applyCharges(int service_charges);
    string issueCreditCard();
    void displayOwnerInfo(CertificateOwner Owner);
};


#endif //A_SAVING_CERTIFICATES_MANAGEMENT_SYSTEM_CERTIFICATE_H
