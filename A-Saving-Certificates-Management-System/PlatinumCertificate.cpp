#include <iostream>
#include "Certificate.h"
using namespace std;
#include "PlatinumCertificate.h"

PlatinumCertificate :: PlatinumCertificate(CertificateOwner C_O, Date date_purchase, double CertificateAmount){
    this->owner = C_O;
    this->date_purchase = date_purchase;
    this->CertificateAmount = CertificateAmount;
    this->Duration = 3*12;
    this->Annual_interest_rate = 0.15;
    this->Interests_Frequency_monthly = 1;
    /*
  //Constructor: Accepts arguments for certificate owner, date of purchase, and certificate amount.
  ------------The certificate amount has a minimum of 5000 EGP and should be multiples of 1000.
  The duration of this certificate is 3 years, the annual interest rate is 15% and the interests frequency is monthly.
 */
}

bool PlatinumCertificate :: Withdraw(double withdraw){
    if(withdraw >= 1000)
        return true;
    return false;
}

double PlatinumCertificate :: redeem(Date current_date){
    Date d = this->date_purchase - current_date;
    if(d / 1 > 6){
        return Certificate :: redeem();
    }
    if(this->Duration < 12){
        this->CertificateAmount -= double(d/1) * (1.0/100.1) * this->CertificateAmount;
    }
    return Certificate :: redeem();
    /*
    redeem: The function takes the current date as a parameter and returns the total of the certificate amount and
    current balance.
    The function first calculates the difference between the date of purchase and the current date.

    If the difference is greater than 6 months then the base redeem method is called and its return value is
    returned. If the duration is less than 1 year then deduct an amount of 1% of the certificate amount for each
    month of the date difference. Then call the base redeem method.
    */
}
