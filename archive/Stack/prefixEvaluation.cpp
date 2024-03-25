#include <iostream>
#include <stack>
#include <math.h>
#include <string>
using namespace std;

int prefixEvaluation(string s){
	stack <int> stk;
	for(int i=s.length()-1;i>=0;i--){
		// if the element is digit push it to stack
		if(isdigit(s[i])){
			stk.push(s[i]-'0');
		} else {
			// else pop the top 2 elemetts and do the evaulution
			int opr1 = stk.top();
			stk.pop();
			int opr2 = stk.top();
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
	cout<<prefixEvaluation("-+7*45+20");
}
