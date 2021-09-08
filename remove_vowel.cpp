/* main-maim,heel-heel,cat-ct*/

#include <iostream>
#include<string.h>
#include <bits/stdc++.h>

using namespace std;


bool checkVowel(char c)
{
   
    return (c == 'a') || (c == 'e') || 
           (c == 'i') || (c == 'o') || 
           (c == 'u');
}
  

string removeVowel(string str)
{
   int l = sizeof(str);
   string removed="";
   stack <int> myStack;  
   myStack.push(str[0]);
   vector<char> vowels = {'a', 'e', 'i', 'o', 'u',};
  
   
    for (int i = 1; i<l; i++)
       { 
           if ((checkVowel(str[i - 1])) && (checkVowel(str[i])))
             {
                 return str;
                 
             }
       }
    for (int i = 0; i < str.length(); i++){
            if (find(vowels.begin(), vowels.end(), str[i]) != vowels.end())
             {
                 str = str.replace(i, 1, "");
                 i -= 1;
             }
             
       }
       return str;


            

}


int main(){
    string mystr="run";
    mystr=removeVowel(mystr);
    cout<<mystr;

    
}
