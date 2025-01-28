#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double A, B;

    cin >> A >> B;

    cout << setprecision(5) << fixed;
    cout << "MEDIA = " << ((A/10.0*3.5)+(B/10.0*7.5))/11.0*10 << endl;
 
    return 0;
}