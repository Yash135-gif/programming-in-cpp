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

//    # include <iostream>
//    using namespace std;

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

    //   # include <iostream>
    //   using namespace std;

    //  int add(int a,int b){
    //     return (a+b);
    //  }
    //  int add(int a,int b,int c){
    //     return (a+b+c);
    //  }
    //  double add(double a,double b){
    //     return (a+b);
    //  }
    //  double add(double a, int b){
    //     return (a+b);
    //  }
    //  double add(int a,double b){
    //     return (a+b);
    //  }
     
    //  int main(){
    //     cout<<add(3.4,3.4);
    //  }

    # include <iostream>
    using namespace std;
    
    
    // sum with recurssion ----------------------------------------------

    // int sum(int n){
    //    if(n==0){
    //     return 0;
    //    }
    //    return n+sum(n-1);
    // }

    // int main(){
    // cout<<sum(10);
    // }

    // Checking subsequence string -----------------------------------------

    // void sub(string str1,string str2){
     

    //     if(str2.length()==0){
    //         cout<<"Subsequence";
    //         return ;
    //     }
    //       int j=0;
    //     for(int i=0;i<str1.length();i++){
    //         if(str1[i]==str2[j]){
    //             j++;
    //         }
             
    //     }
    //     if(str2.length()==j){
    //         cout<<"Subsequence";
    //     }
    //     else{
    //         cout<<"not";
    //     }
    // }
    // int main(){
    //     string str1="abcde";
    //     string str2="a6";
    //     sub(str1,str2);
    // }

    //   Uppercase, Lowercase ----------------------------------------------

    // void uclc(string &str){
    //     for(int i=0;i<str.length();i++){
    //         if(str[i]>='A' && str[i]<='Z'){
    //             str[i]=str[i]+32;
    //     }
    //     else if(str[i]>='a' && str[i]<='z'){
    //         str[i]=str[i]-32;
    //     }
    // }
       
    // }
    // int main(){
    //     string str="this IS";
    //     uclc(str);
    //     cout<<str;
    // }

    // Anagram -----------------------------------------------------------

    // void anagram(string str1,string str2){
    //     // str1
    //     // str2

    //     if(str1.length()!=str2.length()){
    //         cout<<"not";
    //         return ;
    //     }
    //     int count[256]={0};
    //      for(int i=0;i<str1.length();i++){
    //          count[str1[i]]++;
    //          count[str2[i]]--;
    //      }
    //      for(int i=0;i<256;i++){
    //         if(count[i]!=0){
    //             cout<<"not";
    //             return ;
    //         }
    //      }
    //      cout<<"anagram";
    // }

    // int main(){
    //     string str1="adbske";
    //     string str2="abdkst";
    //     anagram(str1,str2);
    // }
    
    //    Balanced or not -----------------------------------------------------

    //  void balance(string str){
    //     // str
    //     int circle=0,curly=0,square=0;
    //     for(int i=0;i<str.length();i++){
    //         if(str[i]=='[')  square++;
    //         else if(str[i]==']') square--;
    //         else if(str[i]=='(')  circle++;
    //         else if(str[i]==')')  circle--;
    //         else if(str[i]=='{')  curly++;
    //         else if(str[i]=='}')  curly--;
    //     }
    //     if(circle==0 && curly==0 && square==0){
    //         cout<<"balanced";
    //     }
    //     else{
    //         cout<<"Unbalanced";
    //     }
    //  }
    //  int main(){
    //     string str="{([])}";
    //     balance(str);
    //  }

    //  Reverse String ----------------------------------------

//    void reverse(string &str){
//      // str
//      int start=0;
//      int end=str.length()-1;
//      while(start<end){
//         char temp=str[start];
//         str[start]=str[end];
//         str[end]=temp;
//         start++;
//         end--;
//      }
       
//    }
//    int main(){
//     string str="yash is";
//     reverse(str);
//     cout<<str;
//    }
   
    // Palindrome check -----------------------------------------------
    
//    void palindrome(string str){
//     // str
//     int start=0;
//     int end=str.length()-1;
//     while(start<end){
        
//        if(str[start]!=str[end]){
//          cout<<"not";
//          return ;
//        }

//         start++;
//         end--;

//     }
//     cout<<"Palindrome";
//    }
//    int main(){
//     string str="madamnj";
//     palindrome(str);
//    }

    // structure -------------------------------------------------

    //   struct info{
    //     string name;
    //     int roll;
    //     char bg;
    //   };
    //   int main(){
    //     info var;
    //       var.name="jadoo";
    //       var.roll=21;
    //       var.bg='0';
    //       cout<<var.name<<endl;
    //       cout<<var.roll<<endl;
    //       cout<<var.bg<<endl;
    //       }

    //   pointer variable -------------------------------------

    // int main(){
    //     int a=10;
    //     int *b=&a;
    //     cout<<b<<endl;
    //     cout<<*b;
    
    // }

//     struct info{
//         string name;

//     };

// int main(){
//     info a;
//     a.name='ayush';   
//     info *b=&a;
//     cout<<b->name;
// }

    //   structure -------------------------------------------

    // struct info{
    //     string cricket;
    //     int age;
    //     char bg;
    // };
    // int main(){
    //    info one;
    //    one.cricket="bumrah";
    //    one.age=20;
    //    one.bg='M';
    //    cout<<one.cricket;
    //    cout<<endl<<one.age;
    //    cout<<endl<<one.bg<<endl;
       
    //    info two;
    //    two.cricket="don";
    //    two.age=20;
    //    two.bg='D';
    //    cout<<two.cricket<<endl;
    //    cout<<two.age<<endl;
    //    cout<<two.bg<<endl;
    // }
   
    // Pointer Variable  

    // int main(){
    //     int a=10;
    //     int *b=&a;
    //     cout<<b;                                                
    //                                                                                     // Referencing   
    //     cout<<endl<<*b;
    //                                                                                     //  Dereferencing
    // }

    //   Pointer variable in structure  

    //   struct info{
    //     string name="yash";
    //     int age=20;
    //     char bg='o';
    //   } boy;
    //   int main(){
    //     info *boys=&boy;
    //     cout<<boys->name;
    //   }

    //    linked list  (self referential structure)

        // struct info {
        //     string name;
        //     int age;
        
        //    struct info *link;
        // };
        // int main(){
        //     info s1;
        //     info s2;
        //     s1.name="yash";
        //     s1.link=NULL;
        //     s2.link=NULL;
        //     s2.name="Vansh";
        //     s1.age=20;
        //     s2.age=21;
        //     s2.link=&s1;
        //     cout<<s2.name;

        // }
    
        //   OOPs 

    //  class info{
    //     int a=10;
    //     public: string name;
    //     int age;
    //     char bg;

    //  };
    //  int main(){
    //     info obj;
    //     obj.name="yash";
    //     obj.age=20;
    //     cout<<obj.name<<endl<<obj.age<<endl;
    //  }

    //    Hybrid Iheritance 

//     class A{
//     public: int a=101;
//    };
//    class B :virtual public A
//    {
     
//    };
//    class C : virtual public A
//    {

//    };
//    class D :public B, public C
//    {

//    };
//    int main(){
//     D dd;
//     cout<<dd.a;
//    }

    // Hybrid Inheritance example with constructor 

    // class A{
    //     public:
    //     int a=101;
    //     A(){
    //         cout<<"A";
    //     }
    // };
    // class B:virtual public A{
    //    public: B(){
    //         cout<<"B";
    //     }
    // };
    // class C :virtual public A{
    //   public:  C(){
    //         cout<<"C";
    //     }
    // };
    // class D :public C,public B{
    //    public: D(){
    //         cout<<"D";
    //     }
    // };
    // int main(){
    //     D obj;
    // }

    //  Reverse Swapping 










    

       

    


  
      

     
     
   
    


      

   
   




