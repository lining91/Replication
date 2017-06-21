
#include <string.h>
//	Ç³¸´ÖÆ

class CShallowRep{
public:
	CShallowRep(char* pValue, int nValue)
	{
		strcpy(pName, pValue);
		nAge = nValue;
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