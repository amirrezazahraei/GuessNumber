#include <iostream>
#include "random.h"
#include "constants.h"

void deleteLine(){
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void synError(){
    std::cout<<"error, input is not supported.\n";
    std::cin.clear();
    deleteLine();
}

int getNumber(){

    int number{};

    while (true){

        std::cout<<"please enter a number bettween "<<
        cons::MinNumber<<" and "<<cons::MaxNumber<<":\n";
        std::cin>>number;

        if (!std::cin){
            synError();  
        }
        else if(number>cons::MaxNumber || number<cons::MinNumber){
            std::cout<<"the number is out of the bounds.\n";
        }else{
            return number;
            deleteLine();
        }              
    }
}

bool check(int number, int originalNumber){

    if(number>originalNumber){
        std::cout<<"the number is high.\n";
        return false;

    }else if(number < originalNumber){
        std::cout<<"the number is low.\n";
        return false;

    }else if(number == originalNumber){
        std::cout<<"you won."<<std::endl;
        return true;
    }

}

bool isContinue(){}

int main(){

    return 0;
}