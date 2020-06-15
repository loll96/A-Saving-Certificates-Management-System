
#include "Certificate.h"
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

Certificate::Certificate() {}
Certificate :: Certificate(CertificateOwner C_O, Date date_purchase, int Duration, double CertificateAmount, double Annual_interest_rate, int Interests_Frequency_monthly){
    this->owner = C_O;
    this->date_purchase = date_purchase;
    this->Duration = Duration;
    this->CertificateAmount = CertificateAmount;
    this->Annual_interest_rate = Annual_interest_rate;
    this->Interests_Frequency_monthly = Interests_Frequency_monthly;
}
bool Certificate :: Withdraw(double withdraw){
    if(withdraw <= this->CurrentBalance){
        this->CurrentBalance -= withdraw;
        return true;
    }
    return false;
}
double Certificate :: viewCurrentBalance(){
    return this->CurrentBalance;
}
double Certificate :: viewTotalBalance(){
    return this->CurrentBalance + this->CertificateAmount;
}
void Certificate :: calcInt(Date current_date){
    Date Date_difference = this->Date_of_last_interest - current_date ;
    int number_of_quarters_in_date_difference = Date_difference / 3;
    double Quarter_interest_rate= this->Annual_interest_rate/ 4;
    double Quarter_interest = this->CertificateAmount * Quarter_interest_rate;
    this->CurrentBalance = number_of_quarters_in_date_difference * Quarter_interest;
}
void Certificate :: applyCharges(int service_charges){
    this->CurrentBalance -= Service_charges;
}

string Certificate :: issueCreditCard(){
    applyCharges(150);
    int i = 0;
    ostringstream result;
    result << "1436-6451-9638-" << setfill('0') << setw(4) << i;
    return result.str();
}
double Certificate :: redeem(){
    return this->CertificateAmount + this->CurrentBalance;
}
void Certificate :: displayOwnerInfo(CertificateOwner Owner){
    Owner.displayInfo();
    cout << "date of purchase : " ;
    date_purchase.display();
    //Date Date_of_last_interest;
    cout << "duration : " << this->Duration;
    cout << "Certificate Amount : " << this->CertificateAmount;
    cout << "Current Balance : " << this->CurrentBalance;
    cout << "Annual interest rate : " << this->Annual_interest_rate;
    cout << " the serial number : " << this->issueCreditCard();
}




