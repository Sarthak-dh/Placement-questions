#include<iostream>
using namespace std;

bool check(int x, int y, int z){

    if(x*x == y*y + z*z){
        return true;
    }
    else if(y*y == x*x + z*z){
        return true;
       
    }
    else if(z*z == y*y + x*x){
        return true;
       
    }

    else {
        return false;
        
    }


}

int main(){

    int x,y,z;
    cin>>x>>y>>z;

    if(check(x,y,z)){
        cout<<"Pythagorean triplet.";
    }
    else{
        cout<<"Not a pythagorean triplet.";
    }
}