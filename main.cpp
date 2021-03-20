#include <iostream>
#include<stack>
#include<algorithm>
using namespace std;
//function to compare stack
bool is_pal(stack<char> p1,stack<char> p2)
{
  if(p1.size()!=p2.size())
     return false;

  while(!p1.empty())
  {
    if(p1.top()==p2.top())
    {
      p1.pop();p2.pop();
    }
    else 
       return false;
  }

  return true;
}
int main() {
  //variables
  string str="";
  stack<char> normal_stack;
  stack<char> reverse_stack;
  bool repeat = false;
  char choice;
  while(repeat != true)
  {
      //get input 
      cout<<"Enter your string"<<endl;
      cin>>str;
      //copy and reverse string 
      string reverse_str = str;
      reverse(reverse_str.begin(),reverse_str.end());
      // test case: cout<<"reverse string is "<< reverse_str;
      //store the string jnto a stack 
      for(int i=0;i<str.length();i++){
        normal_stack.push(str[i]);
        reverse_stack.push(reverse_str[i]);
      }
      if(is_pal(normal_stack,reverse_stack)==true)
        cout<<"The string you entered is a palindrome"<<endl;
      else
        cout<<"Sorry! This is not a palindrome"<<endl;
      cout<<"Do you want to enter another word(Y/N)?"<<endl;
      cin>>choice;
      if(toupper(choice)=='N')
        repeat = true;
     
  }
return 0;
}