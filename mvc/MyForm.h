#pragma once

//#include <time.h>
#include "Employee.h"
#include "Project.h"
#include "ProjectAssignation.h"
#include "Controleur.h"


#include <cliext/vector>
#include <cliext/algorithm>

namespace Travail_1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cliext;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

		vector<TEmploye^>^ TableauEmploye;
		vector<TProject^>^ TableauProjet;
		vector<TProjectAssignation^>^ TableauAssignation;
		TControleur^ LeControleur;

	private: System::Windows::Forms::ComboBox^  cmb_employes;


	private: System::Windows::Forms::Label^  lbl_employe;
	private: System::Windows::Forms::TextBox^  txt_no_employe;
	private: System::Windows::Forms::TextBox^  txt_recherche;




	private: System::Windows::Forms::TextBox^  txt_formation;

	private: System::Windows::Forms::TextBox^  txt_nom_employe;

	private: System::Windows::Forms::Label^  lbl_numero;
	private: System::Windows::Forms::Label^  lbl_nom;
	private: System::Windows::Forms::Label^  lbl_formation;
	private: System::Windows::Forms::Button^  btn_recherche;
	private: System::Windows::Forms::Button^  btn_RechercheProjet;
	private: System::Windows::Forms::Label^  lbl_RechercheProjet;
	private: System::Windows::Forms::Label^  lbl_DescriptionProjet;
	private: System::Windows::Forms::Label^  lbl_TitreProjet;
	private: System::Windows::Forms::Label^  lbl_NoProjet;
	private: System::Windows::Forms::TextBox^  txt_TitreProjet;
	private: System::Windows::Forms::TextBox^  txt_DescriptionProjet;
	private: System::Windows::Forms::TextBox^  txt_RechercheProjet;
	private: System::Windows::Forms::TextBox^  txt_NoProjet;
	private: System::Windows::Forms::Label^  lbl_Projet;
	private: System::Windows::Forms::ComboBox^  cmb_Projet;
	private: System::Windows::Forms::Button^  btn_AjoutAssignation;
	private: System::Windows::Forms::Label^  lbl_DateDebut;
	private: System::Windows::Forms::TextBox^  txt_DateDebut;
	private: System::Windows::Forms::Label^  lbl_DateFin;
	private: System::Windows::Forms::TextBox^  txt_DateFin;
	private: System::Windows::Forms::Label^  lbl_Role;
	private: System::Windows::Forms::TextBox^  txt_Role;
	private: System::Windows::Forms::ListBox^  lst_emp;
	private: System::Windows::Forms::Button^  btn_afficher_emp;
	private: System::Windows::Forms::Button^  btn_afficher_projet;

	private: System::Windows::Forms::ListBox^  lst_projet;


	private: System::Windows::Forms::Label^  lbl_recherche;

		

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->cmb_employes = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_employe = (gcnew System::Windows::Forms::Label());
			this->txt_no_employe = (gcnew System::Windows::Forms::TextBox());
			this->txt_recherche = (gcnew System::Windows::Forms::TextBox());
			this->txt_formation = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_employe = (gcnew System::Windows::Forms::TextBox());
			this->lbl_numero = (gcnew System::Windows::Forms::Label());
			this->lbl_nom = (gcnew System::Windows::Forms::Label());
			this->lbl_formation = (gcnew System::Windows::Forms::Label());
			this->lbl_recherche = (gcnew System::Windows::Forms::Label());
			this->btn_recherche = (gcnew System::Windows::Forms::Button());
			this->btn_RechercheProjet = (gcnew System::Windows::Forms::Button());
			this->lbl_RechercheProjet = (gcnew System::Windows::Forms::Label());
			this->lbl_DescriptionProjet = (gcnew System::Windows::Forms::Label());
			this->lbl_TitreProjet = (gcnew System::Windows::Forms::Label());
			this->lbl_NoProjet = (gcnew System::Windows::Forms::Label());
			this->txt_TitreProjet = (gcnew System::Windows::Forms::TextBox());
			this->txt_DescriptionProjet = (gcnew System::Windows::Forms::TextBox());
			this->txt_RechercheProjet = (gcnew System::Windows::Forms::TextBox());
			this->txt_NoProjet = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Projet = (gcnew System::Windows::Forms::Label());
			this->cmb_Projet = (gcnew System::Windows::Forms::ComboBox());
			this->btn_AjoutAssignation = (gcnew System::Windows::Forms::Button());
			this->lbl_DateDebut = (gcnew System::Windows::Forms::Label());
			this->txt_DateDebut = (gcnew System::Windows::Forms::TextBox());
			this->lbl_DateFin = (gcnew System::Windows::Forms::Label());
			this->txt_DateFin = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Role = (gcnew System::Windows::Forms::Label());
			this->txt_Role = (gcnew System::Windows::Forms::TextBox());
			this->lst_emp = (gcnew System::Windows::Forms::ListBox());
			this->btn_afficher_emp = (gcnew System::Windows::Forms::Button());
			this->btn_afficher_projet = (gcnew System::Windows::Forms::Button());
			this->lst_projet = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// cmb_employes
			// 
			this->cmb_employes->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmb_employes->FormattingEnabled = true;
			this->cmb_employes->Location = System::Drawing::Point(77, 10);
			this->cmb_employes->Name = L"cmb_employes";
			this->cmb_employes->Size = System::Drawing::Size(121, 21);
			this->cmb_employes->TabIndex = 0;
			this->cmb_employes->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cmb_employes_SelectedIndexChanged);
			// 
			// lbl_employe
			// 
			this->lbl_employe->AutoSize = true;
			this->lbl_employe->Location = System::Drawing::Point(13, 13);
			this->lbl_employe->Name = L"lbl_employe";
			this->lbl_employe->Size = System::Drawing::Size(58, 13);
			this->lbl_employe->TabIndex = 1;
			this->lbl_employe->Text = L"Employés :";
			// 
			// txt_no_employe
			// 
			this->txt_no_employe->Enabled = false;
			this->txt_no_employe->Location = System::Drawing::Point(77, 37);
			this->txt_no_employe->Name = L"txt_no_employe";
			this->txt_no_employe->Size = System::Drawing::Size(121, 20);
			this->txt_no_employe->TabIndex = 2;
			// 
			// txt_recherche
			// 
			this->txt_recherche->Location = System::Drawing::Point(341, 5);
			this->txt_recherche->Name = L"txt_recherche";
			this->txt_recherche->Size = System::Drawing::Size(208, 20);
			this->txt_recherche->TabIndex = 3;
			// 
			// txt_formation
			// 
			this->txt_formation->Enabled = false;
			this->txt_formation->Location = System::Drawing::Point(77, 89);
			this->txt_formation->Name = L"txt_formation";
			this->txt_formation->Size = System::Drawing::Size(121, 20);
			this->txt_formation->TabIndex = 4;
			// 
			// txt_nom_employe
			// 
			this->txt_nom_employe->Enabled = false;
			this->txt_nom_employe->Location = System::Drawing::Point(77, 63);
			this->txt_nom_employe->Name = L"txt_nom_employe";
			this->txt_nom_employe->Size = System::Drawing::Size(121, 20);
			this->txt_nom_employe->TabIndex = 5;
			// 
			// lbl_numero
			// 
			this->lbl_numero->AutoSize = true;
			this->lbl_numero->Location = System::Drawing::Point(13, 40);
			this->lbl_numero->Name = L"lbl_numero";
			this->lbl_numero->Size = System::Drawing::Size(53, 13);
			this->lbl_numero->TabIndex = 6;
			this->lbl_numero->Text = L"Numéro : ";
			// 
			// lbl_nom
			// 
			this->lbl_nom->AutoSize = true;
			this->lbl_nom->Location = System::Drawing::Point(13, 66);
			this->lbl_nom->Name = L"lbl_nom";
			this->lbl_nom->Size = System::Drawing::Size(35, 13);
			this->lbl_nom->TabIndex = 7;
			this->lbl_nom->Text = L"Nom :";
			// 
			// lbl_formation
			// 
			this->lbl_formation->AutoSize = true;
			this->lbl_formation->Location = System::Drawing::Point(13, 92);
			this->lbl_formation->Name = L"lbl_formation";
			this->lbl_formation->Size = System::Drawing::Size(59, 13);
			this->lbl_formation->TabIndex = 8;
			this->lbl_formation->Text = L"Formation :";
			// 
			// lbl_recherche
			// 
			this->lbl_recherche->AutoSize = true;
			this->lbl_recherche->Location = System::Drawing::Point(213, 13);
			this->lbl_recherche->Name = L"lbl_recherche";
			this->lbl_recherche->Size = System::Drawing::Size(122, 13);
			this->lbl_recherche->TabIndex = 9;
			this->lbl_recherche->Text = L"Recherche par numéro :";
			// 
			// btn_recherche
			// 
			this->btn_recherche->Location = System::Drawing::Point(216, 35);
			this->btn_recherche->Name = L"btn_recherche";
			this->btn_recherche->Size = System::Drawing::Size(333, 23);
			this->btn_recherche->TabIndex = 10;
			this->btn_recherche->Text = L"Recherche";
			this->btn_recherche->UseVisualStyleBackColor = true;
			this->btn_recherche->Click += gcnew System::EventHandler(this, &MyForm::btn_recherche_Click);
			// 
			// btn_RechercheProjet
			// 
			this->btn_RechercheProjet->Location = System::Drawing::Point(216, 185);
			this->btn_RechercheProjet->Name = L"btn_RechercheProjet";
			this->btn_RechercheProjet->Size = System::Drawing::Size(333, 23);
			this->btn_RechercheProjet->TabIndex = 21;
			this->btn_RechercheProjet->Text = L"Recherche";
			this->btn_RechercheProjet->UseVisualStyleBackColor = true;
			this->btn_RechercheProjet->Click += gcnew System::EventHandler(this, &MyForm::btn_RechercheProjet_Click);
			// 
			// lbl_RechercheProjet
			// 
			this->lbl_RechercheProjet->AutoSize = true;
			this->lbl_RechercheProjet->Location = System::Drawing::Point(213, 163);
			this->lbl_RechercheProjet->Name = L"lbl_RechercheProjet";
			this->lbl_RechercheProjet->Size = System::Drawing::Size(122, 13);
			this->lbl_RechercheProjet->TabIndex = 20;
			this->lbl_RechercheProjet->Text = L"Recherche par numéro :";
			// 
			// lbl_DescriptionProjet
			// 
			this->lbl_DescriptionProjet->AutoSize = true;
			this->lbl_DescriptionProjet->Location = System::Drawing::Point(13, 242);
			this->lbl_DescriptionProjet->Name = L"lbl_DescriptionProjet";
			this->lbl_DescriptionProjet->Size = System::Drawing::Size(66, 13);
			this->lbl_DescriptionProjet->TabIndex = 19;
			this->lbl_DescriptionProjet->Text = L"Description :";
			// 
			// lbl_TitreProjet
			// 
			this->lbl_TitreProjet->AutoSize = true;
			this->lbl_TitreProjet->Location = System::Drawing::Point(13, 216);
			this->lbl_TitreProjet->Name = L"lbl_TitreProjet";
			this->lbl_TitreProjet->Size = System::Drawing::Size(34, 13);
			this->lbl_TitreProjet->TabIndex = 18;
			this->lbl_TitreProjet->Text = L"Titre :";
			// 
			// lbl_NoProjet
			// 
			this->lbl_NoProjet->AutoSize = true;
			this->lbl_NoProjet->Location = System::Drawing::Point(13, 190);
			this->lbl_NoProjet->Name = L"lbl_NoProjet";
			this->lbl_NoProjet->Size = System::Drawing::Size(53, 13);
			this->lbl_NoProjet->TabIndex = 17;
			this->lbl_NoProjet->Text = L"Numéro : ";
			// 
			// txt_TitreProjet
			// 
			this->txt_TitreProjet->Enabled = false;
			this->txt_TitreProjet->Location = System::Drawing::Point(77, 213);
			this->txt_TitreProjet->Name = L"txt_TitreProjet";
			this->txt_TitreProjet->Size = System::Drawing::Size(121, 20);
			this->txt_TitreProjet->TabIndex = 16;
			// 
			// txt_DescriptionProjet
			// 
			this->txt_DescriptionProjet->Enabled = false;
			this->txt_DescriptionProjet->Location = System::Drawing::Point(77, 239);
			this->txt_DescriptionProjet->Name = L"txt_DescriptionProjet";
			this->txt_DescriptionProjet->Size = System::Drawing::Size(121, 20);
			this->txt_DescriptionProjet->TabIndex = 15;
			// 
			// txt_RechercheProjet
			// 
			this->txt_RechercheProjet->Location = System::Drawing::Point(341, 155);
			this->txt_RechercheProjet->Name = L"txt_RechercheProjet";
			this->txt_RechercheProjet->Size = System::Drawing::Size(208, 20);
			this->txt_RechercheProjet->TabIndex = 14;
			// 
			// txt_NoProjet
			// 
			this->txt_NoProjet->Enabled = false;
			this->txt_NoProjet->Location = System::Drawing::Point(77, 187);
			this->txt_NoProjet->Name = L"txt_NoProjet";
			this->txt_NoProjet->Size = System::Drawing::Size(121, 20);
			this->txt_NoProjet->TabIndex = 13;
			// 
			// lbl_Projet
			// 
			this->lbl_Projet->AutoSize = true;
			this->lbl_Projet->Location = System::Drawing::Point(13, 163);
			this->lbl_Projet->Name = L"lbl_Projet";
			this->lbl_Projet->Size = System::Drawing::Size(45, 13);
			this->lbl_Projet->TabIndex = 12;
			this->lbl_Projet->Text = L"Projets :";
			// 
			// cmb_Projet
			// 
			this->cmb_Projet->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmb_Projet->FormattingEnabled = true;
			this->cmb_Projet->Location = System::Drawing::Point(77, 160);
			this->cmb_Projet->Name = L"cmb_Projet";
			this->cmb_Projet->Size = System::Drawing::Size(121, 21);
			this->cmb_Projet->TabIndex = 11;
			this->cmb_Projet->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cmb_Projet_SelectedIndexChanged);
			// 
			// btn_AjoutAssignation
			// 
			this->btn_AjoutAssignation->Location = System::Drawing::Point(16, 344);
			this->btn_AjoutAssignation->Name = L"btn_AjoutAssignation";
			this->btn_AjoutAssignation->Size = System::Drawing::Size(533, 23);
			this->btn_AjoutAssignation->TabIndex = 22;
			this->btn_AjoutAssignation->Text = L"Assigner un employer à un projet";
			this->btn_AjoutAssignation->UseVisualStyleBackColor = true;
			this->btn_AjoutAssignation->Click += gcnew System::EventHandler(this, &MyForm::btn_AjoutAssignation_Click);
			// 
			// lbl_DateDebut
			// 
			this->lbl_DateDebut->AutoSize = true;
			this->lbl_DateDebut->Location = System::Drawing::Point(13, 321);
			this->lbl_DateDebut->Name = L"lbl_DateDebut";
			this->lbl_DateDebut->Size = System::Drawing::Size(66, 13);
			this->lbl_DateDebut->TabIndex = 24;
			this->lbl_DateDebut->Text = L"Date début :";
			// 
			// txt_DateDebut
			// 
			this->txt_DateDebut->Location = System::Drawing::Point(77, 318);
			this->txt_DateDebut->Name = L"txt_DateDebut";
			this->txt_DateDebut->Size = System::Drawing::Size(121, 20);
			this->txt_DateDebut->TabIndex = 23;
			// 
			// lbl_DateFin
			// 
			this->lbl_DateFin->AutoSize = true;
			this->lbl_DateFin->Location = System::Drawing::Point(204, 321);
			this->lbl_DateFin->Name = L"lbl_DateFin";
			this->lbl_DateFin->Size = System::Drawing::Size(50, 13);
			this->lbl_DateFin->TabIndex = 26;
			this->lbl_DateFin->Text = L"Date fin :";
			// 
			// txt_DateFin
			// 
			this->txt_DateFin->Location = System::Drawing::Point(260, 318);
			this->txt_DateFin->Name = L"txt_DateFin";
			this->txt_DateFin->Size = System::Drawing::Size(121, 20);
			this->txt_DateFin->TabIndex = 25;
			// 
			// lbl_Role
			// 
			this->lbl_Role->AutoSize = true;
			this->lbl_Role->Location = System::Drawing::Point(387, 321);
			this->lbl_Role->Name = L"lbl_Role";
			this->lbl_Role->Size = System::Drawing::Size(35, 13);
			this->lbl_Role->TabIndex = 28;
			this->lbl_Role->Text = L"Rôle :";
			// 
			// txt_Role
			// 
			this->txt_Role->Location = System::Drawing::Point(428, 318);
			this->txt_Role->Name = L"txt_Role";
			this->txt_Role->Size = System::Drawing::Size(121, 20);
			this->txt_Role->TabIndex = 27;
			// 
			// lst_emp
			// 
			this->lst_emp->FormattingEnabled = true;
			this->lst_emp->Location = System::Drawing::Point(574, 187);
			this->lst_emp->Name = L"lst_emp";
			this->lst_emp->Size = System::Drawing::Size(340, 147);
			this->lst_emp->TabIndex = 29;
			// 
			// btn_afficher_emp
			// 
			this->btn_afficher_emp->Location = System::Drawing::Point(574, 344);
			this->btn_afficher_emp->Name = L"btn_afficher_emp";
			this->btn_afficher_emp->Size = System::Drawing::Size(340, 23);
			this->btn_afficher_emp->TabIndex = 30;
			this->btn_afficher_emp->Text = L"Afficher employé";
			this->btn_afficher_emp->UseVisualStyleBackColor = true;
			this->btn_afficher_emp->Click += gcnew System::EventHandler(this, &MyForm::btn_afficher_emp_Click);
			// 
			// btn_afficher_projet
			// 
			this->btn_afficher_projet->Location = System::Drawing::Point(574, 158);
			this->btn_afficher_projet->Name = L"btn_afficher_projet";
			this->btn_afficher_projet->Size = System::Drawing::Size(340, 23);
			this->btn_afficher_projet->TabIndex = 32;
			this->btn_afficher_projet->Text = L"Afficher projets";
			this->btn_afficher_projet->UseVisualStyleBackColor = true;
			this->btn_afficher_projet->Click += gcnew System::EventHandler(this, &MyForm::btn_afficher_projet_Click);
			// 
			// lst_projet
			// 
			this->lst_projet->FormattingEnabled = true;
			this->lst_projet->Location = System::Drawing::Point(574, 5);
			this->lst_projet->Name = L"lst_projet";
			this->lst_projet->Size = System::Drawing::Size(340, 147);
			this->lst_projet->TabIndex = 31;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(944, 382);
			this->Controls->Add(this->btn_afficher_projet);
			this->Controls->Add(this->lst_projet);
			this->Controls->Add(this->btn_afficher_emp);
			this->Controls->Add(this->lst_emp);
			this->Controls->Add(this->lbl_Role);
			this->Controls->Add(this->txt_Role);
			this->Controls->Add(this->lbl_DateFin);
			this->Controls->Add(this->txt_DateFin);
			this->Controls->Add(this->lbl_DateDebut);
			this->Controls->Add(this->txt_DateDebut);
			this->Controls->Add(this->btn_AjoutAssignation);
			this->Controls->Add(this->btn_RechercheProjet);
			this->Controls->Add(this->lbl_RechercheProjet);
			this->Controls->Add(this->lbl_DescriptionProjet);
			this->Controls->Add(this->lbl_TitreProjet);
			this->Controls->Add(this->lbl_NoProjet);
			this->Controls->Add(this->txt_TitreProjet);
			this->Controls->Add(this->txt_DescriptionProjet);
			this->Controls->Add(this->txt_RechercheProjet);
			this->Controls->Add(this->txt_NoProjet);
			this->Controls->Add(this->lbl_Projet);
			this->Controls->Add(this->cmb_Projet);
			this->Controls->Add(this->btn_recherche);
			this->Controls->Add(this->lbl_recherche);
			this->Controls->Add(this->lbl_formation);
			this->Controls->Add(this->lbl_nom);
			this->Controls->Add(this->lbl_numero);
			this->Controls->Add(this->txt_nom_employe);
			this->Controls->Add(this->txt_formation);
			this->Controls->Add(this->txt_recherche);
			this->Controls->Add(this->txt_no_employe);
			this->Controls->Add(this->lbl_employe);
			this->Controls->Add(this->cmb_employes);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 
				 LeControleur = gcnew TControleur;
				 CreerLesEmployes();
				 AbonnerEvenementsEmployes();

				 CreerLesProjets();
				 AbonnerEvenementsProjets();

				 CreerLesAssignations();
				 AbonnerEvenementsAssignations();

				 AjouterComboBox();
				 AjouterComboBoxProjet();
				 AbonnerEvenementsAffichageProjetPourEmploye();
				 AbonnerEvenementsAffichageEmployePourProjet();
	}
			 void CreerLesEmployes()
			 {
				 TableauEmploye = gcnew vector<TEmploye^>;
				 LeControleur->ReferencerLesEmployes(TableauEmploye);
				 LeControleur->InitialiserEmployes("Samuel Baillargeon", "programmeur", "Empl1");
				 LeControleur->InitialiserEmployes("Samuel Beaudoin", "analyste", "Empl200");
				 LeControleur->InitialiserEmployes("Keven Bilodeau", "programmeur", "Empl2");
				 LeControleur->InitialiserEmployes("Vincent Boucher", "programmeur", "Empl3");
				 LeControleur->InitialiserEmployes("M-Antoine Cayouette", "programmeur", "Empl4");
				 LeControleur->InitialiserEmployes("Sergio Chiraz", "programmeur", "Empl5");
				 LeControleur->InitialiserEmployes("Jonathan Dulac", "technicien", "Empl100");
				 LeControleur->InitialiserEmployes("Bryan DF", "analyste", "Empl201");
				 LeControleur->InitialiserEmployes("Gabriel FG", "programmeur-analyste", "Empl300");
				 LeControleur->InitialiserEmployes("Samuel Fortin", "programmeur-analyste", "Empl301");
				 LeControleur->InitialiserEmployes("J-Marc Grondin", "programmeur", "Empl6");
				 LeControleur->InitialiserEmployes("Vincent Harvey", "ingénieur", "Empl400");
				 LeControleur->InitialiserEmployes("J-Olivier Lessard", "programmeur-analyste", "Empl302");
				 LeControleur->InitialiserEmployes("P-Luc Poisson", "programmeur-analyste", "Empl303");
				 LeControleur->InitialiserEmployes("L-David Poulin", "programmeur", "Empl7");
				 LeControleur->InitialiserEmployes("Gabriel Roy", "programmeur", "Empl8");
				 LeControleur->InitialiserEmployes("M-Olivier Roy", "technicien", "Empl01");
				 LeControleur->InitialiserEmployes("Alex Veilleux", "ingénieur", "Empl401");
				 LeControleur->InitialiserEmployes("Emmanuel Veilleux", "programmeur", "Empl10");
				 LeControleur->InitialiserEmployes("Alex Vigneault", "analyste", "Empl202");
			 }
			 void CreerLesProjets()
			 {
				 TableauProjet = gcnew vector<TProject^>;
				 LeControleur->ReferencerLesProjets(TableauProjet);
				 LeControleur->InitialiserProjets("Projet101", "Messagerie", "Conception d'une petite application de messagerie interne");
				 LeControleur->InitialiserProjets("Projet201", "RobotGateau", "Conception d'un robot pour assembler les gateaux");
				 LeControleur->InitialiserProjets("Projet301", "GestionTemps", "Développement d'une application web servant à cumuler les temps travaillés");
				 LeControleur->InitialiserProjets("Projet401", "GestionProjets", "Développement d'une application servant à savoir qui travaille sur quel projet");
				 LeControleur->InitialiserProjets("Projet501", "Découpage", "Conception d'un robot pour découper des pièces de bois");
				 LeControleur->InitialiserProjets("Projet601", "Promotion", "Création d'une application web promotionnelle");
			 }
			 void CreerLesAssignations()
			 {
				 TableauAssignation = gcnew vector<TProjectAssignation^>;
				 LeControleur->ReferencerLesAssignations(TableauAssignation);
				 LeControleur->InitialiserAssignations("Empl1", "Projet101", "01-09-2015", "01-10-2015", "programmeur");
				 LeControleur->InitialiserAssignations("Empl303", "Projet101", "01-08-2015", "01-12-2015", "chargé de projet");
				 LeControleur->InitialiserAssignations("Empl10", "Projet101", "01-09-2015", "01-12-2015", "programmeur");
				 LeControleur->InitialiserAssignations("Empl6", "Projet101", "01-11-2015", "01-12-2015", "testeur");
				 LeControleur->InitialiserAssignations("Empl5", "Projet101", "01-10-2015", "01-12-2015", "programmeur");
				 LeControleur->InitialiserAssignations("Empl1", "Projet301", "01-10-2015", "01-11-2015", "programmeur");
				 LeControleur->InitialiserAssignations("Empl301", "Projet301", "01-09-2015", "15-09-2015", "analyste");
				 LeControleur->InitialiserAssignations("Empl301", "Projet301", "01-10-2015", "01-12-2015", "chargé de projet");
			 }

			 void AbonnerEvenementsEmployes()
			 {
				LeControleur->ErreurDansRecherche += gcnew System::EventHandler(this, &MyForm::ErreurLorsRechercheEmploye);
			 }
			 void AbonnerEvenementsProjets()
			 {
				 LeControleur->ErreurDansRechercheProjet += gcnew System::EventHandler(this, &MyForm::ErreurLorsRechercheProjet);
			 }
			 void AbonnerEvenementsAssignations()
			 {
				 LeControleur->ErreurDansAjoutAssignation += gcnew System::EventHandler(this, &MyForm::ErreurLorsAjoutAssign);
				 LeControleur->AjoutAssignationAvecSucces += gcnew System::EventHandler(this, &MyForm::AjouterAvecSucces);
			 }
			 void AbonnerEvenementsAffichageProjetPourEmploye()
			 {
				 LeControleur->MessagePasDeProjet += gcnew System::EventHandler(this, &MyForm::MessageNonProjet);
			 }
			 void AbonnerEvenementsAffichageEmployePourProjet()
			 {
				 LeControleur->MessagePasDemploye += gcnew System::EventHandler(this, &MyForm::MessageNonEmploye);
			 }

			 void AjouterComboBox()
			 {
				 String^ NomsEmployes = "";
				 for (int i = 0; i < TableauEmploye->size(); i++)
				 {
					 NomsEmployes = TableauEmploye->at(i)->Nom;
					 cmb_employes->Items->Add(NomsEmployes);
				 }
			 }

			 void AjouterComboBoxProjet()
			 {
				 String^ NomsProjets = "";
				 for (int i = 0; i < TableauProjet->size(); i++)
				 {
					 NomsProjets = TableauProjet->at(i)->Tilte;
					 cmb_Projet->Items->Add(NomsProjets);
				 }
			 }
	private: System::Void ErreurLorsRechercheEmploye(System::Object^  sender, System::EventArgs^  e) {
				 txt_recherche->Text = "";
				 MessageBox::Show("Le numéro d'employé que vous avez entré n'existe pas!");
	}
	private: System::Void ErreurLorsRechercheProjet(System::Object^  sender, System::EventArgs^  e) {
					txt_RechercheProjet->Text = "";
					MessageBox::Show("Le numéro de projet que vous avez entré n'existe pas!");
	}
	private: System::Void ErreurLorsAjoutAssign(System::Object^  sender, System::EventArgs^  e) {
					MessageBox::Show("L'assignation n'a pas fonctionnée car l'un des textboxs pour l'assignation est vide..");
	}
	private: System::Void AjouterAvecSucces(System::Object^  sender, System::EventArgs^  e) {
					MessageBox::Show("L'ajout c'est effectué avec succès!");
					txt_nom_employe->Text = "";
					txt_no_employe->Text = "";
					txt_formation->Text = "";
					txt_TitreProjet->Text = "";
					txt_NoProjet->Text = "";
					txt_DescriptionProjet->Text = "";
					cmb_employes->SelectedIndex = -1;
					cmb_Projet->SelectedIndex = -1;
					txt_DateDebut->Text = "";
					txt_DateFin->Text = "";
					txt_Role->Text = "";
	}
	private: System::Void MessageNonProjet(System::Object^  sender, System::EventArgs^  e) {
					MessageBox::Show("L'employé sélectionné n'a jamais eu ou n'a pas de projet en cours...");
	}
	private: System::Void MessageNonEmploye(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("Le projet sélectionné n'a pas ou n'a jamais eu d'employer assignés...");
	}

	private: System::Void cmb_employes_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 //String^ NomEmploye = cmb_employes->SelectedItem->ToString();
				 if (cmb_employes->SelectedIndex != -1)
				 {
					 String^ NomEmploye = cmb_employes->SelectedItem->ToString();
					 int Indice = LeControleur->AfficherInfosEmployeNom(NomEmploye);
					 txt_nom_employe->Text = TableauEmploye->at(Indice)->Nom;
					 txt_no_employe->Text = TableauEmploye->at(Indice)->NumeroEmploye;
					 txt_formation->Text = TableauEmploye->at(Indice)->Formation;
				 }
	}
	private: System::Void btn_recherche_Click(System::Object^  sender, System::EventArgs^  e) {
				 txt_nom_employe->Text = "";
				 txt_no_employe->Text = "";
				 txt_formation->Text = "";
				 cmb_employes->SelectedIndex = -1;
				 String^ NoEmploye = txt_recherche->Text->ToString();
				 int Indice = LeControleur->AfficherInfosEmployeNo(NoEmploye);
				 if (Indice != -1)
				 {
					 txt_nom_employe->Text = TableauEmploye->at(Indice)->Nom;
					 txt_no_employe->Text = TableauEmploye->at(Indice)->NumeroEmploye;
					 txt_formation->Text = TableauEmploye->at(Indice)->Formation;
				 }
	}
	private: System::Void cmb_Projet_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (cmb_Projet->SelectedIndex != -1)
				 {
					 String^ NomProjet = cmb_Projet->SelectedItem->ToString();
					 int Indice = LeControleur->AfficherInfosProjetNom(NomProjet);
					 txt_TitreProjet->Text = TableauProjet->at(Indice)->Tilte;
					 txt_NoProjet->Text = TableauProjet->at(Indice)->NumeroProjet;
					 txt_DescriptionProjet->Text = TableauProjet->at(Indice)->Description;
				 }
	}
	private: System::Void btn_RechercheProjet_Click(System::Object^  sender, System::EventArgs^  e) {
				 txt_TitreProjet->Text = "";
				 txt_NoProjet->Text = "";
				 txt_DescriptionProjet->Text = "";
				 cmb_Projet->SelectedIndex = -1;
				 String^ NoProjet = txt_RechercheProjet->Text->ToString();
				 int Indice = LeControleur->AfficherInfosProjetNo(NoProjet);
				 if (Indice != -1)
				 {
					 txt_TitreProjet->Text = TableauProjet->at(Indice)->Tilte;
					 txt_NoProjet->Text = TableauProjet->at(Indice)->NumeroProjet;
					 txt_DescriptionProjet->Text = TableauProjet->at(Indice)->Description;
				 }
	}
		 
	private: System::Void btn_AjoutAssignation_Click(System::Object^  sender, System::EventArgs^  e) {
				 LeControleur->VerifInfosAssignation(txt_no_employe->Text->ToString(), txt_NoProjet->Text->ToString(), txt_DateDebut->Text->ToString(), txt_DateFin->Text->ToString(), txt_Role->Text->ToString());
	}
	private: System::Void btn_afficher_emp_Click(System::Object^  sender, System::EventArgs^  e) {
				 vector<int>^ TableauNoEmp = LeControleur->RetournerIndicesEmploye(txt_NoProjet->Text->ToString());
				 for (int i = 0; i < TableauNoEmp->size(); i++)
				 {
					 lst_emp->Items->Add("----- " + TableauAssignation->at(TableauNoEmp->at(i))->NumeroEmploye + " -----");
					 int IndiceEmp = LeControleur->AfficherInfosEmployeNo(TableauAssignation->at(i)->NumeroEmploye);
					 lst_emp->Items->Add(TableauEmploye->at(IndiceEmp)->Nom);
					 lst_emp->Items->Add(TableauEmploye->at(IndiceEmp)->Formation);
					 lst_emp->Items->Add(TableauAssignation->at(TableauNoEmp->at(i))->DateDebut);
					 lst_emp->Items->Add(TableauAssignation->at(TableauNoEmp->at(i))->DateFin);
					 lst_emp->Items->Add(TableauAssignation->at(TableauNoEmp->at(i))->Role);
				 }
	}
	private: System::Void btn_afficher_projet_Click(System::Object^  sender, System::EventArgs^  e) {
				 vector<int>^ TableauNoProjet = LeControleur->RetournerIndicesProjet(txt_no_employe->Text->ToString());
				 for (int i = 0; i < TableauNoProjet->size(); i++)
				 {
					 lst_projet->Items->Add("----- " + TableauAssignation->at(TableauNoProjet->at(i))->NumeroProjet + " -----");
					 int IndiceProj = LeControleur->AfficherInfosProjetNo(TableauAssignation->at(i)->NumeroProjet);
					 lst_projet->Items->Add(TableauProjet->at(IndiceProj)->Tilte);
					 lst_projet->Items->Add(TableauProjet->at(IndiceProj)->Description);
					 lst_projet->Items->Add(TableauAssignation->at(TableauNoProjet->at(i))->DateDebut);
					 lst_projet->Items->Add(TableauAssignation->at(TableauNoProjet->at(i))->DateFin);
					 lst_projet->Items->Add(TableauAssignation->at(TableauNoProjet->at(i))->Role);
				 }
	}
};
}
