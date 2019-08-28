#include <string>
#include <iostream>
#include "strFuncs.h"
#include "tddFuncs.h"
using namespace std;

void testisAnagram();
void testisAnagram(){
	string s11 = "ab cd!ef";
	string s21 = "AF,Bd eccf";
	bool expected1 = false;
	bool actual1 = isAnagram(s11,s21);
	assertTrue(!actual1,"s1:ab cd!ef, s2: AF,Bd eccf");

	string s12 = "ABCde f";
	string s22 = "F,a,c!b.e,D";
	bool expected2 = true;
	bool actual12 = isAnagram(s12,s22);
	assertTrue(actual2,"s1:ABCde f, s2: F,a,c!b.e,D");
}

void testisPalindrome();
void testisPalindrome(){
	const string sa = "ABCcba";
	bool expecteda = true;
	bool actuala = isPalindrome(sa);
	assertTrue(actuala,"");

	const string sb = "ABCdef";
	bool expectedb = false;
	bool actualb = isPalindrome(sb);
	assertTrue(!actualb,"");
}

int main(){
	testisAnagram();
	testisPalindrome();
}



