#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    vector<int> numStack;
    string input;
    char *end;
    int temp;
    int num1, num2;
    
    
    while(cin >> input)
    {
        if (input == "+")
        {
            num1 = numStack.back();
            numStack.pop_back();
            num2 = numStack.back();
            numStack.pop_back();
            numStack.push_back(num1 + num2);
        }
        else if (input == "-")
        {
            num2 = numStack.back();
            numStack.pop_back();
            num1 = numStack.back();
            numStack.pop_back();
            numStack.push_back(num1 - num2);
        }
        else if (input == "/")
        {
            num1 = numStack.back();
            numStack.pop_back();
            num2 = numStack.back();
            numStack.pop_back();
            numStack.push_back(num1 / num2);
        }
        else if (input == "*")
        {
            num1 = numStack.back();
            numStack.pop_back();
            num2 = numStack.back();
            numStack.pop_back();
            numStack.push_back(num1 * num2);
        }
        else if (input == ".") {
            break;
        }
        else {
            temp = std::strtol(input.c_str(), &end, 10);
            numStack.push_back(temp);
        }
    }
    
    for (int i = 0; i < numStack.size(); i++) {
        cout << numStack[i] << endl;
    }
    
    return 0;
}
