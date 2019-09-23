//Authors:Marko Mihajlovic
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first = "";
  string last = "";
  int lucky = 0;
  //get user input
  cout<<"What is your first name?\n";
  cin>>first;
  cout<<"What is your last name?\n";
  cin>>last;
  cout<<"Welcome," <<first[0]<<", "<<last[0]<<" .,here is your fortune...";
  //tell fortune
  cout<<"Your lucky number is "<<first.length()<<".";
  return 0;
}
