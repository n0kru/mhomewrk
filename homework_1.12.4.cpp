#include <bits/stdc++.h>

using namespace std;

int main()
{
 int s;
 ifstream fin ("H:\\CodeBlocks\\in.txt");
 int n,m;
 fin>>s;
 n=s;

 fin>>s;
 m=s;

 int a[n][m];

 while(fin.eof()!=1){
    for(int i=0; i<n;i++){
        for(int j=m-1;j>=0;j--){
            fin>>s;
            a[i][j]=s;
        }
    }
 }

 for(int i=0; i<n;i++){
    for(int j=0;j<m;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}

 return 0;
}