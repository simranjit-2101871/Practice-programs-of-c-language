/*Given two binary strings, return their sum (also a binary string).
Example:

Input:  a = "11", b = "1"
Output: "100" */
#include<iostream>
#include<algorithm>
using namespace std;

string addbinary(string s,string a){
    int diff=0;
    string padding;
    //is the size is different then this block will execute first otherwise the control will jump block after if statemant directly
    if(s.length()!=a.length()){
        if(s.length()<a.length()){
            diff=a.length()-s.length();
            for(int i=0;i<diff;i++){
                padding.push_back('0');
            }
            s=padding+s;
        }
        else{
            diff=s.length()-a.length();
             for(int i=0;i<diff;i++){
                padding.push_back('0');
            }
            a=padding+a;
        }
        
    }
    //now we will calcualte the sum of bianry bits
    char carry='0';
    string res;
    for(int i=a.length()-1;i>=0;i--){
        //now case one if both the bianry digit are 1
        if(a[i]==1 &&s[i]==1){
            if(carry=='0'){
                res.push_back('0');
                carry='1';
            }
            else{
                res.push_back('1');
                carry='1';
            }
            
        }
            //CASE-2.if both the digit are not equal
            if(a[i]!=s[i]){
                if(carry=='1'){
                    res.push_back('0');
                    carry='1';
                }
                else{
                    res.push_back('1');
                    carry-'1';
                }            
            }

            //CASE-3.if bothe digits are o
            if(a[i]=='0'&& s[i]==0){
                if(carry=='1'){
                    res.push_back('1');
                    carry='0';
                }
                else{
                    res.push_back('0');
                    carry='0';
                }            
            }
        
        
    }
    // If at the end their is carry then just   
    // add it to the result 
    if (carry == '1') 
        res.push_back(carry); 
    // reverse the result 
    reverse(res.begin(), res.end()); 
  
    /*// To remove leading zeroes 
    int index = 0; 
    while (index + 1 < res.length() &&  
           res[index] == '0') 
        index++;
        */ 
    return res; 
 

}

int main(){
    string a="0011";
    string b="0011";
    cout<<"THE resultant answere is ="<<addbinary(a,b);
    return 0;

}
