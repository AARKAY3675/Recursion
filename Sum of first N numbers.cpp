/* Sum of first N numbers using Recursion */

#include <iostream>

using namespace std;

int fn(int i,int sum)   //function declaration with parameters
{
    if(i<1)  {
        return sum;      // function working
       
    }
    
  return fn(i-1,sum+i); //recursive call to function
  
}

int main()
{
    int i, sum;
    cin>>i;
    cout<<fn(i,0);  //function calling directly in output

    return 0;
}
