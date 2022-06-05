#include<string>
#include<iostream>
using namespace std;
void myFunction(){ //void functions have no return value
    cout << "I just got executed!";
}
void parameterFunction(string names){
    cout << names <<" Is here!";
}
void multipleArguments(string names, int age){
    cout << names << "Is " << age << " Years old";
}
int main(){ 
    multipleArguments("Your Mom", 14);
    return 0;
}
int sum(int x, int y){
    int num1 = x;
    int num2 = y;
    double sums = num1 + num2;
    return sums;
}
