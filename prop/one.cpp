// # include <iostream>
// using namespace std;
// int main(){
//     cout<<"this is a string"<<endl;
//     cout<<"hello this is yash";  
// }
   
//    -------------------------------------------------without multiple occurance-------------------------------------------------------


//  # include <iostream>
// using namespace std;
// int main() {
//     int arr[1,2,3,1,4];
//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<5;j++){
//             if(arr[i]==arr[j]){
//                 arr[j]=-1;
//                 arr[i]=-1;
//             }
//         }
//         if(arr[i]=-1 && ){
//             cout<<arr[i];
//         }
//     }
// }
  
    // ------------------------------------------ Palindrom ------------------------------------------------------------------

    //  # include <iostream>
    //  using namespace std;
    //  int main(){
    //     int arr[]={1,2,3,2,1}{

    //     }
    //  }


    //  ----------------------------------------- Question -------------------------------------------------------------

    //   # include <iostream>
    //   using namespace std;
    //   int main(){
    //     int count=0;
    //   int arr[]={1,2,3,2,1};
    //   int k=7;
    //   for(int i=0;i<5;i++){
    //     if(arr[i]==k)
    //     {   
    //         count++;
    //         cout<<"yes";
    //         return 0;
    //     }
    
    //   }
    //    if(count==0){
    //     cout<<"No";
    //    }
    //   }
  
   
//    ---------------------------------------------- Topic-Function -----------------------------------------------------

  
    //  Non-Return

    // 1

//   # include <iostream>
//   using namespace std;
//   void sum(int a,int b){
//     cout<<a+b;
//   }
//   int main(){
//     sum(10,20);
    
//   }


    //  2

//    # include <iostream>
//   using namespace std;
//   void sum(){
//     int a=10;
//     int b=20;
//     cout<<a+b;   
//   }
//   int main(){
//    sum();
//   }

    //   Reversing in string ---------------------------------     

    //  # include <iostream>
    //  using namespace std;

    //  void reverse(){
        
    //     string str={"yash"};
    //     int start=0;
    //     int end=(str.length())-1;
    //     while(start<end){
    //         int temp=s[start];
    //         s[start]=s[end];
    //         s[end]=temp;
    //         start++;
    //         end--;
    //     }
        
    //  }
    //  int main(){
    
    // reverse();
        
        
    //  }
 

//    # include <iostream>
//    using namespace std;
   
//     void palindrom(){
//     string str="yashcoder";

//     int start=0;
//     int end=str.length()-1;
//     int count=0;

//     while(start<end){

//        if(str[start]!=str[end]){
//           count++;
//         start++;
//         end--;
//     }
     
//    }
//    if(count==0){
//     cout<<"palindrom";
//    }
//    else{
//     cout<<"no palindrome";
//    }
//    }
//    int main(){

//     palindrom();
//    
        // Reversing string with while loop 
     
    // # include <iostream>
    // using namespace std;
    // void reverse(string &str){
    //   int start=0;
    //   int end=str.length()-1;
    //   while(start<end){
    //     char temp=str[start];
    //     str[start]=str[end];
    //     str[end]=temp;         
    //     start++;
    //     end--;
    //   }
      
    //  cout<<str;
    // }

    // int main(){
    //    string str="yash is the best";
    //     reverse(str);
    // }

    //   checking palindrome in string with while loop ---------------------------------

    //  # include <iostream>
    //  using namespace std;
    //  void palindrome(string &str){
    //     int start=0;
    //     int end=str.length();
    //     while(start<end){
    //         if(str[start]!=str[end-1]){
    //             cout<<"not a pallindrome number";
    //             return ;
    //         }
    //         start++;
    //         end--;
    //     }
    //     cout<<"the number is pallindrome";
    //  }
    //  int main(){
    //     string str="themadam";
    //     palindrome(str);
    //  }

    // Reversing in string -------------------

    # include <iostream>
    using namespace std;
    // void reverse(string str){
    //   int start=0;
    //   int end=str.length()-1;
    //   while(start<end){
    //     char temp=str[start];
    //     str[start]=str[end];
    //     str[end]=temp;
        
    //     start++;
    //     end--;
    // } 
    // cout<<str;
    // }
    // int main(){
    //     string str="python";
    //     reverse(str);

    // }

    // Reverse in string with for loop -----------------

    //  void reverse(string str){
    //     int n=str.length();
    //     for(int i=0;i<n/2;i++){
    //         char temp=str[i];
    //         str[i]=str[n-i-1];
    //         str[n-i-1]=temp;
    //     }
    //     cout<<str;
    //  }
    //  int main(){
    //     string str="this is a string";
    //     reverse(str);
    //  }

    //  checking palindrome in string ----------------------------------

    //   void palindrome(string str){
    //     int start=0;
    //     int end=str.length()-1;
    //     while(start<end){
    //         if(str[start]!=str[end]){
    //             cout<<"not a palindrome";
    //             return ;
          
    //         }
    //               start++;
    //             end--;
    //     }
    //     cout<<"palindrome";
    //   }
    //   int main(){
    //     string str="sir";
    //     palindrome(str);
    //   }

    //    balancing or not ----------------------

    // void bala(string str){
    //    int curly=0,circle=0,square=0;
    //    for(int i=0;i<str.length();i++){
    //      if(str[i]=="[") square++;
    //      else if(str[i]=="(")   circle++;                      
    //     //  else if(str[i]=="{")    curly++;                     Incomplete
    //      else if(str[i]==)

    //    }
    // }

    // int main(){
    //     string str="[({})]";
    //     bala(str);
    // }

    // --------------------------------------------------------------
    
    // Balanced or not ----------------------------------------

    // void bala(string str){
    //    int square=0,circle=0,curly=0;
    //     for(int i=0;i<str.length();i++){
    //         if(str[i]=='[')       square++;
    //         else if(str[i]=='(')  circle++;
    //         else if(str[i]=='{')  curly++;
    //         else if(str[i]==']')  square--;
    //         else if(str[i]==')')  circle--;
    //         else if(str[i]=='}')  curly--;

    //    }
    //    if(square==0 && circle==0 && curly==0){
    //     cout<<"balanced";
    //    }
    //    else{
    //     cout<<"not";
    //    }
    // }
    // int main(){
    //     string str="[({})]";
    //     bala(str);
    // }

    // Checking Anagram -----------------------------------------

    // if the length of both the string is equal and the charcters comes in one string should also come in the second string, 
    // their order of appearance can be different from one another.

    // void anagram(string str1,string str2){
      
    // if(str1.length()!=str2.length()){
    //     cout<<"not";
    //     return ;
    // }
    // int arr[256]={0};
    // for(int i=0;i<str1.length();i++){
    //     arr[str1[i]]++;
    //     arr[str2[i]]--;
    // }
    //  for(int i=0;i<256;i++){
    //     if(arr[i]!=0){
    //         cout<<"not";
    //         return ;
    //     }
        
    //  }
    //    cout<<"anagram";
    // }
    // int main(){
    //     string str1="sahiba";
    //     string str2="abirsa";
    //     anagram(str1,str2);
    // }

    