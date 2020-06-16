#include <iostream>
#include "CertificateOwner.h"
#include "Date.h"
#include "Certificate.h"
#include "PlatinumCertificate.h"
#include "SilverCertificate.h"
int Certificate :: i = 0;


using namespace std;

int main() {

    Certificate certificat_arr[10];
    int certificat_conter = 0;
    cout << "To create Certificate press 1\nTo view Certificate press 2\n";
    cout << "Your choice : ";
    int num;
    int day, month, year;
    string first_name , last_name;
    string Mobile_phone_number;
    string National_ID_number;
    int Duration;
    double CertificateAmount;
    double CurrentBalance;
    double Annual_interest_rate;
    double Service_charges;
    int Interests_Frequency_monthly;
    while(1){

        cin >> num;
        if(num == 1){
            cout << "Enter your first name : ";
            cin >> first_name;
            cout << "Enter your last name : ";
            cin >> last_name;
            cout << "Enter your Mobile phone number : ";
            cin >> Mobile_phone_number;
            cout << "Enter your National ID number : ";
            cin >> National_ID_number;
            cout << "Enter current day";
            cin >> day;
            cout << "Enter current month";
            cin >> month;
            cout << "Enter current year";
            cin >> year;
            cout << "Enter the Duration between 1 and 5 : ";
            while(1){
                cin >> Duration;
                if(Duration >= 1 && Duration <= 5)
                    break;
                else
                    cout << "Enter number from 1 to 5 : ";
            }
            cout << "Enter Annual interest rate between 0 and 1 : ";
            while(1){
                cin >> Annual_interest_rate;
                if(Annual_interest_rate <= 1 && Annual_interest_rate >= 0)
                    break;
                else
                    cout << "Enter number from 0 to 1 : ";
            }
            cout << "Enter Interests Frequency monthly 1 or 3 or 6 or 12 : ";
            while(1){
                cin >> Interests_Frequency_monthly;
                if(Interests_Frequency_monthly == 1 || Interests_Frequency_monthly == 3 || Interests_Frequency_monthly == 6 || Interests_Frequency_monthly == 12)
                    break;
                else
                    cout << "Enter 1 or 3 or 6 or 12 : ";
            }
            cout << "To create Platinum Certificate press 1\nTo create Silver Certificate press 2\n";
            int cer_num;
            while(1){
                cin >> cer_num;
                if(cer_num == 1){
                    cout << "Enter your certificate amount and it  has a minimum of 5000 EGP and should be multiples of 1000 : ";
                    while(1){
                        cin >> CertificateAmount;
                        if(CertificateAmount >= 5000 && int(CertificateAmount) % 1000 == 0){
                            break;
                        }
                        else if(CertificateAmount < 5000 && int(CertificateAmount) % 1000 != 0){
                            cout << "certificate amount has a minimum of 5000 EGP and should be multiples of 1000 : ";
                        }
                        else if(CertificateAmount < 5000){
                            cout << "certificate amount has a minimum of 5000 EGP : ";
                        }
                        else if(int(CertificateAmount) % 1000 != 0){
                            cout << "certificate amount should be multiples of 1000 : ";
                        }
                    }

                    break;
                }
                else if(cer_num == 2){
                    break;
                } else{
                    cout << "Enter 1 or 2 : ";
                }
            }
            break;
        }
        else if(num == 2){
            cout << "Enter your first name : ";
            cin >> first_name;
            cout << "Enter your last name : ";
            cin >> last_name;
            cout << "Enter your Mobile phone number : ";
            cin >> Mobile_phone_number;
            cout << "Enter your National ID number : ";
            cin >> National_ID_number;
            Certificate temp();
            for(int i = 0 ; i < 10 ; ++i){

            }
            cout << "Enter current day";
            cin >> day;
            cout << "Enter current month";
            cin >> month;
            cout << "Enter current year";
            cin >> year;
            cout << "to calculate interest of the certificate press 1\nto withdraw press 2\n"
                 << "to view current balance and total balance press 3\nto apply charges press 4\n"
                 << "to redeem certificate press 5\nto view owner’s info press 6\nEnter choice";
            int choice;
            while(1){
                cin >> choice;
                if(choice >= 1 && choice < 7)
                    break;
                else
                    cout << "Enter number from 1 : 6 ";
            }
            if(choice == 1){

            }

            break;
        }
        else{
            cout << "Enter 1 or 2 : ";
        }
    }

    return 0;
}
