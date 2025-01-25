#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main() {

    unsigned long 
		niNum1, 
		niNum2;

	bitset<32>
		bitNum1,
		bitNum2;

	while ((cin >> niNum1) && (cin >> niNum2))
	{ 
        int 
            nCont = 0,
            nTest = pow(2, 4);
        if ((niNum1 < nTest) && (niNum2 < nTest)) nCont = 4;
        else {
            nTest = pow(2, 8);
            if ((niNum1 < nTest) && (niNum2 < nTest)) nCont = 8;
            else {
                nTest = pow(2, 12);
                if ((niNum1 < nTest) && (niNum2 < nTest)) nCont = 12;
                else {
                    nTest = pow(2, 16);
                    if ((niNum1 < nTest) && (niNum2 < nTest))  nCont = 16;
                    else {
                        nTest = pow(2, 20);
                        if ((niNum1 < nTest) && (niNum2 < nTest))  nCont = 20;
                        else { 
                            nTest = pow(2, 24);
                            if ((niNum1 < nTest) && (niNum2 < nTest))  nCont = 24;
                        else { 
                            nTest = pow(2, 28);
                            if ((niNum1 < nTest) && (niNum2 < nTest))  nCont = 28;
                            else nCont = 32;
                            }
                        }
                    }
                }
            }
        }

		bitNum1 = niNum1;
		bitNum2 = niNum2;

		for (int I = 0; I < nCont; I++)
		{
			if (bitNum1[I] == bitNum2[I])
				bitNum1[I] = 0;
			else
				bitNum1[I] = 1;
		}
		
		cout << bitNum1.to_ulong() << '\n';
	}

    return 0;
}