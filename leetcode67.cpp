#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a ="110101";
    string b="1010";
    string s;
    int i=a.size()-1,j=b.size()-1;
    char carry='0';
    while(i>=0 && j>=0)
        {
           
            if(a[i]=='1' && b[j]=='1' && carry=='1')
            {
                s.push_back('1');
                carry='1';
                
            }
            else if(a[i]=='1' && b[j]=='1' && carry=='0')
            {
                s.push_back('0');
                carry='1';
            }
            else  if(a[i]=='1' && b[j]=='0' && carry=='1')
            {
                s.push_back('0');
                carry='1';
            }
            else  if(a[i]=='1' && b[j]=='0' && carry=='0')
            {
                s.push_back('1');
                carry='0';
            }
            else  if(a[i]=='0' && b[j]=='1' && carry=='1')
            {
                s.push_back('0');
                carry='1';
            }
            else  if(a[i]=='0' && b[j]=='1' && carry=='0')
            {
                s.push_back('1');
                carry='0';
            }
            else  if(a[i]=='0' && b[j]=='0' && carry=='1')
            {
                s.push_back('1');
                carry='0';
            }
            else  if(a[i]=='0' && b[j]=='0' && carry=='0')
            {
                s.push_back('0');
                carry='0';
            }
            i--;
            j--;
        }
        while(i>=0)
        {
            if(a[i]=='1' && carry=='1')
            {
                s.push_back('0');
                carry='1';
            }
            else if(a[i]=='1'&& carry=='0')
            {
                s.push_back('1');
                carry='0';
            }
            else if(a[i]=='0'  && carry=='1')
            {
                s.push_back('1');
                carry='0';
            }
            else if(a[i]=='0'  && carry=='0')
            {
                s.push_back('0');
                carry='0';
            }
            i--;
        }
        while(j>=0)
        {
            if(  b[j]=='1' && carry=='1')
            {
                s.push_back('0');
                carry='1';
            }
            else if(  b[j]=='1' && carry=='0')
            {
                s.push_back('1');
                carry='0';
            }
            else if(  b[j]=='0' && carry=='1')
            {
                s.push_back('1');
                carry='0';
            }
            else if(  b[j]=='0' && carry=='0')
            {
                s.push_back('0');
                carry='0';
            }
           j--;
        }
        if(carry=='1') s.push_back(carry);
        reverse(s.begin(),s.end());
        //print
        cout<<s;
}