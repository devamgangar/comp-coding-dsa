#include <bits/stdc++.h>// includes all libraries
using namespace std; //to avoid std!

int main() {
    //output 
    
	cout<<"hey"<<"\n"; //yes u gotta give the colons
	cout<<"hey"<<endl; //this works too

//input
 int x,y;
 cin>>x>>y;//imagine cin se value tune x pai daaldi
 cout<<x<<y<<endl;

//strings!
string s,s1;  // damn u dont specify the size of string!
cin>>s>>s1;
cout<<s<<s1<<endl;

//if u wanna take spaces too
string str;
getline(cin,str);
cout<<str;

//length of string:
string str="hey";
int len=str.size();
cout<<len;
}
