#include <cmath>
#include <iostream>
using namespace std;
/*
int main() {
    //problem 1

    int intNumber = 24;
    float floatNumber = 3.14;
    double doubleNumber = 45.1234;
    bool boolean = true;
    char charName = 'A';



    cout << "Value of Integer is " << intNumber << ". Size is " << sizeof(intNumber) << endl;
    cout << "Value of Float is " << floatNumber << ". Size is " << sizeof(floatNumber) << endl;
    cout << "Value of Double is " << doubleNumber << ". Size is " << sizeof(doubleNumber) << endl;
    cout << "Value of Char is " << charName << ". Size is " << sizeof(charName) << endl;
    cout << "Value of Bool is " << boolean << ". Size is " << sizeof(boolean) << endl;

    return 0;
}
int main() {
    //problem 2

    string str = "Murodbek Iskandarov";
    string str2 = "Bruno Mars - Die with a smile";
    string str3 = "Avengers, Interstellar";
    int intID = 250309;

    cout << str << endl;
    cout << intID << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    return 0;
}
int main() {
    //problem 3

    cout << "”I’m standing” on the edge of some crazy cliff.\n What I have to do, I have to catch everybody\\ \n if they start to go over the cliff—I mean\\ \n \\if they’re running and they don’t look \n where they’re going I have to come out \n from somewhere and catch \t them" << endl;
    return 0;
}
int main() {
    //problem 4

    int a = 189;
    char b = 'B';

    float val1 = a / 3.0;
    int val2 = int(b);
    float val3 = (a + val2) / 5.0;
    char val4 = char(b + (a / 10 - 1));

    cout << val1 << " " << val2 << " " << val3 << " " << val4 << endl;
    return 0;
}
int main() {
    //problem 5

    int aA = 12;
    int bB = 38;

    int sum = aA + bB;
    int product = aA * bB;

    cout << "Sum=" << sum << endl;
    cout << "Product=" << product << endl;
    return 0;
}
int main() {
    //problem 6

    int value1, value2, result;

    cout << "Enter first value: ";
    cin >> value1;
    cout << "Enter second value: ";
    cin >> value2;

    result = value1 + value2;

    cout << "Sum: " << value1 << " + " << value2 << " = " << result << endl;
    return 0;
}

int main(){
    //problem 7

    int xval, yval;
    float t;
    cout << "Enter  x: ";
    cin >> xval;
    cout << "Enter y: ";
    cin >> yval;
    t = (3 + xval * xval) * 3.0f / (yval / 4.0f + 3);
    cout << "t: " << t << endl;

    return 0;
}

int main() {
    //problem 8

    float diameter;
    cout << "Enter diameter: ";
    cin >> diameter;
    float radius = diameter / 2.0;
    float area = 4 * 3.14 * radius * radius;
    cout << "Area: " << area << endl;
    return 0;
}

int main() {
    //problem 9

    float v0, v1;
    int t;
    cout << "Enter starting v: ";
    cin >> v0;
    cout << "Enter final v: ";
    cin >> v1;
    cout << "Enter time: ";
    cin >> t;
    float avgacc = (v1 - v0) / t;
    cout << "Acceleration: " << avgacc << endl;
    return 0;

}
*/
int main() {
    //problem 10
    float distance, fuelEfficiency, pricePerGallon;
    cout << "Enter distance: ";
    cin >> distance;
    cout << "Enter fuelEfficiency: ";
    cin >> fuelEfficiency;
    cout << "Enter pricePerGallon: ";
    cin >> pricePerGallon;
    float cost = (distance / fuelEfficiency) *pricePerGallon;
    cout << "cost: $" << cost << endl;

}