 
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
 
int  main()
{
	stack<int> s;
	int num;
 
	cout<<"------Test for Stack-------"<<endl;
	cout<<"Input number:"<<endl;
	
	while(cin>>num)
	{
		s.push(num);
	}
 
	cout<<"The Stack has "<<s.size()<<" numbers.They are:"<<endl;
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		//int b=s.pop();注意pop()这里弹出但不返回，与c中不同
        s.pop();//cout << b << " ";

    }
    cout<<"\nNow the size is "<<s.size()<<endl;
	system("Pause");
    return 0;
}
