#pragma once

#include <msclr\marshal_cppstd.h>
#include <sstream>
#include "Simhead.h"


namespace ConsoleApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace msclr::interop;

	/// <summary>
	/// Description résumée de form_main
	/// </summary>
	public ref class form_main : public System::Windows::Forms::Form
	{
	public:
		form_main(void)
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
		~form_main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ g_output;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->g_output = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g_output))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 233);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Durée de la simulation :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 264);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Durée entre deux clients :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(211, 230);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &form_main::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(211, 261);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &form_main::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 293);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Durée de ttt d\'un client : ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(211, 290);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(353, 248);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 44);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Addition";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form_main::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(592, 45);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(604, 300);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			// 
			// g_output
			// 
			chartArea3->Name = L"ChartArea1";
			this->g_output->ChartAreas->Add(chartArea3);
			this->g_output->Location = System::Drawing::Point(55, 45);
			this->g_output->Name = L"g_output";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Name = L"Series1";
			this->g_output->Series->Add(series3);
			this->g_output->Size = System::Drawing::Size(487, 158);
			this->g_output->TabIndex = 8;
			this->g_output->Text = L"chart1";
			this->g_output->Click += gcnew System::EventHandler(this, &form_main::chart1_Click);
			// 
			// form_main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1208, 701);
			this->Controls->Add(this->g_output);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"form_main";
			this->Text = L"form_main";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g_output))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


		System::String^ s_nb_1 = textBox1->Text;
		System::String^ s_nb_2 = textBox2->Text;
		System::String^ s_nb_3 = textBox3->Text;

		msclr::interop::marshal_context context;
		std::string chaine1 = context.marshal_as<std::string>(s_nb_1);
		std::string chaine2 = context.marshal_as<std::string>(s_nb_2);
		std::string chaine3 = context.marshal_as<std::string>(s_nb_3);

		// autre sol
		int nb1 = -1;
		int nb2 = -1;
		int nb3 = -1;
		std::istringstream(chaine1) >> nb1;
		std::istringstream(chaine2) >> nb2;
		std::istringstream(chaine3) >> nb3;

		T_system mysys;

		if (nb1 != -1 && nb2 != -1 && nb3 != -1)
		{
			mysys.duree_sim = nb3; // définition de la duree de sim 
			richTextBox1->Text = "Début simulation";

			simuler(nb1, nb2, nb3, mysys, richTextBox1);

			richTextBox1->Text = "Fin simulation";
		}

		
		int nb_res = nb1 + nb2;


		//// le res. en string
		//std::stringstream chaine_res;
		//chaine_res << nb_res;
		//std::string chaine_res_string = chaine_res.str();

		//System::String^ s_nb_res = marshal_as<String^>(chaine_res_string);

		//textBox3->Text = s_nb_res;




	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
