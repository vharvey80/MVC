#include "Controleur.h"

TControleur::TControleur()
{}

void TControleur::ReferencerLesEmployes(vector<TEmploye^>^ inLesEmployes)
{
	TableauEmploye = inLesEmployes;
}
void TControleur::ReferencerLesProjets(vector<TProject^>^inLesProjets)
{
	TableauProjet = inLesProjets;
}
void TControleur::ReferencerLesAssignations(vector<TProjectAssignation^>^inLesAssignations)
{
	TableauAssignation = inLesAssignations;
}

void TControleur::InitialiserEmployes(String^ inNom, String^ inFormation, String^ inNumero)
{
	TEmploye^ EmployeAAjouter = gcnew TEmploye(inNom, inFormation, inNumero);
	TableauEmploye->push_back(EmployeAAjouter);
}
void TControleur::InitialiserProjets(String^ inNumeroProjet, String^ inTitle, String^ inDescription)
{
	TProject^ ProjetAAjouter = gcnew TProject(inNumeroProjet, inTitle, inDescription);
	TableauProjet->push_back(ProjetAAjouter);
}
void TControleur::InitialiserAssignations(String^ inNumEmpl, String^ inNumPro, String^ inDateDebut, String^ inDateFin, String^ inRole)
{
	TProjectAssignation^ AssigantionAAjouter = gcnew TProjectAssignation(inNumEmpl, inNumPro, inDateDebut, inDateFin, inRole);
	TableauAssignation->push_back(AssigantionAAjouter);
}

int TControleur::AfficherInfosEmployeNom(String^ inNom)
{
	for (int i = 0; i < TableauEmploye->size(); i++)
	{
		if (TableauEmploye->at(i)->Nom == inNom)
		{
			return i;
		}
	}
}
int TControleur::AfficherInfosEmployeNo(String^ inNo)
{
	bool Find = false;
	for (int i = 0; i < TableauEmploye->size(); i++)
	{
		if (TableauEmploye->at(i)->NumeroEmploye == inNo)
		{
			return i;
			Find = true;
		}	
	}
	if (!Find)
		ErreurDansRecherche(this, gcnew EventArgs());
	return -1;
	// Tu as dit que c'est excellent de ne pas retourner -1 si le numéro n'est pas valide  "Marthe - 2015"
}
int TControleur::AfficherInfosProjetNom(String^ InTitre)
{
	for (int i = 0; i < TableauEmploye->size(); i++)
	{
		if (TableauProjet->at(i)->Tilte == InTitre)
		{
			return i;
		}
	}

}
int TControleur::AfficherInfosProjetNo(String^ inNo)
{
	bool Find = false;
	for (int i = 0; i < TableauProjet->size(); i++)
	{
		if (TableauProjet->at(i)->NumeroProjet == inNo)
		{
			return i;
			Find = true;
		}
	}
	if (!Find)
		ErreurDansRechercheProjet(this, gcnew EventArgs());
	return -1;
}
void TControleur::VerifInfosAssignation(String^ inNoEmp, String^ inNoProj, String^ inDateDebut, String^ inDateFin, String^ inRole)
{
	if (int TrouveNoEmp = AfficherInfosEmployeNo(inNoEmp) != -1)
	{
		if (int TrouveNoPro = AfficherInfosProjetNo(inNoProj) != -1)
		{
			if (inDateDebut != "" && inDateFin != "" && inRole != "")
			{
				InitialiserAssignations(inNoEmp, inNoProj, inDateDebut, inDateFin, inRole);
				AjoutAssignationAvecSucces(this, gcnew EventArgs());
			}
			else
				ErreurDansAjoutAssignation(this, gcnew EventArgs());
		}
	}
}
vector<int>^ TControleur::RetournerIndicesProjet(String^ inNoEmploye)
{
	vector<int>^ TableauIndicesProjet = gcnew vector<int>;
	if (int TrouverNoEmp = AfficherInfosEmployeNo(inNoEmploye) != -1)
	{
		for (int i = 0; i < TableauAssignation->size(); i++)
		{
			if (TableauAssignation->at(i)->NumeroEmploye == inNoEmploye)
			{
				TableauIndicesProjet->push_back(i);
			}
		}
	}
	if (TableauIndicesProjet->size() == 0)
		MessagePasDeProjet(this, gcnew EventArgs());

	return TableauIndicesProjet;
}
vector<int>^ TControleur::RetournerIndicesEmploye(String^ inNoProjet)
{
	vector<int>^ TableauIndicesEmp = gcnew vector<int>;
	if (int TrouverNoProj = AfficherInfosProjetNo(inNoProjet) != -1)
	{
		for (int i = 0; i < TableauAssignation->size(); i++)
		{
			if (TableauAssignation->at(i)->NumeroProjet == inNoProjet)
			{
				TableauIndicesEmp->push_back(i);
			}
		}
	}
	if (TableauIndicesEmp->size() == 0)
		MessagePasDemploye(this, gcnew EventArgs());

	return TableauIndicesEmp;
}