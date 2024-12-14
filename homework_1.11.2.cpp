#include <bits/stdc++.h>



using namespace std;

int main()
{
 string zag_slovo="яблоко";
 
 string slovo;
 
 while(slovo!=zag_slovo){
     cout<<endl<<"Угадайте слово: ";
     cin>>slovo;
     if(slovo!=zag_slovo){
         cout<<endl<<"Неправильно";
     }
     else cout<<endl<<"Правильно!";
 }

 return 0;

}