#include <bits/stdc++.h>
using namespace std;

double* creat_array(int size){
    return new double[size]();
}

int main() {
    cout<<"размер массива: ";
    int size;
    cin>>size;
    cout<<size<<endl;
    
    double* mas = creat_array(size);
    
    for(int i=0;i<size;i++){
        cout<<mas[i]<<" ";
    }
	
	delete mas;
	
    return 0;
}