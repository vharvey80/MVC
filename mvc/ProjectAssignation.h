using namespace System;

#ifndef proassH
#define proassH
//---------------------------------------------------------------------------

ref class TProjectAssignation
{
private:
	String^ MNumeroProject;
	String^ MNumeroEmploye;
	String^ MDateDebut;
	String^ MDateFin;
	String^ MRoleDansProjet;
public:
	TProjectAssignation();
	TProjectAssignation(String^, String^, String^, String^, String^);
	TProjectAssignation(const TProjectAssignation%);
	~TProjectAssignation();

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
	property String^ NumeroProjet
	{
		String^ get()
		{
			return MNumeroProject;
		}
		void set(String^ inProjet)
		{
			MNumeroProject = inProjet;
		}
	}
	property String^ DateDebut
	{
		String^ get()
		{
			return MDateDebut;
		}
		void set(String^ inDateDebut)
		{
			MDateDebut = inDateDebut;
		}
	}
	property String^ DateFin
	{
		String^ get()
		{
			return MDateFin;
		}
		void set(String^ inDateFin)
		{
			MDateFin = inDateFin;
		}
	}
	property String^ Role
	{
		String^ get()
		{
			return MRoleDansProjet;
		}
		void set(String^ inRole)
		{
			MRoleDansProjet = inRole;
		}
	}

};


#endif