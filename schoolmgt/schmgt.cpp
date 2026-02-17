#include <iostream>
#include <string>
#include <limits>
class Student{
    private:
        std::string name;
        int age;
        int grade;

    public:
        std::string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        int getGrade(){
            return grade;
        }

        void setName(std::string studentName){
            name = studentName;
        }

        void setAge(int studentage){
            age= studentage;
        }
        void setGrade(int studentgrade){
            grade=studentgrade;
        }

        void displayinfo(){
            std::cout<<"======student Info========"<<"\n";
            std::cout<<"name of stdent: "<<name<<"\n";
            std::cout<<"age of student: "<<age<<"\n";
            std::cout<<"grade of student: "<<"grade "<<grade<<"\n";

        }
};

    int main(){

    Student student1, student2,student3;
        int age;
        int grade;
        std::string name;

    //student1

    std::cout<<"Enter your name: ";
    std::getline(std::cin, name);
    student1.setName(name);
    


    std::cout<< "Enter your age: ";
    std::cin>> age;
    student1.setAge(age);
    

    std::cout<< "Enter your grade: ";
    std::cin>>grade;
    student1.setGrade(grade);
    

    //student 2
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout<<"Enter your name: ";
    std::getline(std::cin, name);
    student2.setName(name);


    std::cout<< "Enter your age: ";
    std::cin>> age;
    student2.setAge(age);

    std::cout<< "Enter your grade: ";
    std::cin>>grade;
    student2.setGrade(grade);

    //student 3

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout<<"Enter your name: ";
    std::getline(std::cin, name);
    student3.setName(name);


    std::cout<< "Enter your age: ";
    std::cin>> age;
    student3.setAge(age);

    std::cout<< "Enter your grade: ";
    std::cin>>grade;
    student3.setGrade(grade);

    student1.displayinfo();
    student2.displayinfo();
    student3.displayinfo();





            return 0;
        }




