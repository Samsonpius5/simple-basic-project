#include <iostream>
int main() {
    int n;
    std::cout<<"How many ticket do you want: ";
    std::cin>> n;

    int *ticket = new int [n];

    for(int i=0; i<n; i++){
        std::cout<<"Enter number "<<i + 1<<": ";
        std::cin>>ticket[i];

    }
    std::cout<<"Your ticket numbers are: ";
    for(int i=0; i<n; i++){

        std::cout<<ticket[i]<<" ";

    }

    std::cout<<std::endl;

    delete ticket;


    return 0;
}