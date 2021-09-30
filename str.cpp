#include <iostream>
#include <algorithm> //used when we need to sort strings
using namespace std;

int main()
{
/* string str1(6,'a');
cout<<str1; */
string str1="Lodu";
string str2="Lalit";
string str3="123";
//str1.append(str2);
//cout<<str1+str2;
/* string str;
getline(cin,str);
cout<<str; */
/* str1.assign(str2);
cout<<str1; */
  //cout<<str1.at(3);
 /* str1.begin();
 str1.end(); */


/* str1.clear();
cout<<str1; */

/* if(str1.compare(str2)) //0 is always false
cout<<"chutiya"; //any other value besides 0 is always considered as true
 */

/* str1.clear();
if(!str1.empty()) //empty function returns boolean value
cout<<"string is empty"; //it returns true if empty otherwise false */

/* 
str1.erase(2,1); 
cout<<str1;
 */

//cout<<str1.find("du"); //returns the index of the starting letter which is being found out

//cout<<str1.insert(2,"ooooo");

//size() and length() are same
/* 
str1.resize(2);
cout<<str1; */

//cout<<str1.substr(0,2);

/* int z=stoi(str3);
cout<<z;  */ //string must contain integral values otherwise it will show error
/* 
int z=123;
string s=to_string(z);
cout<<s+"er"; */ // for a single character we can use single quote

string a="asadefefefaadfrryhg";
sort(a.begin(),a.end()); //can be used only when we declare #include <algorithm>
cout<<a;
sort(a.rbegin(),a.rend()); //can be used only when we declare #include <algorithm> in desecending order
cout<<a;

return 0;
}