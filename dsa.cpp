// #include<iostream>
// using namespace std;
// bool checkPalindrome(string str , int i){
//     if(i>=str.length()/2) return true;
//     if(str[i]!=str[str.length()-i-1]) return false;
//     return checkPalindrome(str,i+1);
// }
// int main(){
//     string str;
//     cout<<"Enter the string : ";
//     cin>>str;
//     checkPalindrome(str , 0) ? cout<<"Palindrome" : cout<<"Not Palindrome";
// }




// Sorting
// 1 >_ Bubble Sort
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of elements : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elemnts : ";
//     for(int i=0;i<n;i++)
//         cin>>arr[i];

//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j])
//                 swap(arr[i],arr[j]);
//         }
//     }

//     cout<<"Array after Bubble Sort : "<<endl;

//     for(int i=0;i<n;i++)
//         cout<<arr[i]<<" ";
// }




// 2 >_ Selection Sort
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of elements : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elemnts : ";
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
    
//     for(int i=0;i<n-1;i++){
//         int minpos=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minpos])               
//                 minpos=j;
//         }
//         swap(arr[i] , arr[minpos]);        
        
//     }
//     cout<<"Array after Selection Sort : "<<endl;

//     for(int i=0;i<n;i++)
//         cout<<arr[i]<<" ";
// }







// 3 >_ Insertion Sort
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elemnts : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }                       
        }
    }
    cout<<"Array after Insertion Sort : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}


