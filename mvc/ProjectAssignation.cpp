#include "ProjectAssignation.h"

TProjectAssignation::TProjectAssignation()
{
	MNumeroProject = "";
	MNumeroEmploye = "";
	MDateDebut = "";
	MDateFin = "";
	MRoleDansProjet = "";
}
TProjectAssignation::TProjectAssignation(String^ inNumEmpl, String^ inNumPro, String^ inDateDebut, String^ inDateFin, String^ inRole)
{
	MNumeroProject = inNumPro;
	MNumeroEmploye = inNumEmpl;
	MDateDebut = inDateDebut;
	MDateFin = inDateFin;
	MRoleDansProjet = inRole;
}
TProjectAssignation::TProjectAssignation(const TProjectAssignation% inAssignation)
{
	MNumeroProject = inAssignation.MNumeroEmploye;
	MNumeroEmploye = inAssignation.MNumeroProject;
	MDateDebut = inAssignation.MDateDebut;
	MDateFin = inAssignation.MDateFin;
	MRoleDansProjet = inAssignation.MRoleDansProjet;
}
TProjectAssignation::~TProjectAssignation()
{}

