//Printing name , gender, mobile in string

#include <iostream>
using namespace std;

int main()
{
    string s1;
    cout<<"Enter your first name: "<<endl;
    cin>>s1;
    
    string s2 = " ";
    
    string s3;
    cout<<"Enter your second name: "<<endl;
    cin>>s3;
    
    string gender;
    cout<<"Enter your gender : male or female "<<endl;
    cin>>gender;
    
    if(gender=="male")
    {
        cout<<"Mr."<<" "<<s1+s2+s3<<endl;
    }
    else
    {
        cout<<"Mrs."<<" "<<s1+s2+s3<<endl;
    }
    
    string Mobno;
    cout<<"Enter your Mobile no.: "<<endl;
    cin>>Mobno;
    
    cout<<"Your mobile no. is: "<<Mobno<<endl;
    
    return 0;

    
}
