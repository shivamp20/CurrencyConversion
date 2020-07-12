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
 
//Function For Seperating Decimal Value and Whole Value
int decval(double n)
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


//Handling The Values Input For Conversion
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


//Function For Conversion Of Number To Word
string convertToWords(long n) 
{ 
    // stores word representation of given number n 
    string out;
    if(n < 0)
    {
	out = "Amount Should Be Greater Than Zero";
    }

    else if(n > 9999999.99)
    {
	out = "Sorry Can't Handle That Big Amount";
    }

    
    else 
    { 
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
  
 

    }
    return out; 
}


//Function For Handling Corner Cases
string corner_case(long n)
{ string str = "";
  if(n == 0)
  {
     str += "Zero.";
  }
  else if(floor(n) == n) 
  {
	str += convertToWords(n);
  }
  return str;

}


//Function For Handling Amount With Decimal
string addDecVal(double n)
{
	int res;
        
        string str_dummy1; 
	res = decval(n);
        ostringstream str1;
	 
        str1 << res;
        str_dummy1 = str1.str();
        string str_dummy2 = convertToWords(n);
	string str_dummy3 = "/100 Only";
        
	string str_out = "";
	str_out = str_dummy2 + str_dummy1 + str_dummy3;
	return str_out;
}
