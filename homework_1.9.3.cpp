#include <bits/stdc++.h>
using namespace std;

void print(int* n, int size){
    for(int i=0; i<size;i++){
        cout<<n[i]<<" ";
    }
    cout<<endl;
}

void reverse(int *m, int size){
    int s=size/2;
    int c=0;
    for(int i=0;i<s;i++){
        c=m[size-1-i];
        m[size-1-i]=m[i];
        m[i]=c;
    }
}

int main() {
	int m1[6]={1, 2, 3, 4, 5, 6};
	int m2[7]={1, 2, 3, 4, 5, 6, 7};
	
	cout<<"до reverse: ";
	print(m1,6);
	cout<<"после reverse: ";
	print(m1,6);
	
	cout<<endl;
	
	reverse(m1,6);
	reverse(m2,7);
	
	cout<<"до reverse: ";
	print(m2,7);
	cout<<"после reverse: ";
	print(m2,7);
	
    return 0;
}