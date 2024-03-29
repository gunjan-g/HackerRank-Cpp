/*

Program Link:
https://www.hackerrank.com/challenges/inherited-code/problem

Ques.
You inherited a piece of code that performs username validation for your company's website. 
The existing function works reasonably well, but it throws an exception when the username 
is too short. Upon review, you realize that nobody ever defined the exception.

The inherited code is provided for you in the locked section of your editor. Complete the 
code so that, when an exception is thrown, it prints Too short: n (where n is the length of 
the given username).

Input Format:
The first line contains an integer, t, the number of test cases.
Each of the t subsequent lines describes a test case as a single username string, u.

Sample Input:
3
Peter
Me
Arxwwz

Sample Output:
Valid
Too short: 2
Invalid

Explanation:
Username Me is too short because it only contains 2 characters, so your exception prints 
Too Short: 2.

*/

#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

//the class has been made by carefully examining the program
class BadLengthException{
    private:
    int n;
    
    public:

    //the parameterized constructor should set the value of defined private variable n
    BadLengthException(int n){
        this->n=n;
    }
    
    //the function what should return the value of n
    int what(){
        return n;
    }
};

bool checkUsername(string username) {
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n);
	}
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}

int main() {
	int T; cin >> T;
	while(T--) {
		string username;
		cin >> username;
		try {
			bool isValid = checkUsername(username);
			if(isValid) {
				cout << "Valid" << '\n';
			} else {
				cout << "Invalid" << '\n';
			}
		} catch (BadLengthException e) {
			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}