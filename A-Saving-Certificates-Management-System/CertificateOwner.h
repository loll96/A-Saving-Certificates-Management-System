#ifndef A_SAVING_CERTIFICATES_MANAGEMENT_SYSTEM_CERTIFICATEOWNER_H
#define A_SAVING_CERTIFICATES_MANAGEMENT_SYSTEM_CERTIFICATEOWNER_H
#include <iostream>

using namespace std;


class CertificateOwner {
private:
    string first_name , last_name;
    string Mobile_phone_number;
    string National_ID_number;
public:
    CertificateOwner();
    CertificateOwner(string first_name, string last_name, string Mobile_phone_number, string National_ID_number);
    void displayInfo();
};


#endif //A_SAVING_CERTIFICATES_MANAGEMENT_SYSTEM_CERTIFICATEOWNER_H
