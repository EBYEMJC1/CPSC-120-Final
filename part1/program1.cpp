#include<iostream>
using namespace std;

int main(){
string a;
  cout << "Enter a message: ";
  getline(cin,a);
int b=a.length();
string c;
  for(int i=0; i<a.length();i++){
    c.push_back(a.at(i));
  }

  cout << c<<'\n';

  for (int l=0;l<b-1;l++){
    if((a.at(l)!=' ')&& (c.at(l)!=' ')&&(a.at(l)==c.at(l+1))){
      cout << "Characters "  << l << " and " << l+1 << "are the same "<<a.at(l) << '\n';
    }
  }
}
