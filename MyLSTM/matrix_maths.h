#pragma once
#include "general_settings.h"

using namespace std;
using namespace cv;

double Reciprocal(const double &);
Mat Reciprocal(const Mat &);
Mat sigmoid(const Mat &);
Mat dsigmoid_a(const Mat &);
Mat dsigmoid(const Mat &);
Mat ReLU(const Mat&);
Mat dReLU(const Mat&);
Mat Tanh(const Mat &);
Mat dTanh(const Mat &);
Mat nonLinearity(const Mat &, int);
Mat dnonLinearity(const Mat &, int);
// Mimic rot90() in Matlab/GNU Octave.
Mat rot90(const Mat &, int);
// get KroneckerProduct 
// for upsample
// see function kron() in Matlab/Octave
Mat kron(const Mat&, const Mat&);
Mat getBernoulliMatrix(int, int, double);

// Follows are OpenCV maths
Mat exp(const Mat&);
Mat div(double, const Mat&);
Mat log(const Mat&);
Mat reduce(const Mat&, int, int);
Mat divide(const Mat&, const Mat&);
Mat pow(const Mat&, double);
double sum1(const Mat&);
double max(const Mat&);
double min(const Mat&);