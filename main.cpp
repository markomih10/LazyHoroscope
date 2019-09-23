//Authors:Marko Mihajlovic
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first = "";
  string last = "";
  //get user input
  cout<<"What is your first name?\n";
  cin>>first;
  cout<<"What is your last name?\n";
  cin>>last;
  cout<<"Welcome," <<first[0]<<", "<<last[0]<<" .,here is your fortune...";
  //tell fortune

  return 0;
}
