#include <iostream>
using namespace std;

/*STEPS TO SOLVE PATTERNS
1) OUTER LOOP IS GOING TO BE A NUMBER OF LINES(ROWS
2)INNER LOOP- TRY TO RELATE THE LOGIC WITH ROWS ROWS & COLM
3) PRINT IN INNER LOOP
4) NEXT LINE IN OUTER LOOP*/

/* PATTERN 1
*****
*****
*****
*****
*****
*/
void pattern1(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

/* PATTERN 2
*
**
***
****
*****
*/
void pattern2(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

/*PATTERN 3
1
1 2
1 2 3
1 2 3 4 
1 2 3  4 5
*/

void pattern3(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j<<" ";
        }
        cout << endl;
    }
}

/*PATTERN 4
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

void pattern4(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

/*PATTERN 5
* * * * *
* * * *
* * *
**
*
*/

void pattern5(int rows){
for(int i =1; i<=rows;i++){
for(int j = 1; j<=rows-i+1;j++){
cout<<"*";
}
cout<<endl;
}
}
           
/*PATTERN 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1
*/
void pattern6(int rows) {
    for (int i =1; i <=rows; i++) {
        for (int j = 1; j<=rows-i+1; j++) {
            cout << j<<" ";
        }
        cout << endl;
    }
}
/*PATTERN 7

        *
      * * * 
    * * * * * 
  * * * * * * *
* * * * * * * * * 

*/

void pattern7(int rows) {
    //NUMBER OF LINES
    for (int i =0; i <rows; i++) {
    
        //SPACE 
        for(int space = 0; space<rows-i-1;space++) {
            cout<<" ";
        }
        // STAR
         for(int star = 1; star<=2*i+1;star++){
            cout<<"*";
         }
        //SPACE
        for(int space = 0; space<rows-i-1;space++) {
            cout<<" ";
        }
        cout<<endl;

    }
}

/*PATTERN 8
* * * * * * * * *
 * * * * * * *
   * * * * *
     * * * 
       * 
*/

void pattern8(int rows) {
    //NUMBER OF LINES
    for (int i = 0; i<rows; i++) {
        //space
           for(int space = 0; space<i;space++) {
            cout<<" ";
        }
     //Star
       for(int star =0; star< 2*rows-(2*i + 1);star++){
            cout<<"*";
          }
        //space
        for(int space = 1; space<=i;space++) {
            cout<<" ";
        }
        cout<<endl;

    }
}

/*PATTERN 9
           *
         * * *
       * * * * *
      * * * * * * *
    * * * * * * * * *
    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *

THIS PATTERN IS COMBINATION OF THE PATTERN 7,8 */

/*PATTERN 10
*
* *
* * *
* * * *
* * * *
* * *
* *
*
*/
   void pattern10(int rows){
// Upper triangle
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower inverted triangle
    for (int i = 1; i<=rows; i++) {
        for (int j = 1; j <=rows-i+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
   }
    
/*PATTERN 11
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

void pattern11(int rows) {
    for (int i = 0; i < rows; i++) {
        int start = (i % 2 == 0) ? 1 : 0;  // Start with 1 if even row, 0 if odd
        for (int j = 0; j <= i; j++) {     // <= i to print (i+1) numbers in row
            cout << start << " ";
            start = 1 - start;             // Flip between 1 and 0
        }
        cout << endl;
    }
}
/*PATTERN 12
1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1           
*/
void pattern12(int rows) {

    for (int i = 1; i <= rows; i++) {
        // Increasing numbers
        for (int num = 1; num <= i; num++) {
            cout << num << " ";
        }

        // Middle spaces
        int middleSpaces = 2 * (rows - i);
        for (int s = 1; s <= middleSpaces; s++) {
            cout << "  ";  // Two spaces for better spacing
        }

        // Decreasing numbers
        for (int num = i; num >= 1; num--) {
            cout << num << " ";
        }

        cout << endl;
    }  
}

/*PATTERN 13
1
2 3
4 5 6
7 8 9 10
*/

void pattern13(int n){
    int num =1;
    for(int i =1;i<=n;i++){
        for(int j =1;j<=i;j++){
          cout<<num;
          num = num +1;
        }cout<<endl;
    }
}

/*PATTERN 14
A
A B
A B C
A B C D
*/

void pattern14(int rows){
    
    for(int i = 1; i<=rows; i++){  
       for(char ch = 'A'; ch<'A'+i;ch++){
        cout<<ch<<" ";
       }cout<<endl;
    }
}
/*PATTERN 15
A A A A A
B B B B
C C C
D D
E
*/
void pattern15(int rows){
    
    for(int i = rows;i>=1;i--){
        char ch = 'A' +(rows-i);
        for(int j =1;j<=i;j++){
            cout<<ch<<" ";
        }cout <<endl;
    }
}

/*PATTERN 16
A
B B
C C C
D D D D
E E E E E
*/

void pattern16(int rows){
    
    for(int i =0;i<rows;i++){
        char ch ='A'+i;
        for(int j = 0; j<=i;j++){
           cout<<ch<<" ";
           
        }cout<<endl;
    }
}
/*PATTERN 17
A B C D E
A B C D
A B C
A B
A
*/
void pattern17(int rows){
    for(int i = 0;i<rows;i++){
        for(char ch = 'A'; ch<='A'+(rows-i-1);ch++){
            cout<<ch<<" ";    
        }cout<<endl;
    }
}

/*PATTERN 18
                A
              A B A
            A B C B A
          A B C D C B A  */

    void pattern18(int rows) {
    //NUMBER OF LINES
    for (int i =0; i <rows; i++) {
    
        //SPACE 
        for(int space = 0; space<rows-i-1;space++) {
            cout<<" ";
        }
        // CHARACTER
        char ch = 'A';
        int breakpoint = (2*i+1) / 2;
         for(int j = 1; j<=2*i+1;j++){
            cout<<ch<<" ";
            if(j<=breakpoint) {
                ch++;
            }else ch--;
            
         }
        //SPACE
        for(int space = 0; space<rows-i-1;space++) {
            cout<<" ";
        }
        cout<<endl;

    }
}

/*PATTRN 19
E
D E
C D E
B C D E
A B C D E
*/

void pattern19(int rows){
    for(int i = 0;i<rows;i++){
        for(char ch = 'E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        } cout<<endl;
    }
}

/*PATTERN 20

* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
*/
void pattern20(int rows) {
    // Upper half
    for (int i = 0; i < rows; i++) {
        // Left stars
        for (int star = 0; star < rows - i; star++) {
            cout << "*";
        }
        // Spaces in the middle
        for (int sp = 0; sp < 2 * i; sp++) {
            cout << " ";
        }
        // Right stars
        for (int star = 0; star < rows - i; star++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = 0; i < rows; i++) {
        // Left stars
        for (int star = 0; star <= i; star++) {
            cout << "*";
        }
        // Spaces in the middle
        for (int sp = 0; sp < 2 * (rows - i - 1); sp++) {
            cout << " ";
        }
        // Right stars
        for (int star = 0; star <= i; star++) {
            cout << "*";
        }
        cout << endl;
    }
}

/*PATTERN 21
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*/

void pattern21(int rows){
    for(int i = 0;i<rows;i++){
          //star
          for(int star = 0;star<=i;star++){
            cout<<"*";
          }
          //space
          for(int space =0; space< 2*(rows-i-1);space++){
            cout<<" ";
          }
          //star
          for(int star = 0;star<=i;star++){
            cout<<"*";
          }cout<<endl;
    }

    //lower half
    for(int i =1;i<rows;i++){
        //star
        for(int star = 0; star<rows-i;star++){
            cout<<"*";
        }
        //space
        for(int space =0; space<2*i;space++){
            cout<<" ";
        }
        //star
        for(int star= 0;star<rows-i;star++){
            cout<<"*";
        }cout<<endl;
    }
}

/*PATTERN  22
* * * * 
*     *
*     *
* * * *
*/

void pattern22(int rows){
    for(int i =0;i<rows;i++){
        for(int j = 0; j<rows; j++){
          if(i==0||j==0||i==rows-1||j==rows-1){
            cout<<"*";
          } else{
            cout<<" ";
          } 
        }cout<<endl;
    }
}
int main() {
    int rows;

    // Input for Pattern 
    cout << "Enter number of rows : ";
    cin >> rows;
    pattern22(rows);

    return 0;
}
