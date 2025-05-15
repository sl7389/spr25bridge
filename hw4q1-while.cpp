#include <iostream>

int main(){
    int n;
    int even;
    int counter;
    std::cout<<"please enter a positive integer: ";
    std::cin>>n;
    counter = 1;
    while (counter<=n){
        std::cout<<2*counter<<std::endl;
        counter++;
    }
    
    
    
    return 0;
    
}