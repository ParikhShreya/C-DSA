#include <iostream>
using namespace std;

/* #include<bits/stdc++.h>     (It Includes All Library So there is no need for 
Declaring Each Library Seprately) */

int main() {
  // INPUT
  int x;
  cout<<"Enter value of x:-   ";
  cin >> x;  
  cout << "\n"<< "Value of x is :- " << x << "\n";

  // OUTPUT
  cout << "HELLO SHREYA ! HOW ARE YOU ? ";
  cout << "HELLO" << "\n" << "HI"<<"\n";

  //DATATYPES   
  string ch;
  getline(cin,ch);  //ONLY  USE FOR STRING
  cin >> ch;
  
  cout << ch;

  cout<<"\n"<<"PLease tell me your marks in maths  ";
  int a;
  cin>>a;
  cout<<a;


  //If - Else (Conditional Statements)
  //Else-if Conditional statements
  cout<< "\n"<< "Please Enter Your Age:- ";
  int age;
  cin>>age;
  
  if(age > 18){
    cout<<"\n"<< "Adult";
  }else {
    cout<<"Not Adult"<<"\n";
  }
  
  //Switch statement
  cout <<"\n"<< "Enter day number:-  ";
  int day;
  cin >> day;
  switch(day){
    case 1 : cout << "Monday";
    break;

    case 2 : cout << "Tueseday";
    break;

    default : cout <<"Invalid"<<"\n";
    break;
  }

  //Basics of array and string

  int arr[5];
  cin >> arr[0] >>arr[1]>>arr[2]>>arr[3]>>arr[4];

  cout<<"\n"<<arr[3];

  int ab[3][3];
   ab[2][2] = 45;
   cout<< "\n"<< ab[2][2]<<"\n";
 
   string s;
   s = "SHREYA";
   cout<<s[2]<<"\n";

   //LENGTH OF A STRING
   int len = s.size();
   int len1 = s.length();
   cout<<len<<len1<<endl;

   //FOR LOOPS
   
   for(int i = 1; i<=5;i++) {
    cout<<"Hey!"<<endl;
   }

   //WHILE LOOPS
   int av = 1;
   while(av<=4){
    cout<<"SHREYA"<<endl;
    av++;
   }

   //DO - WHILE LOOPS
   int as = 1;
   do{
    cout<<"ABCD"<<endl;
    as++;
   }while(as<=2);

   
   /* FUNCTIONS:-   
              int add(int a,int b){
              int sum = a +b ;
            }
            int main(){
             int a,int b;
             int ans = add(a,b);
             cout<<"Ans is:-  "<<ans<<endl;
            }
            */

            // THE ABOVE ONE IS CALLED PASSED BY VALUE

           /*
            PASSED BY REFERENCE IN WHICH IT TAKES
            MEMORY ADDRESS OF A VALUES
            EX = PARAMETERS ARE   &a , &b (address represents the refernce)
                                                                  */
        

       //IN-BUILT FUNCTIONS
       int n1,n2;
       cin>>n1>>n2;
       int max1 = max(n1,n2);
       int min1 = min(n1,n2);
        cout<<max1<<min1;
  return 0;
}
