/*

Program Link:
https://www.hackerrank.com/challenges/overloading-ostream-operator/problem


Ques.
The task is to overload the << operator for Person class in such a way that for p being 
an instance of class Person the result of:
std::cout << p << " " << <some_string_value> << std::endl;

produces the following output:
first_name=<first_name>,last_name=<last_name> <some_string_value>

where:
1. <first_name> is the value of p's first_name_
2. <last_name> is the value of p's last_name_
3. <some_string_value> is an arbitrary std::string value

Input Format:
The input is read by the provided locked code template. In the only line of the input 
there are 3 space-separated strings first_name, last_name, event. The values of first_name 
and last_name will be used to create an object p of type Person. The value of event will 
be used by the provided code to produce the output.

Output Format:
The output should be produced by the provided locked code template. This code will use the 
implementation of Person public methods and the overloaded << operator to produce the output. 
Specifically, the output wiil be produced by the following code:
cout << p << " " << event << endl;

Sample Input:
john doe registered

Sample Output:
first_name=john,last_name=doe registered

*/

#include <iostream>

using namespace std;

class Person {
public:
    Person(const string& first_name, const string& last_name) : first_name_(first_name), last_name_(last_name) {}
    const string& get_first_name() const {
      return first_name_;
    }
    const string& get_last_name() const {
      return last_name_;
    }
private:
    string first_name_;
    string last_name_;
};

// Enter your code here.

//overloading operator
ostream& operator<<(ostream &os, Person &p){
    return os<<"first_name="<<p.get_first_name()<<",last_name="<<p.get_last_name();
}

int main() {
    string first_name, last_name, event;
    cin >> first_name >> last_name >> event;
    auto p = Person(first_name, last_name);
    cout << p << " " << event << endl;
    return 0;
}
