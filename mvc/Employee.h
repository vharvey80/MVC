using namespace System;

#ifndef empH
#define empH
//---------------------------------------------------------------------------

ref class TEmploye
{
private:
	String^ MNumeroEmploye;
	String^ MNomEmploye;
	String^ MFormation;
public:
	TEmploye();
	TEmploye(String^, String^, String^);
	TEmploye(const TEmploye%);
	~TEmploye();

	property String^ NumeroEmploye
	{
		String^ get()
		{
			return MNumeroEmploye;
		}
		void set(String^ inNumeroEmp)
		{
			MNumeroEmploye = inNumeroEmp;
		}
	}
	property String^ Nom
	{
		String^ get()
		{
			return MNomEmploye;
		}
		void set(String^ inNom)
		{
			MNomEmploye = inNom;
		}
	}
	property String^ Formation
	{
		String^ get()
		{
			return MFormation;
		}
		void set(String^ inFormation)
		{
			MFormation = inFormation;
		}
	}

};


#endif