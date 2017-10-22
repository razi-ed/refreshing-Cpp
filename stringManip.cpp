int main()
{
string s1 = "string1";
string s2 = "string2";
string s3 = "string3";
string s4 = "string4";
string s5 = "string5";
string s6 = "string";
string s8 = "string";
string s7;

cout<<s1+s2<<endl;
cout << "size of s3"<<s3.size()<<endl;

cout << "is empty s4 :" << s4.empty()<<endl;
cout << s4.append(s5)<<endl;

s7=s5.assign(s5);
cout<<s7<<endl;

string substr = s5.assign(s5,0,3);
cout << substr<<endl;

int RsIndex = s5.find("r",0);
cout<< "find :"<< RsIndex<<endl;

string name = "R";
name.insert(1, "azi");
cout<<"inserted : "<<name<<endl;

name.insert(4,"M.Aasdf");

name.erase(4,7);
cout<<"erased : "<<name<<endl;

name.replace(4,2," Rasheed");
cout<<"replaced : "<<name<<endl;

}

