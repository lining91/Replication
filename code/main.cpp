#include <iostream>
#include <string>
using namespace std;

#include "ShallowReplication.h"
#include "DeepReplication.h"

void main()
{
	//	浅复制测试
	//CShallowRep pShallowRep( "xiaoming", 30 );

	//CShallowRep pShallowRep_2(pShallowRep);	//	运行到此会报错
	//pShallowRep.Show();
	//pShallowRep_2.Show();

	//	深复制测试

	CDeepRep pDeepRep( "xiaoming", 30 );

	CDeepRep pDeepRep_2(pDeepRep);
	pDeepRep.Show();
	pDeepRep_2.setName( "xiaoqiang" );
	pDeepRep_2.Show();


	system("pause");
	return;
}