#include <iostream>
#include <cmath>

using namespace std;
    int main(){

        //define variable
        string operation;
        double x,y;
        double result;

        cout<<"Enter first number: ";
        cin>> x;

        cout<<"Enter operation(x,+,-, /): ";
        cin>> operation;

        cout<<"Enter second number: ";
        cin>>y;

        if(operation == "+"){
             result = x+y;
            std::cout<<"The answer is: "<<result;
        }

        else if(operation =="*"){

            result = x*y;
            std::cout<<"The answer is: "<<result;

        }else if(operation=="/"){
            result = x/y;
            std::cout<<"The answer is: "<<result;
        }else if(operation == "-"){
            result =x-y;
            std::cout<<"The answer is: "<<result;
        }
        else{
            std::cout<<"not a recognise operation";
        }













        return 0;
    }