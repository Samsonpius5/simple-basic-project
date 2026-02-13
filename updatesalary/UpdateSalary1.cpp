#include <iostream>
void updateSalary(double& sal, double percent){

    sal = sal + (sal * percent/100.0);

}

int main(){

    int numEmployes;

    std::cout<<"Enter number of employes: ";
    std::cin>> numEmployes;

    //Create dynamical array

    std::string * names = new std::string[numEmployes];
    double* salary = new double [numEmployes];

    // employies data

    for(int i=0; i<numEmployes; i++){

        std::cout<<"Whats the name of employee "<<i+1<<": ";
        std::cin>>names[i];

        std::cout<<"how much is the salary of employer "<<i+1<<": ";
        std::cin>>salary[i];

    }

    // calculate the input

    double percentage;
    std::cout<<"By how many percentage do you want to increase: ";
    std::cin>> percentage;

    for(int i=0; i<numEmployes; i++){
        updateSalary(salary[i], percentage);
    }

    for (int i=0; i<numEmployes; i++){

        std::cout<<names[i]<<": "<<salary[i];

        if (i < numEmployes - 1) {
            std::cout << " ";

        }
    }

    std::cout<<std::endl;

    delete[] names;
    delete[] salary;

    return 0;
}
