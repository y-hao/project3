#ifndef  GLOBAL
#define GLOBAL
#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdio>
#include<cassert>
#include<vector>
#include<string>
#include<stdlib.h>

using namespace std;

//vector< vector<double> > *pVm = new vector< vector<double> >(7, vector<double>(7, 0.));
//vector< vector<double> > *pTm = new vector< vector<double> >(7, vector<double>(7, 0.));
//vector< vector<double> > *pHc = new vector< vector<double> >(7, vector<double>(7, 0.));
void readIntegral(const char* filename, vector< vector<double> >* pMatrix);
void initalizeMatrix(vector< vector<double> >* pMatrix);
void showMatrix(vector< vector<double> >* pMatrix);
void addMatrix(vector< vector<double> >* pHMatrix, vector< vector<double> >* pMatrix1, vector< vector<double> >* pMatrix2);

#endif
