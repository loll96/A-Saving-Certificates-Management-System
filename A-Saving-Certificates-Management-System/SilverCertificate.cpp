#include <iostream>
#include "Certificate.h"
using namespace std;

#include "SilverCertificate.h"

SilverCertificate :: SilverCertificate(CertificateOwner C_O, Date date_purchase, double CertificateAmount){
    this->owner = C_O;
    this->date_purchase = date_purchase;
    this->CertificateAmount = CertificateAmount;
    this->Duration = 12;
    this->Annual_interest_rate = 0.13;
    this->Interests_Frequency_monthly = 3;
    /*
     Constructor: Accepts arguments for certificate owner, date of purchase, and certificate amount. The
     certificate amount has a minimum of 1000 EGP and should be multiples of 1000. The duration of this certificate
     is 1 year, the annual interest rate is 13% and the interests frequency is quarterly.
    */
}
bool SilverCertificate :: Withdraw(double withdraw){
    if(withdraw >= 500)
        return true;
    return false;
}

double SilverCertificate :: redeem(Date current_date){
    /*
    The function takes the current date as a parameter and returns the total of the certificate amount and
    current balance.
    The function first calculates the difference between the date of purchase and the current date.
    If the difference is greater than 6 months then the base redeem method is called and its return value is
    returned. If the duration is less than 6 months then deduct an amount of 0.5% of the certificate amount for each
    month of the date difference. Then call the base redeem method.

    */
}