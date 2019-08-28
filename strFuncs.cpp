#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */

bool isAnagram(string s1, string s2){
  string new_s1 = "";
  string new_s2 = "";
  for(int i = 0; i < s1.length();i++){
	if(isalpha(s1[i])){
		new_s1 += tolower(s1[i]);
	}
  }
  for(int j = 0l; j < s2.length();j++){
	if(isalpha(s2[j])){
		new_s2 += tolower(s2[j]);
	}
  }
 
  sort(new_s1.begin(),new_s2.end());
  sort(new_s2.begin(),new_s2.end());
  return(new_s1 == new_s2);
}








/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
	int length = s1.length();
	string new_s1 = "";
	for(int i = 0; i < length; i++){
		new_s1 += tolower(s1[length-i-1])；
	}
	return (new_s1==s1);
  
}


