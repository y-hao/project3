#include"CoreHamiltonian.h"


int main() {
    cout << "This is CoreHamiltonian" << endl;

    vector< vector<double> > *pVm = new vector< vector<double> >(7, vector<double>(7, 0.));
    vector< vector<double> > *pTm = new vector< vector<double> >(7, vector<double>(7, 0.));
    vector< vector<double> > *pHm = new vector< vector<double> >(7, vector<double>(7, 0.));

    const char* Vfile="V.txt";   
    const char* Tfile="T.txt";   
    initalizeMatrix(pVm);
    readIntegral(Vfile,pVm);
    readIntegral(Tfile,pTm);
    showMatrix(pVm);
    showMatrix(pTm);
    addMatrix(pHm, pTm, pVm);
    showMatrix(pHm);
 
    return 0;
}
