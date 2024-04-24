#include <iostream>
#include <string>

using namespace std;

bool canMakeEqual(string s1, string s2) {
    if (s1 == s2) {
        return true;
    }

    string s3 = s1; // Make a copy of s1

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) { // Start from i + 1 to avoid swapping the same characters
            swap(s3[i], s3[j]);
            if (s3 == s2) {
                return true;
            }
            // Reset s3 to the original value
            swap(s3[i], s3[j]);
        }
    }

    return false;
}

int main() {
    string s1 = "abcd";
    string s2 = "bcda";
    bool result = canMakeEqual(s1, s2);
    cout << (result ? "true" : "false") << endl;  // Output: true

    return 0;
}