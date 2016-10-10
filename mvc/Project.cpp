#include "Project.h"

TProject::TProject()
{
	MNumeroProjet = "";
	MTitle = "";
	MDescription = "";
}
TProject::TProject(String^ inNumeroProjet, String^ inTitle, String^ inDescription)
{
	MNumeroProjet = inNumeroProjet;
	MTitle = inTitle;
	MDescription = inDescription;
}
TProject::TProject(const TProject% inProjet)
{
	MNumeroProjet = inProjet.MNumeroProjet;
	MTitle = inProjet.MTitle;
	MDescription = inProjet.MDescription;
}
TProject::~TProject()
{}

