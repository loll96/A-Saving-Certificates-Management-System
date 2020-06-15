#include <iostream>
#include "Certificate.h"

using namespace std;

#ifndef A_SAVING_CERTIFICATES_MANAGEMENT_SYSTEM_SILVERCERTIFICATE_H
#define A_SAVING_CERTIFICATES_MANAGEMENT_SYSTEM_SILVERCERTIFICATE_H


class SilverCertificate : public Certificate {
private:

public:
    SilverCertificate(CertificateOwner C_O, Date date_purchase, double CertificateAmount);
    bool Withdraw(double withdraw);
    double redeem(Date current_date);
};


#endif //A_SAVING_CERTIFICATES_MANAGEMENT_SYSTEM_SILVERCERTIFICATE_H
