#include<bits/stdc++.h>
using namespace std;

// Class must be defined before the main function, after "using namespace std;"
class Student {
// Class created for Student... Objects will be created in the main function.
// Inside these { } brackets, we need access modifiers:
// 1. Private, 2. Protected, 3. Public. Here, we use only public.

public:
char name[100]; // 100 bytes
int roll;       // 4 bytes
double gpa;     // 8 bytes
}; // Semicolon (;) is required after class definition

int main() {
Student a, b; // Created two objects of Student class


// Input for student 'a'
cin.getline(a.name, 100); // Takes input for a.name (100 = array size)
cin >> a.roll >> a.gpa;
cout << a.name << " " << a.roll << " " << a.gpa << endl;

// Clear the input buffer to avoid issues with getline
cin.ignore();

// Input for student 'b'
cin.getline(b.name, 100); // Takes input for b.name (100 = array size)
cin >> b.roll >> b.gpa;
cout << b.name << " " << b.roll << " " << b.gpa << endl;

return 0;



}
