using namespace System;

#ifndef proH
#define proH
//---------------------------------------------------------------------------

ref class TProject
{
private:
	String^ MNumeroProjet;
	String^ MTitle;
	String^ MDescription;
public:
	TProject();
	TProject(String^, String^, String^);
	TProject(const TProject%);
	~TProject();

	property String^ NumeroProjet
	{
		String^ get()
		{
			return MNumeroProjet;
		}
		void set(String^ inNumeroProjet)
		{
			MNumeroProjet = inNumeroProjet;
		}
	}
	property String^ Tilte
	{
		String^ get()
		{
			return MTitle;
		}
		void set(String^ inTitle)
		{
			MTitle = inTitle;
		}
	}
	property String^ Description
	{
		String^ get()
		{
			return MDescription;
		}
		void set(String^ inDescription)
		{
			MDescription = inDescription;
		}
	}

};


#endif