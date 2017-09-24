#include"CoreHamiltonian.h"

void readIntegral(const char* filename, vector< vector<double> >* pMatrix){

    int i=0;
    int j=0;
    double element=0.;
    
    std::ifstream is(filename);                                                 
    //assert(is.good());
    while(is.good()){
    
      is >> i >> j >> element;
      cout << i << " : " << j << " : " << element << endl;
      (*pMatrix)[i-1][j-1]=element; 

    }

    is.close();
    
    return;
}

void initalizeMatrix(vector< vector<double> >* pMatrix){
    for(unsigned m=0; m<(*pMatrix).size(); m++)        
    {
        for(unsigned n=0; n<(*pMatrix)[m].size(); n++){
            (*pMatrix)[m][n]=0.;
        }
    }

}
    

void showMatrix(vector< vector<double> >* pMatrix){
    for(unsigned m=0; m<(*pMatrix).size(); m++)
    {
        for(unsigned n=0; n<(*pMatrix)[m].size(); n++)
            cout<<(*pMatrix)[m][n]<<" " << setprecision(16) << endl;
    }

}

void addMatrix(vector< vector<double> >* pHMatrix, vector< vector<double> >* pMatrix1, vector< vector<double> >* pMatrix2){
   if((*pMatrix1).size()!=(*pMatrix2).size()){
      cout << "Error! matrix dimensions are not equal!" << endl;
      exit(1);
   }
   else if((*pHMatrix).size()!=(*pMatrix1).size()){
      cout << "Error! Hmatrix dimensions are not equal!" << endl;
      exit(1);  
   }
   else{
      for(unsigned m=0; m<(*pHMatrix).size(); m++)
      {
          for(unsigned n=0; n<(*pHMatrix)[m].size(); n++){
              (*pHMatrix)[m][n]=(*pMatrix1)[m][n]+(*pMatrix2)[m][n];
              cout<<(*pHMatrix)[m][n]<<" " << setprecision(16) << endl;
          }
      }

   }


}
