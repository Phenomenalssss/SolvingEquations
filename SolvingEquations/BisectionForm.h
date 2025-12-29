#pragma once

namespace SolvingEquations {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class BisectionForm : public System::Windows::Forms::Form
	{
	public:
		property double FromNumber;
		property double ToNumber;
		property double Epsilon;
		property bool isFindAllRoots;

		BisectionForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			originalFormSize = this->Size;
			controlsInfo = gcnew System::Collections::Generic::Dictionary<System::Windows::Forms::Control^, ControlInfo^>();
			SaveControlsInfo(this);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~BisectionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Solve;
	private: System::Windows::Forms::TextBox^ ToNumberBox;
	public:	ref struct ControlInfo
	{
		System::Drawing::Rectangle Bounds;
		System::Drawing::Font^ Font;
	};

	private:
		System::Drawing::Size originalFormSize;
		System::Collections::Generic::Dictionary<System::Windows::Forms::Control^, ControlInfo^>^ controlsInfo;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ FromNumberBox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ EpsilonBox;
	private: System::Windows::Forms::CheckBox^ isFindAllRootsCheckBox;




	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Solve = (gcnew System::Windows::Forms::Button());
			this->ToNumberBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->FromNumberBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->EpsilonBox = (gcnew System::Windows::Forms::ComboBox());
			this->isFindAllRootsCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// Solve
			// 
			this->Solve->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Solve->Location = System::Drawing::Point(82, 265);
			this->Solve->Name = L"Solve";
			this->Solve->Size = System::Drawing::Size(308, 49);
			this->Solve->TabIndex = 40;
			this->Solve->Text = L"Найти корень";
			this->Solve->UseVisualStyleBackColor = true;
			this->Solve->Click += gcnew System::EventHandler(this, &BisectionForm::Solve_Click);
			// 
			// ToNumberBox
			// 
			this->ToNumberBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ToNumberBox->Location = System::Drawing::Point(283, 60);
			this->ToNumberBox->Name = L"ToNumberBox";
			this->ToNumberBox->Size = System::Drawing::Size(100, 39);
			this->ToNumberBox->TabIndex = 27;
			this->ToNumberBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &BisectionForm::Value_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(74, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(316, 25);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Введите пределы поиска корней";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(242, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 25);
			this->label4->TabIndex = 32;
			this->label4->Text = L"до";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(70, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 25);
			this->label3->TabIndex = 31;
			this->label3->Text = L"от";
			// 
			// FromNumberBox
			// 
			this->FromNumberBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FromNumberBox->Location = System::Drawing::Point(111, 60);
			this->FromNumberBox->Name = L"FromNumberBox";
			this->FromNumberBox->Size = System::Drawing::Size(100, 39);
			this->FromNumberBox->TabIndex = 26;
			this->FromNumberBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &BisectionForm::Value_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(82, 123);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(318, 25);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Введите необходимую точность";
			// 
			// EpsilonBox
			// 
			this->EpsilonBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->EpsilonBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EpsilonBox->FormattingEnabled = true;
			this->EpsilonBox->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"0.1", L"0.01", L"0.001", L"0.0001", L"0.00001",
					L"0.000001", L"0.0000001", L"0.00000001", L"0.000000001"
			});
			this->EpsilonBox->Location = System::Drawing::Point(87, 162);
			this->EpsilonBox->Name = L"EpsilonBox";
			this->EpsilonBox->Size = System::Drawing::Size(308, 40);
			this->EpsilonBox->TabIndex = 35;
			// 
			// isFindAllRootsCheckBox
			// 
			this->isFindAllRootsCheckBox->AutoSize = true;
			this->isFindAllRootsCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->isFindAllRootsCheckBox->Location = System::Drawing::Point(111, 215);
			this->isFindAllRootsCheckBox->MinimumSize = System::Drawing::Size(258, 36);
			this->isFindAllRootsCheckBox->Name = L"isFindAllRootsCheckBox";
			this->isFindAllRootsCheckBox->Size = System::Drawing::Size(258, 36);
			this->isFindAllRootsCheckBox->TabIndex = 36;
			this->isFindAllRootsCheckBox->Text = L"Найти все корни";
			this->isFindAllRootsCheckBox->UseVisualStyleBackColor = true;
			this->isFindAllRootsCheckBox->CheckedChanged += gcnew System::EventHandler(this, &BisectionForm::isFindAllRootsCheckBox_CheckedChanged);
			// 
			// BisectionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(473, 364);
			this->Controls->Add(this->isFindAllRootsCheckBox);
			this->Controls->Add(this->EpsilonBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->FromNumberBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ToNumberBox);
			this->Controls->Add(this->Solve);
			this->MinimumSize = System::Drawing::Size(495, 420);
			this->Name = L"BisectionForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Половинчатый метод";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &BisectionForm::BisectionForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &BisectionForm::Form1_Load);
			this->Resize += gcnew System::EventHandler(this, &BisectionForm::Form1_Resize);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void SaveControlsInfo(System::Windows::Forms::Control^ parent)
	{
		for each (System::Windows::Forms::Control ^ ctrl in parent->Controls)
		{
			ControlInfo^ info = gcnew ControlInfo();
			info->Bounds = ctrl->Bounds;
			info->Font = ctrl->Font;

			if (!controlsInfo->ContainsKey(ctrl))
			{
				controlsInfo->Add(ctrl, info);
			}

			if (ctrl->Controls->Count > 0)
				SaveControlsInfo(ctrl);
		}
	}

	private: System::Void ScaleControls()
	{
		float scaleX = (float)this->Width / originalFormSize.Width;
		float scaleY = (float)this->Height / originalFormSize.Height;

		for each (auto pair in controlsInfo)
		{
			System::Windows::Forms::Control^ ctrl = pair.Key;
			ControlInfo^ info = pair.Value;

			ctrl->Left = (int)(info->Bounds.Left * scaleX);
			ctrl->Top = (int)(info->Bounds.Top * scaleY);
			ctrl->Width = (int)(info->Bounds.Width * scaleX);
			ctrl->Height = (int)(info->Bounds.Height * scaleY);

			float newFontSize = info->Font->Size * Math::Min(scaleX, scaleY);
			ctrl->Font = gcnew System::Drawing::Font(
				info->Font->FontFamily,
				newFontSize,
				info->Font->Style
			);
		}
	}

	private: System::Boolean CannotKeyPress()
	{
		if (FromNumberBox->Text == "-" || ToNumberBox->Text == "-")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	private: System::Void Value_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != ',' && e->KeyChar != '-' && e->KeyChar != '\b')
		{
			e->Handled = true;
		}

		System::String^ t = safe_cast<System::Windows::Forms::TextBox^>(sender)->Text;
		if (e->KeyChar == ',' && (t->Length == 0 || t->Contains(",")))
		{
			e->Handled = true;
		}
		if (e->KeyChar == '-' && (t->Length > 0 || t->Contains("-")))
		{
			e->Handled = true;
		}
		if (e->KeyChar == ',' && t->Length == 1 && t->IndexOf('-') == 0)
		{
			e->Handled = true;
		}
	}

	private: System::Void Solve_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			if (System::String::IsNullOrEmpty(FromNumberBox->Text) || System::String::IsNullOrEmpty(ToNumberBox->Text) ||
				System::String::IsNullOrEmpty(EpsilonBox->Text) || CannotKeyPress())
			{
				MessageBox::Show("Введите все необходимые значения", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				FromNumber = System::Convert::ToDouble(FromNumberBox->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
				ToNumber = System::Convert::ToDouble(ToNumberBox->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
				if (FromNumber > ToNumber)
				{
					MessageBox::Show("Неверные значения пределов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else
				{
					Epsilon = System::Convert::ToDouble(EpsilonBox->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					isFindAllRoots = isFindAllRootsCheckBox->Checked;

					DialogResult = System::Windows::Forms::DialogResult::OK;
					Close();
				}
			}
		}
		catch (...)
		{
			MessageBox::Show("Произошла ошибка. Проверьте все данные", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void BisectionForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
		try
		{
			if (DialogResult != System::Windows::Forms::DialogResult::OK)
			{
				if (System::String::IsNullOrEmpty(FromNumberBox->Text) || System::String::IsNullOrEmpty(ToNumberBox->Text) ||
					System::String::IsNullOrEmpty(EpsilonBox->Text))
				{
					MessageBox::Show("Введите все необходимые значения", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					e->Cancel = true;
				}
				else
				{
					MessageBox::Show("Закрытие данного окна возможно только по кнопке << Найти корни >>", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					e->Cancel = true;
				}
			}
		}
		catch (...)
		{
			MessageBox::Show("Произошла ошибка. Проверьте все данные", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void isFindAllRootsCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (isFindAllRootsCheckBox->Checked)
		{
			Solve->Text = "Найти корни";
		}
		else
		{
			Solve->Text = "Найти корень";
		}
	}

	private: System::Void Form1_Resize(System::Object^ sender, System::EventArgs^ e)
	{
		if (!scalingReady) return;

		ScaleControls();
	}

	private: bool scalingReady;

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
	{
		originalFormSize = this->ClientSize;

		SaveControlsInfo(this);

		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;

		scalingReady = true;
	}
};
}
