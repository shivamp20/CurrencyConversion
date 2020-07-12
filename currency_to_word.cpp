/* My program to print a given Amount of Currency in words. 
   The program handles till 9 digits numbers and 
   can be easily extended to 20 digit number */
#include <iostream>
#include<cmath>
#include<string>
#include<sstream> 
using namespace std; 
  
// Strings at index 0 is not used,For making Array Indexing Easy
string one[] = { "", "One ", "Two ", "Three ", "Four ", 
                 "Five ", "Six ", "Seven ", "Eight ", 
                 "Nine ", "Ten ", "Eleven ", "Twelve ", 
                 "Thirteen ", "Fourteen ", "Fifteen ", 
                 "Sixteen ", "Seventeen ", "Eighteen ", 
                 "Nineteen " }; 
  
 
string ten[] = { "", "", "Twenty ", "Thirty ", "Forty ", 
                 "Fifty ", "Sixty ", "Seventy ", "Eighty ", 
                 "Ninety " }; 
  
// Function for Extracting The Decimal Value
int decval(long double n)
{
	
	int num1;
	float temp;
	int res1;
	//logic for seperation of decimal value
	num1 = n;
	temp = n - num1;
        
	
	res1 = temp * 100;
	
	return res1;
} 

string numToWords(int n, string s) 
{ 
    string str = ""; 
    // if n is more than 19, divide it 
    if (n > 19) 
        str += ten[n / 10] + one[n % 10]; 
    else
        str += one[n]; 
  
    // if n is non-zero 
    if (n) 
        str += s; 
  
    return str; 
} 
  
// Function to print a given number in words 
string convertToWords(long n) 
{ 
    // stores word representation of given number n 
    string out;
    

    	 
    if(n == 0)
    {
      out += "Zero.";
    }

    //For digits at Ten Millions and Hundred Million Places 
    out += numToWords((n / 10000000), "Crore "); 
  
    
    //For digits at Hundred Thousands and One Millions Places 
    out += numToWords(((n / 100000) % 100), "Lakh "); 
  
    
    //For digits at Thousands and Tens Thousands Places 
    out += numToWords(((n / 1000) % 100), "Thousand "); 
  
    // For digit at Hundreds places (if any) 
    out += numToWords(((n / 100) % 10), "Hundred "); 
  
    if (n > 100 && n % 100) 
        out += "and "; 
  
    // For digits at Ones and Tens places (if any) 
    out += numToWords((n % 100), ""); 
  
    return out; 
} 
  

int main() 
{ 
    
    long double n;
    int res;
    string str2;
    
	cout<<"Enter the Number: "<<endl;
	cin>>n;
        
	if(n>1000000)
	{
		cout<<"Sorry Can't Handle That big Amount"<<endl;
		
	}
	else if(n<0)
	{
		cout<<"Amount Should Be Greater Than Zero"<<endl;
	}
	else if(floor(n) == n) 
	{
		cout <<"Rs."<<convertToWords(n)<< endl;
	}
	
      	else
	{        //int to string conversion
		 res = decval(n);
                 ostringstream str1; 
                 str1 << res;
                 str2 = str1.str();
 
  
    		// convert given number in words 
    		cout <<"Rs."<<convertToWords(n)<<str2<<"/100 Only"<< endl;
	} 
  
    return 0; 
} 
