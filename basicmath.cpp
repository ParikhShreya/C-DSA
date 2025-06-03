//count digits
#include <bits/stdc++.h>
using namespace std;

int countdigit(int n){
    int count = 0;
    while(n>0){
        count +=1;
        n /=10;
    } return count;
}

//Reverse OF A Number
int revn(int n){

int rev = 0;
while(n>0){
int last = n%10;
rev = (rev*10)+last;
n = n/10;

}
return rev;
}

//PALLINDROME OF A NUM
void pallindrom(int n){
    int rev =0;
    int duplicate = n;

    while(n>0){
        int ld = n%10;
        rev = (rev*10)+ld;
          n/=10;
    }
  if(duplicate==rev){
   cout<<"Pallindrome";
  }
  else {
    cout<<"Not Pallindrome";
  }
}


//Armstrong number

bool armstrong(int n){
    int rev = 0;
    int sum =0;

    int k = to_string(n).length();
     while(n>0){
        int ld = n%10;
        sum += pow(ld,k);
        n /=10;
     }
     return sum == n ? true : false;
     
}

//PRINT ALL DIVISORS

void printDivisors(int n) {
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << i << " ";
            if (i != n / i) {
                cout << n / i << " ";
            }
        }
    }
    cout << endl;
}

//PRIME
bool prime(int num){
    int count =0;
    for(int i =1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }if(count==2){
    return true;
}else{
    return false;
}
}

//GCD
int findgcd(int n1,int n2){
    for(int i =min(n1,n2); i>0;i--){
        if(n1%i==0 && n2%i==0){
            return i;
        }
    }return i;
}
int main(){
    int n;
    cin>>n;
    int digit = countdigit(n);
    cout<<digit<<endl;
    cin>>n;
    int reverse_num = revn(n);
    cout<<reverse_num<<endl;
    cin>>n;
     pallindrom(n);
     cin>>n;
     if(armstrong(n)){
        cout<<n<<"Is Armstrong"<<endl;
     }else{
        cout<<n<<"It is not ar,stromg num"<<endl;
     }
   
     int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Divisors of " << num << " are: ";
    printDivisors(num);
     int num1;
     cin>>num1;
     int isprime = prime(num);
    if(isprime){
        cout<<"Prime number"<<endl;
    }else{
        cout<<"Not prime"<<endl;
    }

    //gcd
    int n1=20,n2=15;
    int gcd = findgcd(n1,n2);
    cout<<"GCD Of"<<n1<<"and "<< n2<<"is : "<<gcd<<endl;
    return 0;
}