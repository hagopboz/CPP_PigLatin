#include<iostream>
#include <string>

using namespace std;
string piglatin(string);
string substr(string,int&);

int main() {
	string input;
	cout << "-----Pig Latin Translator-----\n" << "Enter phrase in English:\n";
	getline(cin,input);
	cout << "Piglatin: " << piglatin(input) << endl << endl;
	return 0;
}
string piglatin(string input) {

	int len=0,counter = 0,start = 0,stop = 0;
	string word="",newstring="";

	do {
		word=substr(input,start); 
		start++;                  
		newstring=newstring+word+" ";   
	} while(start < input.length());

	return newstring;
}
string substr(string s,int& n) {

	char word[50]="",suffix[2];
	int i=0;
	suffix[0]=s[n];    
	suffix[1]='\0';
	n++;

	while(s[n]!=' '&&s[n]!='\0') { 
		word[i]=s[n];
		n++;
		i++;
	}

	strcat(word,suffix); 
	strcat(word,"ay"); 

	return word;
}