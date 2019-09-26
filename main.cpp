//Authors:Marko Mihajlovic
#include<iostream>
#include<string>

using namespace std;

int main()
{
        //declare variables
        string first = "";
        string last = "";
        int index;
        string constant;

        int lucky = 0;
        //get user input
        cout<<"What is your first name?\n";
        cin>>first;
        cout<<"What is your last name?\n";
        cin>>last;
        cout<<"Welcome, " <<first[0]<<"."<<last[0]<<"., here is your fortune...\n";
        //tell fortune
        cout<<"your lucky number is "<<first.length()<<endl;

        if(first[0]=='a' || first[0]=='e' || first[0]=='i' || first[0]=='o' || first[0]=='u' || first[0]=='A' || first[0]=='E' || first[0]=='I' || first[0]=='O' || first[0]=='U')
        {        
                cout<<"you are destined to be famous!\n";
        }
        else {
                cout<<"you should keep a low profile."<<endl;
        }
         
                cout<<"have a good day! "<<endl;


        

        
             return 0;
}
