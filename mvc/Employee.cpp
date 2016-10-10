#include "Employee.h"

TEmploye::TEmploye()
{
	MNumeroEmploye = "";
	MNomEmploye = "";
	MFormation = "";
}
TEmploye::TEmploye(String^ inNom, String^ inFormation, String^ inNumero)
{
	MNumeroEmploye = inNumero;
	MNomEmploye = inNom;
	MFormation = inFormation;
}
TEmploye::TEmploye(const TEmploye% inEmployee)
{
	MNumeroEmploye = inEmployee.MNumeroEmploye;
	MNomEmploye = inEmployee.MNomEmploye;
	MFormation = inEmployee.MFormation;
}
TEmploye::~TEmploye()
{}

