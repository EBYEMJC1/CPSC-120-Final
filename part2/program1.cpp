#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int dimension;
  cout << "Enter number of dimensions: ";
  cin >> dimension;
  int a_1[dimension];
  int b_1[dimension];
  double sum;
  double together=0;
  double sq;
  double pw;
  double distance;
  string n;

  for(int i=0;i<dimension;i++){
    cout<<"enter a_" << i+1<<' ';
    cin >> a_1[i];
  }
  for (int j=0;j<dimension;j++){
    cout<<"enter b_" << j+1<<' ';
    cin >> b_1[j];
  }

  for (int a=0; a<dimension;a++){
    sum=b_1[a]-a_1[a];

  }
  pw=pow(sum,2);
  together=together+pw;
  sq=sqrt(together);
  distance=sq/dimension;
  cout<< "Distance is " << sq << '\n';
}
