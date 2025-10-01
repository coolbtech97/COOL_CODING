// Creating a simple C++ program to demonstrate basic syntax
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

// Function to check if a string is palindrome
bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;
    
    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// Function to convert string to uppercase
string toUpperCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str;
}

// Function to convert string to lowercase
string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

// Function to reverse a string
string reverseString(string str) {
    reverse(str.begin(), str.end());
    return str;
}

int main() {
    cout << "=== String Manipulation Program ===" << endl;
    cout << "1. Check if string is palindrome" << endl;
    cout << "2. Convert to uppercase" << endl;
    cout << "3. Convert to lowercase" << endl;
    cout << "4. Test all methods" << endl;
    cout << "Enter your choice: ";
    
    int choice;
    cin >> choice;
    
    switch (choice) {
        case 1: {
            string input;
            cout << "Enter a string: ";
            cin.ignore();
            getline(cin, input);
            cout << input << " is " << (isPalindrome(input) ? "" : "not ") << "a palindrome." << endl;
            break;
        }
        
        case 2: {
            string input;
            cout << "Enter a string: ";
            cin.ignore();
            getline(cin, input);
            cout << "Uppercase: " << toUpperCase(input) << endl;
            break;
        }
        
        case 3: {
            string input;
            cout << "Enter a string: ";
            cin.ignore();
            getline(cin, input);
            cout << "Lowercase: " << toLowerCase(input) << endl;
            break;
        }
        
        case 4: {
            // Test all methods
            string testStr1 = "racecar";
            string testStr2 = "Hello";
            string testStr3 = "World";

            // Test isPalindrome
            cout << "Testing isPalindrome:" << endl;
            cout << testStr1 << ": " << (isPalindrome(testStr1) ? "Palindrome" : "Not Palindrome") << endl;
            cout << testStr2 << ": " << (isPalindrome(testStr2) ? "Palindrome" : "Not Palindrome") << endl;
            cout << testStr3 << ": " << (isPalindrome(testStr3) ? "Palindrome" : "Not Palindrome") << endl;

            // Test toUpperCase
            cout << "\nTesting toUpperCase:" << endl;
            cout << testStr2 << ": " << toUpperCase(testStr2) << endl;
            cout << testStr3 << ": " << toUpperCase(testStr3) << endl;

            // Test toLowerCase
            cout << "\nTesting toLowerCase:" << endl;
            cout << testStr2 << ": " << toLowerCase(testStr2) << endl;
            cout << testStr3 << ": " << toLowerCase(testStr3) << endl;

            // Test reverseString
            cout << "\nTesting reverseString:" << endl;
            cout << testStr1 << ": " << reverseString(testStr1) << endl;
            cout << testStr2 << ": " << reverseString(testStr2) << endl;
            cout << testStr3 << ": " << reverseString(testStr3) << endl;

            break;
        }
        
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
    
    return 0;
}