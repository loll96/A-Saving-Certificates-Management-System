#include <iostream>
#include "Certificate.h"

using namespace std;

#ifndef A_SAVING_CERTIFICATES_MANAGEMENT_SYSTEM_PLATINUMCERTIFICATE_H
#define A_SAVING_CERTIFICATES_MANAGEMENT_SYSTEM_PLATINUMCERTIFICATE_H


class PlatinumCertificate : public Certificate {
private:

public:
    PlatinumCertificate(CertificateOwner C_O, Date date_purchase, double CertificateAmount);
    bool Withdraw(double withdraw);
    double redeem(Date current_date);
};

#endif //A_SAVING_CERTIFICATES_MANAGEMENT_SYSTEM_PLATINUMCERTIFICATE_H
