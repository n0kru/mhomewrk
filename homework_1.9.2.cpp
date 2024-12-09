#include <bits/stdc++.h>

namespace my {
    void swap(int &a, int &b){
        int c=a;
        a=b;
        b=c;
    }
}



int main() {
	int a;
    int b;

    std::cin>>a>>b;
    
    std::cout<<a<<" "<<b<<std::endl;

    int* n=&a;
    int* m=&b;
    
    my::swap(a, b);
    
    std::cout<<a<<" "<<b<<std::endl;
    
    return 0;
}
