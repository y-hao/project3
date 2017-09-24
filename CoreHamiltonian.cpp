#include"CoreHamiltonian.h"


int main() {
    cout << "This is CoreHamiltonian" << endl;

    vector< vector<double> > *pVm = new vector< vector<double> >(7, vector<double>(7, 0.));
    vector< vector<double> > *pTm = new vector< vector<double> >(7, vector<double>(7, 0.));
    vector< vector<double> > *pHc = new vector< vector<double> >(7, vector<double>(7, 0.));

    const char* Vfile="V.txt";   
    const char* Tfile="T.txt";   
    readIntegral(Vfile,pVm);
    readIntegral(Tfile,pTm);
    showMatrix(pVm);
 
    return 0;
}
