#include <iostream>
#include <string>
using namespace std;

#include "ShallowReplication.h"
#include "DeepReplication.h"

void main()
{
	//	ǳ���Ʋ���
	//CShallowRep pShallowRep( "xiaoming", 30 );

	//CShallowRep pShallowRep_2(pShallowRep);	//	���е��˻ᱨ��
	//pShallowRep.Show();
	//pShallowRep_2.Show();

	//	��Ʋ���

	CDeepRep pDeepRep( "xiaoming", 30 );

	CDeepRep pDeepRep_2(pDeepRep);
	pDeepRep.Show();
	pDeepRep_2.setName( "xiaoqiang" );
	pDeepRep_2.Show();


	system("pause");
	return;
}