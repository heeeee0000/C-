#include<bits/stdc++.h>
using namespace std;
class Student{
  public:
  int roll;
  int cls;
  double gpa;

};
int main(){
    
    Student rahim;
    cout<<"Please enter roll number,class and gpa : ";
    
    cin>>rahim.roll>>rahim.cls>>rahim.gpa;//Just Class r object diye input niye print kortisi constructor r drkr nei.. 

    
    cout<<rahim.cls<<" "<<rahim.roll<<" "<<rahim.gpa<<endl;
    // Akhn rahim object r class,roll,gpa print hbe,,
    
}
