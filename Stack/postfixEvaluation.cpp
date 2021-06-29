#include <iostream>
#include <stack>
#include <math.h>
#include <string>
using namespace std;

int postfixEvaluation(string s){
	stack <int> stk;
	for(int i=0;i<s.length();i++){
		// if the element is digit push it to stack
		if(isdigit(s[i])){
			stk.push(s[i]-'0');
		} else {
			// else pop the top 2 elemetts and do the evaulution
            // order is imp
			int opr2 = stk.top();
			stk.pop();
			int opr1 = stk.top();
			stk.pop();
			switch (s[i])
			{
			case '+':
				stk.push(opr1+opr2);
				break;
			case '-':
				stk.push(opr1-opr2);
				break;
			case '*':
				stk.push(opr1*opr2);
				break;
			case '/':
				stk.push(opr1/opr2);
				break;
			case '^':
				stk.push(pow(opr1,opr2));
				break;	
			}
		}
	}
	return stk.top();
}
int main()
{
 ;
	cout<<postfixEvaluation("46+2/5*7+");
}
