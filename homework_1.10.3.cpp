#include <bits/stdc++.h>
using namespace std;

int** create_two_dim_array(int r, int c){
    
    int** m = new int*[r];
    
    for(int i=0; i<r;i++){
        m[i] = new int[c];
    }
    return m;
}

void fill_two_dim_array(int** m, int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            m[i][j]=(i+1)*(j+1);
        }
    }
}

void print_two_dim_array(int** m, int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

void delete_two_dim_array(int** m, int r, int c){
    for(int i=0;i<r;i++){
        delete[] m[i];
    }
    delete[] m;
}

int main() {
    int r;
    int c;
    
    cout<<"введите кол-во строк: ";
    cin>>r;
    cout<<r<<endl;
    
    cout<<"введите кол-во столбцов: ";
    cin>>c;
    cout<<c<<endl;
    
    cout<<"Таблица умножения:"<<endl;
    
    int** m = create_two_dim_array(r, c);
    fill_two_dim_array(m, r, c);
    print_two_dim_array(m, r, c);
    delete_two_dim_array(m, r, c);
    return 0;
}