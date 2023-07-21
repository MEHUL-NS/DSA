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

// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=5 ; i>0 ; i--){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }



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

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
        }
    }

    cout<<"Array after Bubble Sort : "<<endl;

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}