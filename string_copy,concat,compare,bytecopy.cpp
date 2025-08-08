#include<bits/stdc++.h>
using namespace std;
int main(){
    
    char src[100]= "Hello";
    char src1[20];
    strcpy(src1,src);
    cout<<src1<<endl;
    
    int len=strlen(src1);
    cout<<"String length is : "<<len<<endl;
    char src2 []= "World";
    strcat(src1,src2);
    cout<<"Concated string is : "<<src1<<endl;
    //strcmp
    if(strcmp(src1,src2)==0){
        cout<<"Equal"<<endl;
        
    }
    else{
        cout<<"Not equal"<<endl;
    }
    //Bytecopy
    char src3[10];
    memcpy(src3,src1,strlen(src1)+1);//Jei string ta copy kortisi oitar last e null terminator assey jar jnno length+1 korte hobe
    cout<<src3<<endl;
    
    
}
