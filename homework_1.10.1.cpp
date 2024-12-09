#include <bits/stdc++.h>
using namespace std;



int main() {
    cout<<"размер массива: ";
    int size;
    cin>>size;
    cout<<size<<endl;
    
	int* m = new int[size];
	
	for(int i=0;i<size;i++){
	    cout<<"m["<<i<<"] = ";
	    cin>>m[i];
	    cout<<m[i]<<endl;
	}
	
	cout<<"введёный массив: ";
	for(int i=0;i<size;i++){
	    cout<<m[i]<<" ";
	}
	delete m;
    return 0;
}