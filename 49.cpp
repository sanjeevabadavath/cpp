#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s1,s2,s3,s4;
int x;
s1="fam";
s2="ily";
//s1.append(s2);
//cout<<s1;
cout<<s1+s2<<endl;
cout<<s1[1]<<endl;
s1.clear();
cout<<s1+s2<<endl;
s3="sanjeeva is a bad good boy";
s3.erase(14,3);
cout<<s3<<endl;
cout<<s3.find("eeva");
s3.insert( 14,"intelligent");
cout<<s3<<endl;
cout<<s2.size()<<endl;
cout<<s3.substr( 2,4)<<endl;//substring 
s4="1234";
 x=stoi(s4);// string to integer
cout<<x+2<<endl;
 string s5=to_string(x);//integer to string
cout<<s5+"22"<<endl;
sort(s3.begin(),s3.end());
cout<<s3<<endl;
string str;
cin>>str;
cout<< str<<endl;
string s7;
getline(cin,s7);
cout<<s7;
return 0;
}

