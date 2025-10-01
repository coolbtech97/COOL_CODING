#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

// Method 1: Simple reverse comparison
bool isPalindrome1(string str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

// Method 2: Two pointer approach
bool isPalindrome2(string str) {
    int left = 0;
    int right = str.length() - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// Method 3: Case-insensitive with space handling
bool isPalindrome3(string str) {
    string cleaned = "";
    
    // Remove spaces and convert to lowercase
    for (char c : str) {
        if (c != ' ') {
            cleaned += tolower(c);
        }
    }
    
    int left = 0;
    int right = cleaned.length() - 1;
    
    while (left < right) {
        if (cleaned[left] != cleaned[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// Method 4: Recursive approach
bool isPalindromeRecursive(string str, int start, int end) {
    if (start >= end) {
        return true;
    }
    
    if (str[start] != str[end]) {
        return false;
    }
    
    return isPalindromeRecursive(str, start + 1, end - 1);
}

// Number palindrome check
bool isNumberPalindrome(int num) {
    int original = num;
    int reversed = 0;
    
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    int choice;
    
    cout << "=== Palindrome Checker ===" << endl;
    cout << "1. Check string palindrome (simple)" << endl;
    cout << "2. Check string palindrome (case-insensitive with spaces)" << endl;
    cout << "3. Check number palindrome" << endl;
    cout << "4. Test all methods" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1: {
            string str;
            cout << "Enter a string: ";
            cin.ignore();
            getline(cin, str);
            
            if (isPalindrome1(str)) {
                cout << "\"" << str << "\" is a palindrome!" << endl;
            } else {
                cout << "\"" << str << "\" is not a palindrome." << endl;
            }
            break;
        }
        
        case 2: {
            string str;
            cout << "Enter a string (case-insensitive, spaces allowed): ";
            cin.ignore();
            getline(cin, str);
            
            if (isPalindrome3(str)) {
                cout << "\"" << str << "\" is a palindrome!" << endl;
            } else {
                cout << "\"" << str << "\" is not a palindrome." << endl;
            }
            break;
        }
        
        case 3: {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            
            if (isNumberPalindrome(num)) {
                cout << num << " is a palindrome number!" << endl;
            } else {
                cout << num << " is not a palindrome number." << endl;
            }
            break;
        }
        
        case 4: {
            cout << "\n=== Testing All Methods ===" << endl;
            
            // Test strings
            string testStrings[] = {"racecar", "hello", "A man a plan a canal Panama", "Madam", "12321"};
            
            for (string str : testStrings) {
                cout << "\nTesting: \"" << str << "\"" << endl;
                cout << "Method 1 (simple): " << (isPalindrome1(str) ? "Yes" : "No") << endl;
                cout << "Method 2 (two pointer): " << (isPalindrome2(str) ? "Yes" : "No") << endl;
                cout << "Method 3 (case-insensitive): " << (isPalindrome3(str) ? "Yes" : "No") << endl;
                cout << "Method 4 (recursive): " << (isPalindromeRecursive(str, 0, str.length() - 1) ? "Yes" : "No") << endl;
            }
            
            // Test numbers
            int testNumbers[] = {121, 12321, 123, 1001, 7};
            cout << "\n=== Number Palindromes ===" << endl;
            
            for (int num : testNumbers) {
                cout << num << ": " << (isNumberPalindrome(num) ? "Yes" : "No") << endl;
            }
            break;
        }
        
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
    
    return 0;
}
