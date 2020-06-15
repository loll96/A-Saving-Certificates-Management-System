#include "CertificateOwner.h"
#include <iostream>

using namespace std;


CertificateOwner :: CertificateOwner(){
    this->first_name = "";
    this->last_name = "";
    this->Mobile_phone_number = "";
    this->National_ID_number = "";
}
CertificateOwner :: CertificateOwner(string first_name, string last_name, string Mobile_phone_number, string National_ID_number){
    this->first_name = first_name;
    this->last_name = last_name;
    this->Mobile_phone_number = Mobile_phone_number;
    this->National_ID_number = National_ID_number;

}
void CertificateOwner :: displayInfo(){
    cout << "Full name : " << first_name << " " << last_name << endl
         << "Mobile phone number : " << Mobile_phone_number << endl
         << "National ID number : " << National_ID_number << endl ;
}
