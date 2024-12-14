#include <bits/stdc++.h>



using namespace std;

int main()
{
 cout<<"Введите имя: ";

 string name;
 cin>>name;

 cout<<endl<<"Введите фамилию: ";

 string fam;
 cin>>fam;

 name+=" ";
 name+=fam;

 cout<<endl<<"Здравствуйте, "<<name<<"!";

 return 0;

}