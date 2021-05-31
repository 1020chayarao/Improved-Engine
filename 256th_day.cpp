
//day of a programmer hacckerrank
#include <bits/stdc++.h>

using namespace std;


string dayOfProgrammer(int year) {
    int d = 13;
    if(!(year%4) && (year < 1918 || year%100 || !(year%400)))
      d--;
    if(year == 1918) 
      d = 26;
    return to_string(d) + ".09." + to_string(year);

}

int main(){
  
  int year;
  cout<<"enter year"<<endl;
  cin>>year;
  
  cout<<"256th day of year:"<<dayOfProgrammer(year);
  
  return;
}
  
  
