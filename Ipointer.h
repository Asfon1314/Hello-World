#ifdef IPOINTER_EXPORT
#define IPOINTER _declspec(dllexport)
#else
#define IPOINTER _declspec(dllimport)
#endif

class IPOINTER Ipoint
{
public:
	int GetPoint();
	void Foo();
};