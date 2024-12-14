#include <bits/stdc++.h>



using namespace std;

int main()
{
 int n;
 ofstream fout ("H:\\CodeBlocks\\out.txt");

 cout<<"Введите размер массива: ";
 cin>>n;
 int a[n];

 for(int i=0;i<n;i++){
    cout<<endl<<"arr["<<i<<"] = ";
    cin>>a[i];
 }

 fout<<n<<endl;
 for(int i=n-1; i>=0;i--){
    fout<<a[i]<<" ";
 }

 fout.close();
 return 0;
}
