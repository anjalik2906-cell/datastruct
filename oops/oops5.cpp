#include<iostream>
#include<vector>
using namespace std;
int main() {
  vector<double>readings{18.5,19.0,20.0};
  for(auto value:readings)
  cout<<value<<'\n';
  vector<int>marks{60,70,80};
  for(auto mark:marks)
  mark+=5;
  vector<string> names{"Asha","Kabir","Meera"};
  for(const auto& name:names)
  cout<<name<<'\n';
  int matrix[2][3]={{1,2,3},{4,5,6}};
  for(const auto& row: matrix)
  {
    for(auto value:row)
    cout<<value<<' ';
    cout<<'\n';
  }


  return 0;
}