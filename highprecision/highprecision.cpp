#include <iostream>
#include <string>
using namespace std;

string add(string num1, string num2) {
    // get the first number size and the second number size
    // also set the added result size and the remainder
    int sizea = num1.size(), sizeb = num2.size(), sizec = 1, remainder = 0;
    // a: the first number b: the second number c: the added result
    int a[sizea + 10], b[sizeb + 10], c[sizea + 10];

    // put the number in the array
    for (int i = 0; i <= sizea - 1; i++)
        a[sizea - i] = num1[i] - 48;

    for (int i = 0; i <= sizeb - 1; i++)
        b[sizeb - i] = num2[i] - 48;

    while (sizec <= sizea || sizec <= sizeb)
    {                                               // do the add
        c[sizec] = a[sizec] + b[sizec] + remainder; // add two numbers
        remainder = c[sizec] / 10;                  // get the remainder
        c[sizec] %= 10;                             // cut of the remainder
        sizec++;                                    // add one more size
    }

    if (c[sizec] == 0)
    { // check the highest carry
        sizec--;
    }

    string output;
    for (int i = sizec; i >= 1; i--)
    {
        cout << c[i];
        output += c[i];
    }

    return output;
}

string sub(string num1, string num2) {
    return "...";
}


int main() {
    string a, b;
    cin >> a >> b;
    cout << add(a, b) << endl;
    return 0;
}