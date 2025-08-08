#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
  int roll;
  int cls;
  double gpa;
  Student(int roll,int cls,double gpa)//Ai constructor r vitore agger bar r,c,g diyesilam jar jnno perfectly out assey chilo kintu amra roll,cls,gpa jdi use kori tokhon garbage value asbey ai jnno this pointer hisebe use korte hobey
  {
    //   this.roll = roll;
    //   this.cls = cls;
    //   this.gpa = gpa;
    // Ai this gulo rahim k point korbe jdi this.roll likhi ar maney rahim r roll bujhabe.. this.roll vs code r compiler e likhle this->roll ai vbey asbey. kintu this.roll r kono man nei karon tokhon this rahim r pointer hisebe kaj korbe nah..
    //this k tokhon derefernce korte hbe (*this) ai vbey karon this ta sudu memory r address rakhbe kintu (*this) ai ta memory r vitor value teh access korbe
    // aikhney pointer r basic ta lgbe
      
      (*this).roll=roll;
      (*this).cls = cls;
      (*this).gpa = gpa;
      
      
  }
};

int main(){
    
    Student rahim(50,7,3.4);
    cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
    
    
}
