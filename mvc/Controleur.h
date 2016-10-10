using namespace System;
#include <cliext/vector>
#include <cliext/algorithm>
#include "Employee.h"
#include "Project.h"
#include "ProjectAssignation.h"


using namespace cliext;

#ifndef consH
#define consH
//---------------------------------------------------------------------------

ref class TControleur
{
private:
	vector<TEmploye^>^ TableauEmploye;
	vector<TProject^>^ TableauProjet;
	vector<TProjectAssignation^>^ TableauAssignation;
public:
	TControleur();
	void ReferencerLesEmployes(vector<TEmploye^>^);
	void ReferencerLesProjets(vector<TProject^>^);
	void ReferencerLesAssignations(vector<TProjectAssignation^>^);

	void InitialiserEmployes(String^, String^, String^);
	void InitialiserProjets(String^, String^, String^);
	void InitialiserAssignations(String^, String^, String^, String^, String^);

	int AfficherInfosEmployeNom(String^);
	int AfficherInfosEmployeNo(String^);

	int AfficherInfosProjetNom(String^);
	int AfficherInfosProjetNo(String^);

	void VerifInfosAssignation(String^, String^, String^, String^, String^);
	vector<int>^ RetournerIndicesProjet(String^);
	vector<int>^ RetournerIndicesEmploye(String^);
	
	event EventHandler^ ErreurDansRecherche;
	event EventHandler^ ErreurDansRechercheProjet;
	event EventHandler^ ErreurDansAjoutAssignation;

	event EventHandler^ AjoutAssignationAvecSucces;

	event EventHandler^ MessagePasDeProjet;
	event EventHandler^ MessagePasDemploye;
};


#endif