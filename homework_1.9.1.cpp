#include <bits/stdc++.h>
using namespace std;

void print(int* n, int size){
    for(int i=0; i<size;i++){
        cout<<n[i]<<" ";
    }
    cout<<endl;
}

int main() {
	int m1[] = {1,2,3};
	int m2[] = {4,5};
    int m3[] = {6};
    print(m1, 3);
    print(m2, 2);
    print(m3, 1);
    
    return 0;
}
