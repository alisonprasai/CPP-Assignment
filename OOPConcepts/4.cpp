/*Write a C++ program to create a class called Triangle that has private member
variables for the lengths of its three sides. Implement member functions to
determine if the triangle is equilateral, isosceles, or scalene.*/

#include<iostream>

using namespace std;

class Triangle{

private:
    int side1;
    int side2;
    int side3;

public:
    Triangle(int side1, int side2, int side3){

        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
    }

    string triangleCheck(){

        if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
            return "Not a valid triangle";
        }

        if(side1 == side2 && side1 == side3){
            return "Equilateral Triangle";
        }
        else if(side1 == side2 || side2 == side3 || side1 == side3){
            return "Isoceles Triangle";
        }
        else{
            return "Scalene Triangle";
        }

        }
    

    void triangleType(){
        cout << "The triangle is: " << triangleCheck() << endl;
    }

};

int main() {
    int side1, side2, side3;

    cout << "Enter the lengths of the three sides of the triangle:" << endl;
    cout << "First Side: ";
    cin >> side1;
    cout << "Second Side: ";
    cin >> side2;
    cout << "Third Side: ";
    cin >> side3;

    Triangle triangle(side1, side2, side3);

    triangle.triangleType();

}