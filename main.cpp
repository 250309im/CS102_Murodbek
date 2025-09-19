#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //problem 12
    int side1, side2, side3;
    cout << "Enter side 1: ";
    cin >> side1;
    cout << "Enter side 2: ";
    cin >> side2;
    cout << "Enter side 3: ";
    cin >> side3;
    if (side1 + side2 + side3 == 180) {
        if ( side1 != 0 and side2 != 0 and side3 != 0) {
            cout << "The triangle is valid" << endl;
        }else {
            cout << "The triangle is not valid" << endl;
        }
    }
    else {
        cout << "The triangle is not valid" << endl;
    }
    return 0;
}

int main() {
    //problem 13
    double a, b, c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    double discriminant = b*b - 4*a*c;
    if(discriminant < 0) {
        cout<<"No solution";
    }
    else if(discriminant == 0) {
        double root = -b / (2*a);
        cout<<"There are 1 real root: "<<endl;
        cout<<"Root= "<<root <<endl;
    }
    else if(discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);
        cout<<"There are 2 real roots: "<<endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }

    return 0;
}

int main() {
    //problem 14
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    if (letter >= 65 && letter <= 90) {
        cout << "Uppercase alphabet." << endl;
    }
    else if (letter >= 97 && letter <= 122) {
        cout << "Lowercase alphabet." << endl;
    }
    else {
        cout << "It is not an alphabet." << endl;
    }
    return 0;
}

int main() {
    //problem 15
    double weight1, price1, weight2, price2;

    cout << "Enter weight and price for package 1: ";
    cin >> weight1 >> price1;

    cout << "Enter weight and price for package 2: ";
    cin >> weight2 >> price2;
    double unitPrice1 = price1 / weight1;
    double unitPrice2 = price2 / weight2;
    if (unitPrice1 < unitPrice2) {
        cout << "Package 1 has better price." << endl;
    }
    else if (unitPrice1 > unitPrice2) {
        cout << "Package 2 has better price." << endl;
    }
    else {
        cout << "Package 1 and 2 have same price." << endl;
    }
    return 0;
}

int main() {
    //problem 16
    int number;
    cout << "Enter a 3 digit number: ";
    cin >> number;
    int firstDigit = number / 100;
    int lastDigit = number % 10;
    if (firstDigit == lastDigit) {
        cout << number << " is a palindrome" << endl;
    }
    else {
        cout << number << " is not a palindrome" << endl;
    }
}

int main() {
    //problem 17
    char choice;
    cout << "Choose a language to be greeted in:" << endl;
    cout << "u - Uzbek" << endl;
    cout << "e - English" << endl;
    cout << "r - Russian" << endl;
    cout << "g - German" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 'u') {
        cout << "Assalomu alaykum" << endl;
    }
    else if (choice == 'e') {
        cout << "Hello" << endl;
    }
    else if (choice == 'r') {
        cout << "Привет" << endl;
    }
    else if (choice == 'g') {
        cout << "Hallo" << endl;
    }
    else {
        cout << "I don't know this language" << endl;
    }
    return 0;
}
int main() {
    //problem 18
    double x, y;
    cout << "Enter x-coordinate: ";
    cin >> x;
    cout << "Enter y-coordinate: ";
    cin >> y;
    double distance = sqrt(x*x + y*y);
    if (distance < 10) {
        cout << "The point (" << x << ", " << y << ") is in the circle" << endl;
    }
    else {
        cout << "The point (" << x << ", " << y << ") is out of the circle" << endl;
    }
    return 0;
}

int main() {
    // problem no number
    float gpa;
    cout << "Enter GPA (0.0 - 4.5): ";
    cin >> gpa;
    if (gpa <=4.5 && gpa >=4.0) {
        cout << "You got 80% scholarship" << endl;
    }
    else if (gpa < 4.0 && gpa >= 3.5) {
        cout << "You got 60% scholarship" << endl;
    }
    else if (gpa < 3.5 && gpa >= 3.0) {
        cout << "You got 50% scholarship" << endl;
    }
    else if (gpa < 3.0 && gpa >= 0.0) {
        cout << "You got no scholarship" << endl;
    }
    else {
        cout << "Invalid GPA entered" << endl;
    }
    return 0;
}

int main() {
    //problem 19
    int today, elapsedDays;
    cout << "Enter today's day (0 for Sunday, 1 for Monday, ..., 6 for Saturday): ";
    cin >> today;
    cout << "Enter the number of days elapsed since today: ";
    cin >> elapsedDays;
    int futureDay = (today + elapsedDays) % 7;
    cout << "Today is ";
    switch (today) {
        case 0: cout << "Sunday"; break;
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        default: cout << "Invalid day"; return 1;
    }
    cout << " and the future day is ";
    switch (futureDay) {
        case 0: cout << "Sunday"; break;
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
    }
    return 0;
}

int main() {
    //problem 20v1
    float weight;
    cout << "Enter the weight of the package (in kg): ";
    cin >> weight;

    if (weight < 0) {
        cout << "Invalid input." << endl;
    }
    else if (weight <= 1) {
        cout << "Shipping cost: 3500" << endl;
    } else if (weight <= 3) {
        cout << "Shipping cost: 5500" << endl;
    } else if (weight <= 10) {
        cout << "Shipping cost: 8500" << endl;
    } else if (weight <= 20) {
        cout << "Shipping cost: 10500" << endl;
    } else {
        cout << "The package cannot be shipped." << endl;
    }

    return 0;
}

int main() {
    //problem 20v2
    float weight;
    cout << "Enter the weight of the package (in kg): ";
    cin >> weight;
    if (weight <= 0) {
        cout << "Invalid input." << endl;
    } else {
        int weightCategory;
        if (weight <= 1) {
            weightCategory = 1;
        } else if (weight <= 3) {
            weightCategory = 2;
        } else if (weight <= 10) {
            weightCategory = 3;
        } else if (weight <= 20) {
            weightCategory = 4;
        } else {
            weightCategory = 5;
        }
        switch(weightCategory) {
            case 1: cout << "Shipping cost: 3500" << endl; break;
            case 2: cout << "Shipping cost: 5500" << endl; break;
            case 3: cout << "Shipping cost: 8500" << endl; break;
            case 4: cout << "Shipping cost: 10500" << endl; break;
            case 5: cout << "The package cannot be shipped." << endl; break;
        }
    }

    return 0;
}

int main() {
    //problem 21
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;
    switch(month) {
        case 1:
            cout << "In January there is:\n- New Year's Day, 1 January" << endl;
            break;
        case 2:
        case 4:
        case 6:
        case 7:
        case 8:
        case 11:
            cout << "In this month, there are no fixed-date holidays." << endl;
            cout << "There may be Ramadan Hayit or Kurban Hayit, but their dates change every year." << endl;
            break;
        case 3:
            cout << "In March there is:\n- International Women's Day, 8 March\n- Navruz, 21 March" << endl;
            break;
        case 5:
            cout << "In May there is:\n- Memorial Day, 9 May" << endl;
            break;
        case 9:
            cout << "In September there is: \n - National Independence Day, 1 September" << endl;
            break;
        case 10:
            cout << "In October there is:\n- Teachers' Day, 1 October" << endl;
            break;
        case 12:
            cout << "In December there is:\n- Constitution Day, 8 December" << endl;
            break;
        default:
            cout << "Invalid month number." << endl;
            break;
    }
    return 0;
}
