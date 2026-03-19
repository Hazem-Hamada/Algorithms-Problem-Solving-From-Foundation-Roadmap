#include <iostream>
using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

float readNumber(string message) {
    float number = 0;
    cout << message << endl;
    cin >> number;
    return number;
}

enOperationType readOpType() {
    char OT = '+';
    cout << "Enter Operation type [ + , - , * , / ] ? \n";
    cin >> OT;
    return (enOperationType)OT;
}

float calclute(float num1, float num2, enOperationType OpType) {
    switch (OpType)
    {
    case enOperationType::Add:
        return num1 + num2;
    case enOperationType::Subtract:
        return num1 - num2;
    case enOperationType::Multiply:
        return num1 * num2;
    case enOperationType::Divide:
        return num1 / num2;
    default:
        return num1 + num2;
    }
}

int main() {

    float number1 = readNumber("Enter first number : \n");
    float number2 = readNumber("Enter second number : \n");

    enOperationType opType = readOpType();

    cout << "Result = " << calclute(number1, number2, opType);

    return 0;
}
