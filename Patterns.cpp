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
void pattern1(int rows, int colm) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= colm; j++) {
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


int main() {
    int rows, colm;

    // Input for Pattern 1
    cout << "Enter number of rows and columns for Pattern 1: ";
    cin >> rows >> colm;
    pattern1(rows, colm);

    // Input for Pattern 2
    cout << "\nEnter number of rows for Pattern 2: ";
    cin >> rows;
    pattern2(rows);

    //Input for Pattern 3
    cout << "\nEnter number of rows for Pattern 3: ";
    cin >> rows;
    pattern3(rows);

    //Input for Pattern 4
    cout << "\nEnter number of rows for Pattern 4: ";
    cin >> rows;
    pattern4(rows);

    //Input for Pattern 5
    cout << "\nEnter number of rows for Pattern 5: ";
    cin >> rows;
    pattern5(rows);

    
    //Input for Pattern 6
    cout << "\nEnter number of rows for Pattern 6: ";
    cin >> rows;
    pattern6(rows);

    //Input for Pattern 7
    cout << "\nEnter number of rows for Pattern 7: ";
    cin >> rows;
    pattern7(rows);

    //Input for Pattern 8
    cout << "\nEnter number of rows for Pattern 8: ";
    cin >> rows;
    pattern8(rows);

    //Input for Pattern 9
    cout << "\nEnter number of rows for Pattern 9: ";
    cin >> rows;
    pattern7(rows);
   pattern8(rows);

    //Input for Pattern 10
    cout << "\nEnter number of rows for Pattern 10: ";
    cin >> rows;
    pattern10(rows);

    //Input for Pattern 11
    cout << "\nEnter number of rows for Pattern 11: ";
    cin >> rows;
    pattern11(rows);
    return 0;
}
