// # include <iostream>
// using namespace std;
// int main(){

    // Area of square -----------------------------

    // int side;
    // cout<<"enter the value of side = ";
    // cout<<"the area of side is = "<<side*side;
     
    //     Area of Triangle---------------------------------------

    // int height;
    // int base;
    // cout<<"enter the value of height = "<<endl;
    // cin>>height;
    // cout<<"enter the value of base = ";
    // cin>>base;
    // cout<<"the area of triangle is = "<<(1*height*base)/2;
  
    //  Age ----------------------------------------

    // int age;
    // cout<<"enter the age";
    // cin>>age;
    // if(age>=60){
    //     cout<<"Senior";
    // }
    // else{
    //     cout<<"Junior";
    // }
  
    // Greater between both the numbers -------------------------------

    // int a;
    // int b;
    // cout<<"enter the first number"<<endl;
    // cin>>a;
    // cout<<"enter the second number"<<endl;
    // cin>>b;
    // if(a>b){
    //     cout<<"a is greater";
    // }
    // else if(b==a){
    //     cout<<"both are equal";
    // }
    // else{
    //     cout<<"b is greater";
    // }

    // pass or fail -----------------------------------------

    // int present;
    // cout<<"enter the precentage";
    // cin>>present;
    // if(present>=50){
    //     cout<<"pass";
    // }
    // else{
    //     cout<<"fail";
    // }
    
    // Morning/Evening ----------------------------------------

    // int time;
    // cout<<"enter the time";
    // cin>>time;
    // if(time<12){
    //     cout<<"Good Morning";
    // }
    //   else if(time>24){
    //     cout<<"there are only 24 hours in a day";
    //   }
    // else if(time>12){
    //     cout<<"Good Evening";
    // }
   
    //    Profit or Loss -----------------------------

    // int cp;
    // int sp;
    // cout<<"enter the cost price"<<endl;
    // cin>>cp;
    // cout<<"enter the selling price"<<endl;
    // cin>>sp;
    // if(sp>cp){
    //     cout<<"Profit";
    // }
    // else if(sp==cp){
    //     cout<<"No profit, No Loss";
    // }
    // else{
    //     cout<<"Loss";
    // }

    // Positive or Negative Number ----------------------------------

//     int number;
//     cout<<"enter the number";
//     cin>>number;
//     if(number>0){
//         cout<<"positive Number";
//     }
//     else if(number==0){
//         cout<<"Number is Zero";
//     }
//    else{
//     cout<<"Negative";
//    }
  
    // Symbol -----------------------------------------------

    // char symbol;
    // cout<<"enter the character";
    // cin>>symbol;
    // if(symbol=='#'){
    //     cout<<'#';
    // }
    // else{
    //     cout<<"invalid";
    // }
   
    // multiples type ----------------------------------------------------

//    int m=2;
//    int n=5;
//    int v=1;
//    int u=0;
//    for(int i=1;i<=n;i++){
//       v=v*m;
//       u=u+v;
//    }
   
//    cout<<v<<"  "<<u;

// }
  
    // Prime Number --------------------------------------------

//   int number=12;
//   int counter=0;
//   for(int i=2;i<number;i++){
//     if(number%i==0){
     
//         counter++;
//     }
//   }
//      if(counter==0){
//         cout<<"Prime number";
//      }
//      else{
//         cout<<"not a prime number";
//      }

    // Prime numbers till 20 ----------------------------------

//   int number=20;
//   int counter;
//   for(int i=2;i<=number;i++){
//      counter=0;
//     for(int j=2;j<i;j++){
        
//         if(i%j==0){
//         counter++;
//         }
//     }
//     if(counter==0){
//         cout<<i<<" ";
//     }
//   }

    // Reversing ------------------------------------

    // int num=123;
    // int rv=0;
    // for(num=123;num>0;num/10){
    //   rv=rv*10+num%10;
    // }
    // cout<<rv;

    // Armstrong number --------------------------------------------

    // int num=153;
    // int rv=0;
    // int number=num;
    // // int bro
    // for(num=153;num>0;num/10){
    //   rv=rv+(num%10)*(num%10)*(num%10);

    // }
    // if(number==rv){
    //     cout<<"armstrong number";
    // }
    // else{
    //     cout<<"not a armstrong number";
    // }

//   fibonacci ------------------------------------

//    int f=1;
//    int s=2;
//    int next;
//    cout<<f<<" ";
//    cout<<s<<" ";
//    for(int i=1;i<6;i++){
//      next=f+s;
//      cout<<next<<" ";
//      f=s;
//      s=next;

//    }

//    find the duplicate --------------------------

//   int arr[]={82,82,63,82,62,62,22};
  
//    for(int i=0;i<7;i++){
//     bool dup=false;
//     for(int j=i+1;j<7;j++){
//         if(arr[i]==arr[j]){
//             arr[j]=-1;
//             dup=true;
//         }
//     }
//       if(dup && arr[i]!=-1){
//        cout<<arr[i]<<" ";
//       }
//    }
  
    // find non-duplicate value/unique value -----------------------

    // int arr[]={82,82,63,82,62,62,22};
  
    // for(int i=0;i<7;i++){
    //     bool dup=false;
    //     for(int j=i+1;j<7;j++){
    //       if(arr[i]==arr[j]){
    //         arr[j]=-1;
    //         dup=true;
    //       }  
    //     }
    //     if(!dup && arr[i]!=-1){
    //         cout<<arr[i]<<" ";
    //     }
    // }

    // Frequency count -------------------------------

//       int arr[]={82,82,63,82,62,62,22};

//       for(int i=0;i<7;i++){
//         int counter=1;
//         for(int j=i+1;j<7;j++){
//             if(arr[i]==arr[j]){
//                 arr[j]=-1;
//                 counter++;
//             }
    
//       }
   
//         if(arr[i]!=-1){
//             cout<<"the frequency of "<<arr[i]<<" "<<counter<<endl;
//         }
// 

//    Sorting in ascending order -------------------------------

//   int arr[]={82,12,45,62,91};
//   for(int i=0;i<5;i++){
//     for(int j=i+1;j<5;j++){
//         if(arr[i]<arr[j]){
//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
 

    
// }
//        for(int i=0;i<5;i++){
//        cout<<arr[i]<<' ';
//   }   

    // Inverted pyramid --------------------------------

    // int n=5;
 
    // for(int r=n;r>=1;r--){
    //     for(int s=n-r;s>=1;s--){
    //       cout<<" ";
    //     }
    //     for(int c=1;c<=(2*r-1);c++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // Diamond -----------------------

    // int a=0;
    // for(int r=1;r<=9;r++){
    //     (r<=5)? a++:a--;
    //     for(int c=1;c<=9;c++){
    //         if(c>=6-a && c<=4+a){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Binomal expression -------------------------

    // for(int r=1;r<=5;r++){
    //     int coef=1;
    //     for(int s=5-r;s>=1;s--){
    //         cout<<" ";
    //     }
    //     for(int c=1;c<=r;c++){
    //         cout<<coef<<" ";
    //         coef=coef*(r-c)/c;
    //     }
    //     cout<<endl;
    // }
    // }



    // # include <iostream>
    // using namespace std;
   
      // sum of n natural numbers ----------------------- 

    // void natural(int n){
    //     int sum=0;
    //   for(int i=1;i<=n;i++){
    //      sum=sum+i;
    //   }
    //   cout<<sum;
    // }
    // int main(){
    //     natural(5);
    // }
     
    //  factorials ----------------

    // int factorials(int n){
    // int v=1;
    // for(int i=1;i<=n;i++){
    //     v=v*i;
    // }
    //   cout<<v;
    // }
    // int main(){
    //     factorials(5);
    // }

    // factor -----------------------

    // int factor(int n){
    //  for(int i=1;i<=n;i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }
    //  }
    // }
    // int main(){
    //     factor(12);
    // }

    // perfect ---------------

    // void perfect(int n){
    //     int counter=0;
    //  for(int i=2;i<n;i++){
    //     if(n%i==0){
    //       counter++;
          
    //     }
    //  }
    //   if(counter==0){
    //     cout<<"perfect no";
    //   }
    //   else{
    //     cout<<"not a perfect number";
    //   }
    // }
    // int main(){
    //  perfect(11);
    // }
   
    //  Armstrong number ---------------------

    // void arm(int n){
    //     int v=0;
    //     int u=n;
    //   for(n;n>0;n/=10){
    //     v=v+(n%10)*(n%10)*(n%10);
    //   }
    //   if(v==u){
    //     cout<<"the number is armstrong";
    //   }
    //   else{
    //     cout<<"not a armstrong number";
    //   }
    // }
    // int main(){
    //     arm(10);
    // }

//    # include <iostream>
//    using namespace std;
//    int main(){
   
    // Hollo diamond --------------------------------- (incomplete)

    //  int n=5;
    // for(int r=0;r<=n;r++){
    //     for(int c=0;c<(2*n);c++){
    //         if(r+c<=n-1){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //         if(n+r<=c){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

      
//    }

   # include <iostream>
   using namespace std;

//    Reverse -------------

//    void reverse(int n){
//        int v=0;
//      for(n;n>0;n/=10){
//         v=v*10+n%10;
        
//      }
//        cout<<v;
//    }
//    int main(){
//     reverse();
//    }



//    Palindrome ------------------------------
    
    // void palindrome(int n){
    //  int v=0;
    //  int u=n;
    //  for(n;n>0;n/=10){
    //     v=v*10+n%10;
    //  }
    //   if(u==v){
    //     cout<<"palindrome";
    //   }
    //   else{
    //     cout<<"none";
    //   }
    // }
    // int main(){
    //     palindrome(1526);
    // }


    //   Fibonacci --------------------------

//   void fibonacci(int n){
//       int f=0;
//       int s=1;
//       int next;
//       cout<<f<<" ";
//       cout<<s<<" ";
//       for(int i=1;i<=n;i++){
//         next=f+s;
//         cout<<next<<" ";
//          f=s;
//          s=next;
//       }
//   }
//   int main(){
//     fibonacci(10);
//   }


   
   


  




