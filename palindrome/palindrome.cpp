// palindrome.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <ctype.h>
#include <stack>
#include <deque>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	string temp = "R a321 c e c 123ar";
	queue<char> forward;
	stack<char> backward;
	int i = 0;
	while (i <= temp.length()) {
		if (isalnum(temp[i]) && temp[i] != ' ') {
			//store the string forward
			forward.push(tolower(temp[i]));
			//store the string backward
			backward.push(tolower(temp[i]));
			
		}
		i++;
	}

	//check if it is a palindrome
	while (!forward.empty()) {
		if (forward.front() != backward.top()) {
			cout << temp << " is a not palindrome!" << endl;
			system("pause");
			return 0;
		}
		else {
			//check the next elements
			forward.pop();
			backward.pop();
		}
	}
	cout << "The string: " << temp << " is a palindrome!" << endl;
	system("pause");
    return 0;
}

