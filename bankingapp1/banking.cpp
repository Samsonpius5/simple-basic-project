#include <iostream>
#include<iomanip>

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance=123.01;
    int choice = 0;

do{
    std::cout<<"1. Show balance: "<<"\n";
    std::cout<<"2. deposit: "<<"\n";
    std::cout<<"3. withdraw: "<<"\n";
    std::cout<<"4. Exit: "<<"\n";
    std::cout<<"Enter your choice: ";
    std::cin>> choice;

    std::cin.clear();
    fflush(stdin);

    switch (choice){
        case 1: showbalance(balance);
        break;
        case 2: balance+= deposit();
                showbalance(balance);
        break;
        case 3: balance-= withdraw(balance);
                showbalance(balance);
        break;
        case 4: std::cout<<"Thanks for visiting"<<"\n";
        break;
        default: std::cout<<"invalid choice"<<"\n";
    }

}while(choice!= 4);

    return 0;
}

    void showbalance(double balance){
        std::cout<<"your balance is: $"<<std::setprecision(2)<<std::fixed<<balance<<"\n";

    }
double deposit(){
        double amount=0;
        std::cout<<"How much do you want to deposit: ";
        std::cin>> amount;

        if (amount>0){
        return amount;
        }else{
            std::cout<<"Not a valid amount input: "<<"\n";
            return 0;
        }
    }
    double withdraw(double balance){
        double amount=0;
        std::cout<<"How much do you want to withdraw: ";
        std::cin>> amount;

        if (amount>balance){
            std::cout<<"insufficient amount: "<<"\n";

        return 0;
        }
        else if(amount<0){
            std::cout<<"Not a valid Amount input: "<<"\n";
            return 0;
        }else{
        return amount;
        }
    }







