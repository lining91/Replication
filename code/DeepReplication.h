#include <string.h>
//	���

class CDeepRep{
public:
	CDeepRep(char* pValue, int nValue)
	{
		pName = new char[strlen(pValue) + 1];	//	����pName���ڴ�
		strcpy(pName, pValue);
		nAge = nValue;
	}

	CDeepRep(const CDeepRep& rDeepRep)
	{
		nAge = rDeepRep.nAge;
		pName = new char[strlen(rDeepRep.pName) + 1];
		strcpy(pName, rDeepRep.pName);
	}

	~CDeepRep()
	{
		delete[] pName;
	}

	void Show( )
	{
		cout << " Name is : " << pName << endl;
		cout << " Age is : " << nAge << endl;
	}

	void setName( char* pValue )
	{
		strcpy( pName, pValue);
		pName = pValue;
	}

	void setAge( int nValue )
	{
		nAge = nValue;
	}
public:
	char* pName;
	int nAge;
};