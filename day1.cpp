#include <iostream>
using namespace std;
// CODE 2 typecasting checking uppercase and lowercase
// int main() {
//     char ch;
//     cin>>ch;
//     if (ch>='A' and ch<='Z'){
//         cout<<"Uppercase"<<endl;}
//     else if (ch>='a' and ch<='z') {
//         cout <<"Lowercase"<<endl;
//     }
// }
// code 3 squareroot
// int main(){
// int val;
// cin>>val;
// int i=0;
// while (i*i<=val) {
//     i+=1;
// }
// double j=0.0;
// while((i+j-1)*(i+j-1)<val){
//     j+=1.0/10;
// }
// double k=0.00;
// while((i+j+k-1-0.1)*(i+j+k-1-0.1)<val){
//     k+=1.0/100;
// }
// cout<<"square root:"<<i+j+k-1-0.1-0.01<<endl;
// }
// int main(){
//     cout<<sizeof(int)<<endl;
// }
// code: reverse a number
int main(){
    int k;
    cin>>k;
    string m=to_string(k);
    string l="";
    
    for (int i=m.size()-1;i>=0;i--){
        l+=m[i];
    }
    cout<<l<<endl;
}
// code : pattern
// int main(){
//     for (int i=0;i<=4;i++) {
//         for (int j =0;j<i;j++){
//             if ((i+j)%2==0){
//                 cout<<"0 ";
//             }
//             else{
//                 cout<<"1 ";
//             }

//         }
//         cout<<" "<<endl;
//     }
// }