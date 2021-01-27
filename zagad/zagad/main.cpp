//
//  main.cpp
//  zagad
//
//  Created by Даниил Зверев on 22.01.2021.
//

#include <iostream>
#include <sstream>
#include <cmath>
#include <math.h>
#include <fstream>
#include <cstring>

using namespace std;

bool isPrime(long long n) {
    for (long long i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

bool findNum(char *num) {
    long long result = 0;
    try
    {
        result = stoll(num);
        if (isPrime(result)) {
            return true;
        }
        else {
            return false;
        }
    }
    catch (const std::out_of_range&)
    {
        cout << "Error occured while running the code\n";
        return false;
    }
}

int main()
{
    ifstream in("e_2mil.txt");
    if (in) {
        cout << "alr" << endl;
        stringstream ss;
        ss << in.rdbuf();
        string main_string = ss.str();
        long long i = 1;
        for (i; i < main_string.length(); i++) {
            char num[11];
            for (long long j = i, k = 0; j < i + 10; j++, k++)
            {
                num[k] = main_string[j];
            }
            num[10] = '\0';
            /*cout << "num: " << num << endl;*/
            if (num[0] != '0') {
                if (findNum(num)) {
                    cout << "First 10-digit prime is: " << num;
                    return 0;
                }
            }
        }
    }
    else {
        cout << "nope";
    }
    cout << "";

}
