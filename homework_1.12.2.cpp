#include <bits/stdc++.h>



using namespace std;

int main()
{
 int s;
 ifstream fin ("H:\\CodeBlocks\\in.txt");
 fin>>s;
 int *a = new int[s];
 int n=s;
 while((fin.eof())!=1){
        for(int i=0; i<n;i++){
            fin>>s;
            a[i]=s;
        }
 }
for(int i=n-1;i>=0;i--){
    cout<<a[i]<<" ";
}
fin.close();
delete[] a;

 return 0;
}
