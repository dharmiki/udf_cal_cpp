#include<iostream>
using namespace std;
 
 int additon(int a,int b)
 {
    cout<<"the addition is:"<<a+b<<endl;
    
    cout<<"---------------------------------"<<endl;

}

 int subtraction(int a,int b)
 {
    cout<<"the substraction is:"<<a-b<<endl;

    cout<<"---------------------------------"<<endl;
    
 } 

int multiplication(int a,int b)
{
      cout<<"the multiplication is:"<<a*b<<endl;

      cout<<"---------------------------------"<<endl;
      
}

int division(float a,float b)
{
      cout<<"the division is:"<<a/b<<endl;

      cout<<"---------------------------------"<<endl;
      
}

int mode(int a,int b)
{
      cout<<"the mode is:"<<a%b<<endl;

      cout<<"---------------------------------"<<endl;
      
}

 int main()
 {  

    int user ,a,b;

   do
   {
        cout<<"Enter 1 for addition(+)"<<endl;
        cout<<"Enter 2 for subtraction(-)"<<endl;
        cout<<"Enter 3 for multiplication(*)"<<endl;
        cout<<"Enter 4 for division(/)"<<endl;
        cout<<"Enter 5 for mode(%)"<<endl;
        cout<<"Enter 0 for exit"<<endl;
        cout<<"---------------------------------"<<endl;

        cout<<"Enter your choice::";
        cin>>user;

         if ( user>=1 && user<=5)
        {
              cout<<"Enter frist number::";
              cin>>a;

              cout<<"Enter second number::";
              cin>>b;
        }

        
        switch (user)
        {
            case 1:
              additon(a,b);
              break;

            case 2:
              subtraction(a,b);
              break;

            case 3:
              multiplication(a,b);
              break;
              
            case 4:
              division(a,b);
              break;

            case 5:
              mode(a,b);
              break;

            case 0:

                cout << "Exiting the program. Goodbye!" << endl;

            break;

            default:

                cout << "Invalid choice. Please try again." << endl;
        
        }
   }

   while (user!=0);

}