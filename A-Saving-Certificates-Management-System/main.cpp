#include <iostream>
#include "CertificateOwner.h"
#include "Date.h"

using namespace std;

int main() {
    string a, b, c,d;
    cin >> a >> b >> c >> d;
    CertificateOwner cc(a,b,c,d);
    cc.displayInfo();

    return 0;
}
