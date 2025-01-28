#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    double A, B, C;
    
    cin >> A >> B >> C;
    
    cout << setprecision (1) << fixed
        << "MEDIA = " 
        << (A / 10.0 * 2) + (B / 10.0 * 3) + (C /10.0 * 5)
        << endl;
        
    return 0;
}