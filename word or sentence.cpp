#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50];
    int sen=0,word=0,i; 
    cout << "Enter a string : ";
    gets(str);
    for (i = 0; str[i] != '\0';i++)
    {
        if (str[i] == ' '){
            word++;    
        }
        if (str[i] == '.'){
        	sen++;
		}
    }
    if(word==0){
    	sen=1;
	}
    cout << "Number of words in the string are: " <<word + 1;
    cout << "\nNumber of sentences in the string are: "<<sen;
    return 0;
}