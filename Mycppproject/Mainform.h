#pragma once

namespace Mycppproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Mainform
	/// </summary>
	public ref class Mainform : public System::Windows::Forms::Form
	{
	public:
		Mainform(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Mainform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbFirstName;
	private: System::Windows::Forms::Label^ label2;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name";
			this->label1->Click += gcnew System::EventHandler(this, &Mainform::label1_Click_1);
			// 
			// tbFirstName
			// 
			this->tbFirstName->Font = (gcnew System::Drawing::Font(L"Segoe Print", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbFirstName->Location = System::Drawing::Point(26, 35);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->tbFirstName->Size = System::Drawing::Size(240, 27);
			this->tbFirstName->TabIndex = 1;
			this->tbFirstName->TextChanged += gcnew System::EventHandler(this, &Mainform::tbFirstName_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Last Name";
			this->label2->Click += gcnew System::EventHandler(this, &Mainform::label2_Click);
			// 
			// Mainform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(278, 261);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbFirstName);
			this->Controls->Add(this->label1);
			this->Name = L"Mainform";
			this->Text = L"Mainform";
			this->Load += gcnew System::EventHandler(this, &Mainform::Mainform_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Mainform_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbFirstName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
