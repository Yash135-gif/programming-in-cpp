// # include <iostream>
// using namespace std;
// int main(){

//     // find missing difference of one

//  # include <iostream>
// using namespace std;
// int main(){
//    int arr[]={1,2,3,5,7};
//    for(int i=0;i<5;i++){
//      if(arr[i+1]-arr[i]>1){
//         cout<<arr[i]+1;
//      }
//    }
  
// }
    
    // find missing difference of -5

//  # include <iostream>
//  using namespace std;
//  int main(){
//     int arr[]={50,45,35,30,20};
//     for(int i=0;i<4;i++){
//         if(arr[i+1]-arr[i]<-5){
//             cout<<arr[i]-5;
//         }
//     }

//  }

//   Missing value find

//  # include <iostream>
//  using namespace std;
//  int main(){
//     int arr[]={11,12,14,16,30};
//     for(int i=0;i<5;i++){
//        if(arr[i+1]-arr[i]>1){
//         for(int j=arr[i]+1;j<arr[i+1];j++){
//             cout<<j<<" ";
//         }
//        }
//     }
//  }

//   Value find in array

//    # include <iostream>
//    using namespace std;
//    int main(){
//    int arr[]={11,12,14,16,30};
//    int k=16;
//    for(int i=0;i<5;i++){
//     if(arr[i]==k){
//         cout<<"yes";
//         return 0;
//     }
//    }
//      cout<<"No";
//    } 

//    Remove any value of array

    // # include <iostream>
    // using namespace std;
    // int main(){
    //     int arr[1,2,1,3,2];
    //     int j=0;
    //     int remove=1;
    //     for(int i=0;i<5;i++){
    //        if(arr[i]!=1) {
    //         arr[j]=arr[i];
    //         j++;
    //        }
    //     }
        
    //   for(int i=0;i<j;i++){
    //     cout<<arr[i]<<' ';
    //   }

    // }
      

    //   Print Zeroes at last

    // # include <iostream>
    // using namespace std;
    // int main(){
    // int arr[]={1,0,3,2,0};
    // int j=0;
    // for(int i=0;i<5;i++){
    //    if(arr[i]!=0){
    //     arr[j]=arr[i];
    //     j++;
    //    }
    // }
    //   for(int i=j;i<5;i++){
    //     arr[i]=0;
    //   }
    //   for(int i=0;i<5;i++){
    //     cout<<arr[i];
    //   }
    // }

    // Reverse swapping

//    # include <iostream>
//     using namespace std;
//     int main(){
//     int arr[]={1,2,3,4,5};
//     for(int i=0;i<5/2;i++){
//         int temp=arr[i];
//         arr[i]=arr[5-i-1];
//         arr[5-i-1]=temp;
//     }
//     for(int i=0;i<5;i++){
//        cout<<arr[i]<<" ";
//     }
//     }

//   Pallindrome Check
//   # include <iostream>
//   using namespace std;
//   int main(){
//  int arr[]={1,2,3,2,1};
//  for (int i=0;i<5/2;i++){
//      if(arr[i]!=arr[5-i-1]){
//         cout<<"not a pallindrome number";
//         return 0;
//      }
//  }
//  cout<<"the number is pallindrome";
//   }

//   Remove all duplicates

//    # include <iostream>
//    using namespace std;
//    int main(){
//   int arr[]={1,2,1,3,2};
//   for(int i=0;i<5;i++){
//     for(int j=i+1;j<5;j++){
//         if(arr[i]==arr[j]){
//             arr[j]=-1;
//         }
//     }
//   }
//   for(int i=0;i<5;i++){
//     if(arr[i]!=-1){
//         cout<<arr[i];
//     }
//   }
//    }

    // Remove all occurance of 2
 
//   # include <iostream>
//   using namespace std;
//   int main(){
//     int arr[]={1,2,3,2,4};
//     int target=2;
//     int k=0;
//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<5;j++){
//             if(arr[i]==arr[j]){
//                 arr[j]=-1;
//             }
//         }
//     }
//     for(int i=0;i<5;i++){
//         if(arr[i]!=2 && arr[i]!=-1){
//             arr[k]=arr[i];
//             k++;
//         }
//     }
//     for(int i=0;i<k;i++){
//         cout<<arr[i];
//     }
//   }

//   fibonacci

//   # include <iostream>
//   using namespace std;
//   int main(){
//     int f=0;
//     int s=1;
//         cout<<f<<" ";
//         cout<<s;
//     for(int i=1;i<10;i++){
//         cout<<" ";
//          int n=f+s;
//         cout<<n;
//         f=s;
//         s=n;
      
        
//     }
//   }

  // Armstrong number

//   # include <iostream>
//   using namespace std;
//   int main(){
//     int number=123;
//     int check=number;
//     int id=0;
//     int rv=0;
//     for(int number=153;number>0;number/=10){
//         id=number%10;
//         rv=rv+id*id*id;
//     }
//     if(check==rv){
//         cout<<"The given number is Pallindrome";
//     }
//     else{
//         cout<<"The given number is not a pallindrome number";
//     }
//   }
  
    //   Reverse Printing

    // # include <iostream>
    // using namespace std;
    // int main(){
    //     int number=1234;
    //     int rv=0;
    //     int id=0;
    //     for(int number=1234;number>0;number/=10){
    //       id=number%10;
    //       rv=rv*10+id;
    //     }
    //     cout<<rv;
    // }

    //    Hollow diamond -----------------------------------------------------------
 
    //   # include <iostream>
    //   using namespace std;
    //   int main(){
    //     int n=5;
    //   for(int i=0;i<n;i++){
    //      for(int j=0;j<(2*n);j++){
    //         if((i+j)<=(n-1)){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
          
    //       if((n+i)<=j){
    //         cout<<"*";
    //       }
    //       else{
    //         cout<<" ";
    //       }





    //   }
    //   cout<<endl;


    //   }

    //   for(int i=4;i>=0;i--){
    //       for(int j=0;j<(2*5);j++){
    //        if((i+j)<=(n-1)){
    //         cout<<"*";
    //        }
    //        else{
    //         cout<<" ";
    //        }
    //        if((n+i<=j)){
    //         cout<<"*";
    //        }
    //        else{
    //         cout<<" ";
    //        }
    //       }
    //    cout<<endl;
    //   }
    //   }
      
// ----------------------------------------------------------------------
     
    //  checking the ascending order or not ------------------------------

    //  # include <iostream>
    //  using namespace std;
    //  int main(){
    //       int arr[]={5,4,1,2,1};
    //       for(int i=0;i<5;i++){
    //         for(int j=i+1;j<5;j++){
    //             if(arr[i]<arr[j]){
    //                 cout<<"not in ascending order";
    //                 return 0;
    //             }
              
    //         }

    //       }
   
    //    cout<<"in ascending order";
    //  }
 
    //  find common elements between two arrays --------------------------------
   
    //   # include <iostream>
    //   using namespace std;
    //   int main(){
    //     int arr1[]={1,2,3,4,5};
    //     int arr2[]={2,4,7,9,8};
        
    //     for(int i=0;i<5;i++){
    //         int count=0;
    //         for(int j=0;j<5;j++){
    //             if(arr1[i]==arr2[j]){
    //                 count++;
    //             }
            
    //         }
    //         if(count>0){
    //             cout<<arr1[i]<<" ";
    //         }
            
    //     }
          
    //   }

    //   print first even numbers then odd numbers ------------------

    //   # include <iostream>
    //   using namespace std;
    //   int main(){
    //     int arr[]={1,2,3,4,5,6,7,8};
    //     for(int i=0;i<8;i++){
    //       if(arr[i]%2==0){
    //         cout<<arr[i]<<" ";
    //       }
    //   }
    //   for(int j=0;j<8;j++){
    //     if(arr[j]%2!=0){
    //         cout<<arr[j]<<" ";
    //     }
    //   }
    //   }

        // one element biggest one element smallest --------------------------------

    //  # include <iostream>
    //  using namespace std;
    //  int main(){
    // int arr[]={8,7,6,5,4,3,2,1};
    //   for(int i=0;i<4;i++){
    //     cout<<arr[i]<<" ";
    //     cout<<arr[8-i-1]<<" ";
    //   }
    //  }

    //   # include <iostream>
    //   using namespace std;
    //   int main(){
    //      int arr[]={82,82,63,82,62,62,22};
    //      for(int i=0;i<7;i++){
    //        bool dup=false;
    //        for(int j=i+1;j<7;j++){
    //         if(arr[i]==arr[j]){
    //             arr[j]=-1;
    //             dup=true;
    //         }
    //        }
    //        if(dup && arr[i]!=-1){
    //           cout<<arr[i]<<" ";
    //        }

    //     if(!dup && arr[i]!=-1){
    //         cout<<arr[i]<<' ';
    //     }
    //      }
    //   }
    
        //   ------------------------------- duplicate find in array ------------------------------------------------

    # include <iostream>
    using namespace std;
    // int main(){
    //     int arr[]={10,34,23,10,34,54};
    //     for(int i=0;i<=5;i++){
    //         bool dup=false;
    //         for(int j=i+1;j<=5;j++){
    //             if(arr[i]==arr[j]){
    //                 arr[j]=-1;
                    
    //             }
    //         }
    //           if(arr[i]!=-1){
    //             cout<<arr[i];
    //           }
    //     }

    // }

    // frequenct count in array -----------------------------------

    //  int arr[]={10,34,23,10,34,54};
  
    //  for(int i=0;i<=5;i++){
    //        int count=1;
    //      for(int j=i+1;j<=5;j++){
         
    //         if(arr[i]==arr[j]){
    //             arr[j]=-1;
    //             count++;
    //         }
    //      }
    //      if(arr[i]!=-1){
    //         cout<<arr[i]<<"  "<<count;
             
    //      }
    //  }

    //    int arr[]={82,12,45,63,91};
    //    for(int i=0;i<5;i++){
    //     for(int j=i+1;j<5;j++){
    //         if(arr[i]<arr[j]){
    //             int temp=arr[i];
    //             arr[i]=arr[j];
    //             arr[j]=temp;
    //         }
    //     }
      
    //    }


    //      for(int i=0;i<5;i++){
    //         cout<<arr[i];
    //      }

    //  

    //    int arr[]={82,12,45,63,91};
    //    for(int i=0;i<5/2;i++){
    //     int temp=arr[i];
    //      arr[i]=arr[5-i-1];
    //      arr[5-i-1]=temp;
    //    }
    //    for(int i=0;i<5;i++){
    //     cout<<arr[i];
    //    }

    // int arr[]={10,20,21,20,10};
    // for(int i=0;i<5/2;i++){
    //     if(arr[i]!=arr[5-i-1]){
    //         cout<<"not a palindrome";
    //         return 0;
    //     }
    // }
    //     cout<<"palindrome";
    
    // }
  
    //    self refrencial structure 

    // struct info{
    //     string name;
    //     struct info *link;
    // };
    // int main(){
    //     info s1;
    //     info s2;

    //    s1.link=NULL;
    //    s1.name="yash";

    //    s2.link=NULL;
    //    s2.name="vansh";

    //    s2.link=&s1;
    //    cout<<s2.link->name;

    // }

    //   OOPs 

    //  class info{
    //  public: int a=10;
    //  string name;
    //     int rollno;
    //     char bg;
    //  };
    //  int main(){
    //     info obj;
    //     obj.name="yash";
    //     cout<<obj.name;
    //     cout<<obj.a;
    //  }

    // OOPs Encapsulation 
    
    //  class one(){
    //      int a;
    //     public: void show(int x){
    //       a=x;
    //       cout<<a;
    //     }                                         INcomplete
    //  };
    //  int main(){

    //  }

    //    Class and class object -------------------------------------

    //  class info {
    //  public:  int b=101;
    //     string name;
    //     int rollno;
    //     char bg;

    //  };
    //  int main(){
    //     info a;
    //     a.name="yash";
    //     a.rollno=33;
    //     cout<<a.name<<" "<<a.rollno;
    //     cout<<a.b;
    //  }

    //  OOPs Encapsulation -----------------------------------------------------

    // class info{
    //     int a;
    //   public:
    //   void name(int x){
    //     a=x;
    //     cout<<a;
    //   }
    // };
    // int main(){
    //     info var;
    //     int x=10;
    //     var.name(10);
    // }

    // Inheritance -------------------------------------------------------
 
    //  Single line Inheritance

    // class one{
    //     public: int a=101;
    // };
    // class two :public one
    // {
       
    // };

    // int main(){
    //     two obj;
    //     cout<<obj.a;
    // }

//    Multi-level Inheritance 

    // class one{
    //     public: int a=101;
    // };
    // class two :public one {
      
    // };
    // class three :public two{

    // };
    // int main(){
    //     three obj;
    //     cout<<obj.a;

    // }

    // Multiple Inheritance 

    // class one{
    //     public: int a=101;
    // };
    // class two{

    // };
    // class three :public two,public one{

    // };
    // int main(){
    //     three obj;
    //     cout<<obj.a;
    // }

    //   Hierarchical Inheritance

    //  class one{
    //     public: int a=101;
    //  };
    //  class two :public one{

    //  };
    //  class three :public one{

    //  };
    //  int main(){
    //     two obj;
    //     three obj1;
    //     cout<<obj.a;
    //     cout<<endl;
    //     cout<<obj1.a;
    //  }

    //   Private and public in OOPs ---------------------------------

    //  class one{
    //     int a=10;
    //    public:  
    //    string name;
    //    int rollno;
    //    char bg;
    //  };
    //  int main(){
    //     one obj;
    //     obj.name="yash";
    //     obj.rollno=21;
    //     cout<<obj.name<<"  "<<obj.rollno;
    //  }

    //  Incapsulation in OOPs

//   class one{
//     int a;
//     public: void show(int x){
//         a=x;
//         cout<<a;
//     }
//   };
//   int main(){
//     one obj;
//     obj.show(12);
//   }

//   Shallow Copy ------------------------------------

//   class one{
//     int a;
//     public:one(int x){
//       a=x;
//       cout<<a;
//     }
//     public:one(one &obj){
//          a=obj.a;
//          cout<<a;
//     }

//   };
//   int main(){
//     one obj(10);
//     one obj1(obj);
//   }

//   class one{
//     int *a;
//     public: one(int x){
//         a=new int;
//         *a=x;
//     }

//     public: one(one &obj){
//         a=new int;
//         *a=*obj.a;
//     }
//   };
//   int main(){
//     one obj(10);
//     one obj1(obj);
//   }

    // Shallow copy 

    // class one{
    //     int a;
    //     public: one(int x){
    //         a=x;
    //         cout<<a;
    //     }
    //     public: one(one &obj){
    //       a=obj.a;
    //       cout<<a;
    //     }
    // };
    // int main(){
    //     one obj(10);
    //     one obj2=(obj);
    // }

        // Deep Copy 
    
    //   class one{
    //     int *a;
    //     public: one(int x){
    //       a=new int;
    //       *a=x;
    //       cout<<a;
    //     }
    //     public:
    //     one(one &obj){
    //       a=new int;
    //       *a=*obj.a;
    //     }


    //   };

    //   int main(){
    //     one obj(10);
    //     one obj2(obj);
                 
    // }

    // Deep Copy 

    // class two{
    //   int *a;
    //   public: two(int x){
    //     a=new int;
    //     *a=x;
    //     cout<<*a;
    //   }
    //   public: two(two &obj){
    //     a=new int;
    //     *a=*obj.a;
    //     cout<<*a;
    //   }
    // };
    // int main(){
    //     two obj(10);
    //     two obj1(obj);
    // }

    // Function Overloading 

    // class one{
    //     public:void show(){
    //         cout<<"this is 1";
    //     }
    //     public: void show(int x){
    //         cout<<x;
    //     }
    // };
    // int main(){
    //     one obj;
    //     obj.show();
    //     obj.show(2);
    // }
 
    //   Operaters Overloading 
     
    //  class one{
    //     public: int value;
    //     public: one(int x=0){
    //         value=x;
    //     }
     
    //     one add(one obj){
    //       one temp;
    //       temp.value=value + obj.value;
    //       return temp;
    //     }
    //  };
    //  int main(){
    //     one obj1(10);
    //     one obj2(20);
    //     one obj3;
    //     obj3=obj2.add(obj1);
    //     cout<<obj3.value;
    //  }

        // Operatros overloading --------------------

    // class one{
    //     public: int value;
    //     one(int x=0){
    //      value=x;
    //     }
     
    //   one operator +(one obj)
    //   {
    //     one temp;
    //     temp.value=value+obj.value;
    //     return temp;

    //   }

    // };

    // int main(){
    //     one obj1(10);
    //     one obj2(20);
    //     one obj3;
    //     obj3=obj1+(obj2);
    //     cout<<obj3.value;
    // }


    // self refrential structure -----------------------------------------

    // struct info{
  
    //     string name;
        
    //     struct info *link;

    // };

    // int main(){

    //     info s1;
    //     info s2;

    //     s1.link=NULL;
    //     s1.name="ananya";

    //     s2.link=NULL;
    //     s2.name="abhishek";

    //     s1.link=&s2;
    //     cout<<s1.link->name;
  
    //     s2.link=&s1;
    //     cout<<s2.link->name;


    // }

    // Incapsulation -------------------------------

    // class info{

    //    int a;
    //    public: void show(int x){
    //     a=x;
    //     cout<<a;
    //    }

    // };

    // int main(){

    //     info obj;
    //     obj.show(10);
    // }

    // Inheritance -----------------------------------

    // class one{

    //     public: int a=50;
    // };

    // class two : public one
    // {

    //   public : int b=60;
    // };

    // class three :  public one
    // {
    //   public: int c=200;
    // };

    // int main(){
    //    three obj;
    //    two obj1;
    //    cout<<obj.a;
    //    cout<<obj1.a;
       
    // }

//     class one{
//         public : int a=10;
//     };
//     class two : virtual public one
// {
//     public : int b=20;
// };

// class three :  virtual public one
// {
    
// };
// class four :public two, public three
// {

// };

// int main(){
//     four obj;
//     cout<<obj.a;
// }

//   class A{
//     public: int a=10;

//     A(){
//        cout<<"A constructor";
//     }
//   };

//   class B : virtual public A
// {
//     public : B(){
//         cout<<"B constructor";
//     }
// };

// class C :  virtual public A
// {
//     public: C(){
//         cout<<"C constructor";
//     }
// };

// class D :public C,public B
// {
//    public : D(){
//     cout<<"D constructor";
//    }
// };
// int main(){

//     D obj;
//     cout<<obj.a;
// }

   
//   class one{
//     public: int g;
//     one(int x){
//        g=x;
//        cout<<g;
//     }

//     one(one &yoo){

//       g=yoo.g;
//       cout<<endl<<g;
//     }
//   };

//   int main(){
//    one obj(10);
//    one obj1(obj);
//   }

//    class one{

//     public : int *a;
//     one(int x){
//        a=new int;
//        *a=x;
//        cout<<*a;

//     }

//     one(one &obj){

//         a=new int;
//         *a=*obj.a;
//         cout<<*a;
//     }
//    };

//    int main(){

//     one obj(10);
//     one obj1(obj);
//    }

// class one{

//     public: void show(int a){


//         cout<<a;
//     }
//     public: void show(){
//        cout<<"this is a function";

//     }

//    };
   
//    int main(){
//     one obj;
//     obj.show(10);
//     obj.show();
//    }   

   
// class one{

//    public: int value;
//    one(int x=0){
//       value=x;
//    }

//       one add(one obj){
//        one temp;
//        temp.value=value+obj.value;
//        return temp;
//    }

// };

// int main(){
//    one obj1(10);
//    one obj2(20);
//    one obj3=obj1.add(obj2);

// }


// Operators Overloading 

// class one{
  
//     public: int value;
//     one(int x=0){
//         value=x;
//     }

//     one operator +(one obj){

//       one temp;
//       temp.value=value+obj.value;
//       return temp;

//     }


// };

// int main(){

//     one obj1(10);
//     one obj2(20);
//     one obj3=obj1+(obj2);
//     cout<<obj3.value;

// }

//   class hq{

//      public: virtual void show()=0;
    
//   };

//   class bhopal : public hq
//   {

//     public : void show(){

//         cout<<1200000;
//     }
// };

//     class indore : public hq
//     {
//        public:  void show(){
//         cout<<209384;
//        }
//     };

//     int main(){

//         hq *obj=new bhopal();
//         obj->show();
//         hq *obj1=new indore();
//         obj1->show();
//     }

//   class hq{

//       public: virtual void show()=0;

//   };

//   class bhopal :public hq
//   {
//       public: void show(){
//         cout<<"bhopal- City of Lakes";
//       }

//   };
//   class indore :public hq
//   {
//      public: void show(){
//         cout<<"indore- have a international cricket stadium";
//      }
//   };

//   int main(){
//     hq *obj=new bhopal();
//     obj->show();
//     hq *obj1=new indore();
//     obj1->show();
//   }


  

   











      




    




    
      

      
