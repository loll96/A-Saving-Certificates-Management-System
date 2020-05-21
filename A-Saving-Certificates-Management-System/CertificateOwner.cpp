#include "CertificateOwner.h"
#include <iostream>

using namespace std;

CertificateOwner :: CertificateOwner(string first_name, string last_name, string Mobile_hone_number, string National_ID_number){
    this->first_name = first_name;
    this->last_name = last_name;
    this->Mobile_hone_number = Mobile_hone_number;
    this->National_ID_number = National_ID_number;

}
void CertificateOwner :: displayInfo(){
    cout << "Full name : " << first_name << " " << last_name << endl
         << "Mobile phone number : " << Mobile_hone_number << endl
         << "National ID number : " << National_ID_number << endl ;
}
