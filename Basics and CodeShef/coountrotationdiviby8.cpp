// C++ program to count all rotations divisible
// by 8
#include <bits/stdc++.h>
using namespace std;
 
// function to count of all rotations divisible
// by 8
int countRotationsDivBy8(string n)
{
    int len = n.length();
    int count = 0;
 
    // For single digit number
    if (len == 1) {
        int oneDigit = n[0] - '0';
        if (oneDigit % 8 == 0)
            return 1;
        return 0;
    }
 
    // For two-digit numbers (considering all
    // pairs)
    if (len == 2) {
 
        // first pair
        int first = (n[0] - '0') * 10 + (n[1] - '0');
 
        // second pair
        int second = (n[1] - '0') * 10 + (n[0] - '0');
 
        if (first % 8 == 0)
            count++;
        if (second % 8 == 0)
            count++;
        return count;
    }
    
    // considering all three/n-digit sequences
    int threeDigit;
    for (int i = 0; i < (len - 2); i++) {
        threeDigit = (n[i] - '0') * 100 + 
                     (n[i + 1] - '0') * 10 + 
                     (n[i + 2] - '0');
        if (threeDigit % 8 == 0)
            count++;
    }
 
    // Considering the number formed by the 
    // last digit and the first two digits
    threeDigit = (n[len - 1] - '0') * 100 + 
                 (n[0] - '0') * 10 + 
                 (n[1] - '0');
 
    if (threeDigit % 8 == 0)
        count++;
 
    // Considering the number formed by the last 
    // two digits and the first digit
    threeDigit = (n[len - 2] - '0') * 100 +
                 (n[len - 1] - '0') * 10 + 
                 (n[0] - '0');
    if (threeDigit % 8 == 0)
        count++;
 
    // required count of rotations
    return count;
}
    // Driver program to test above
int main()
{
    string n = "8888888";
    cout << "Rotations: "
         << countRotationsDivBy8(n);
    return 0;
}
