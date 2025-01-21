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


   
    