#include <iostream>
#include <math.h>

using namespace std;
double sq;
/**
 * Returns the distance between point `a` and point `b`, where both points are
 * of dimensions specified by `dimensions` and represented as an array of the
 * size specified by `dimensions`.
 */
double distance(int a[], int b[], int dimensions);

/**
 * Returns a string in the point notation format for point `point` which is a
 * point of `dimensions` dimensions. For example, if the array `point` is
 * {10, 20} and `dimensions` is 2, then this function returns the string
 * "(10,20)".
 */
string pointFormat(int point[], int dimensions);
  
int main() {
  int n;
  cout << "Enter number of dimensions: ";
  cin >> n;

  int a[n];
  int b[n];

  for(int i = 0; i < n; i++) {
    cout << "Enter a_" << i+1 << ": ";
    cin >> a[i];
  }

  for(int i = 0; i < n;i++) {
    cout << "Enter b_" << i+1 << ": ";
    cin >> b[i];
  }

  
  cout << "The distance between " << pointFormat(a, n) << " and ";
  cout << pointFormat(b, n) << " is " ;
  distance(a, b, n);
  double now=sq;
  cout << sq << endl;

  return 0;
}


double distance(int a[], int b[], int dimensions) {
double sum;

for (int c=0; c<dimensions;c++){
  double sum=b[c]-a[c];
cout << "sum"<<sum<<'\n';
}
double pw=pow(sum,2);
double together=together+pw;
double sq=sqrt(together);
double distance=sq/dimensions;
return sq;
}

  // TODO(you): Implement this function and remove this comment.
  //return 0.0;



string pointFormat(int point[], int dimensions) {
  string pointText = "(";
  for(int i = 0; i < dimensions; i++) {
    pointText += to_string(point[i]);
    if (i != dimensions - 1) {
      pointText += ",";
    }
  }
  pointText += ")";
  return pointText;
}
