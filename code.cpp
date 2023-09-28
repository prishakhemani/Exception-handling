//if 18+ it will print "you are eligible to use social media,if between 16 and 18 it will print age and if below 18 it will print "you are not eligible to use social media
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:";
    cin>>age;
    try
    {
        
        if(age>=18)
        {
            throw("You are eligible to use social media");
         }
         else if(age>16&&age<18)
         {
            throw(age);
         }
        else
        {
            cout<<"you are not eligible to have social media";
        }
        
    }
    catch(const char*message)
    {
        cout<<message;
    }
    catch(int x)
    {
        cout<<"your age is:"<<age;
    }
    return 0;
    
}
