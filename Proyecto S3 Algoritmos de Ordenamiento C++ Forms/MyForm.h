#pragma once
#include <vector>
#include <iostream>

namespace ProyectoS3AlgoritmosdeOrdenamientoCForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;




	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::ListBox^ ArrayAfterPigeonholeSortListBox;
    protected:
    private: System::Windows::Forms::Label^ ArrayAfterPigeonholeSortLabel;
    private: System::Windows::Forms::ListBox^ ArrayAfterShellSortListBox;
    private: System::Windows::Forms::ListBox^ ArrayAfterRadixSortListBox;
    private: System::Windows::Forms::ListBox^ ArrayAfterMergeSortListBox;
    private: System::Windows::Forms::ListBox^ ArrayAfterNaturalMergeSortListBox;
    private: System::Windows::Forms::ListBox^ ArrayAfterMergeDirectSortListBox;
    private: System::Windows::Forms::ListBox^ ArrayAfterCocktailSortListBox;
    private: System::Windows::Forms::ListBox^ ArrayAfterQuickSortListBox;
    private: System::Windows::Forms::Label^ ArrayAfterShellSortLabel;
    private: System::Windows::Forms::Label^ ArrayAfterRadixSortLabel;
    private: System::Windows::Forms::Label^ ArrayAfterMergeSortLabel;
    private: System::Windows::Forms::Label^ ArrayAfterNaturalMergeSortLabel;
    private: System::Windows::Forms::Label^ ArrayAfterMergeDirectSortLabel;
    private: System::Windows::Forms::Label^ ArrayAfterCocktailSortLabel;
    private: System::Windows::Forms::Label^ ArrayAfterQuickSortLabel;
    private: System::Windows::Forms::ListBox^ ArrayAfterBinaryTreeSortListBox;
    private: System::Windows::Forms::Label^ ArrayAfterBinaryTreeSortLabel;
    private: System::Windows::Forms::ListBox^ ArrayAfterBucketSortListBox;
    private: System::Windows::Forms::Label^ ArrayAfterBucketSortLabel;
    private: System::Windows::Forms::ListBox^ ArrayAfterSortListBox;
    private: System::Windows::Forms::Label^ ArrayAfterSortLabel;
    private: System::Windows::Forms::ListBox^ OriginalArrayListBox;
    private: System::Windows::Forms::Label^ OriginalArrayLabel;

	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
	
		void InitializeComponent(void)
		{
            this->ArrayAfterPigeonholeSortListBox = (gcnew System::Windows::Forms::ListBox());
            this->ArrayAfterPigeonholeSortLabel = (gcnew System::Windows::Forms::Label());
            this->ArrayAfterShellSortListBox = (gcnew System::Windows::Forms::ListBox());
            this->ArrayAfterRadixSortListBox = (gcnew System::Windows::Forms::ListBox());
            this->ArrayAfterMergeSortListBox = (gcnew System::Windows::Forms::ListBox());
            this->ArrayAfterNaturalMergeSortListBox = (gcnew System::Windows::Forms::ListBox());
            this->ArrayAfterMergeDirectSortListBox = (gcnew System::Windows::Forms::ListBox());
            this->ArrayAfterCocktailSortListBox = (gcnew System::Windows::Forms::ListBox());
            this->ArrayAfterQuickSortListBox = (gcnew System::Windows::Forms::ListBox());
            this->ArrayAfterShellSortLabel = (gcnew System::Windows::Forms::Label());
            this->ArrayAfterRadixSortLabel = (gcnew System::Windows::Forms::Label());
            this->ArrayAfterMergeSortLabel = (gcnew System::Windows::Forms::Label());
            this->ArrayAfterNaturalMergeSortLabel = (gcnew System::Windows::Forms::Label());
            this->ArrayAfterMergeDirectSortLabel = (gcnew System::Windows::Forms::Label());
            this->ArrayAfterCocktailSortLabel = (gcnew System::Windows::Forms::Label());
            this->ArrayAfterQuickSortLabel = (gcnew System::Windows::Forms::Label());
            this->ArrayAfterBinaryTreeSortListBox = (gcnew System::Windows::Forms::ListBox());
            this->ArrayAfterBinaryTreeSortLabel = (gcnew System::Windows::Forms::Label());
            this->ArrayAfterBucketSortListBox = (gcnew System::Windows::Forms::ListBox());
            this->ArrayAfterBucketSortLabel = (gcnew System::Windows::Forms::Label());
            this->ArrayAfterSortListBox = (gcnew System::Windows::Forms::ListBox());
            this->ArrayAfterSortLabel = (gcnew System::Windows::Forms::Label());
            this->OriginalArrayListBox = (gcnew System::Windows::Forms::ListBox());
            this->OriginalArrayLabel = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // ArrayAfterPigeonholeSortListBox
            // 
            this->ArrayAfterPigeonholeSortListBox->FormattingEnabled = true;
            this->ArrayAfterPigeonholeSortListBox->Location = System::Drawing::Point(407, 278);
            this->ArrayAfterPigeonholeSortListBox->Name = L"ArrayAfterPigeonholeSortListBox";
            this->ArrayAfterPigeonholeSortListBox->Size = System::Drawing::Size(120, 17);
            this->ArrayAfterPigeonholeSortListBox->TabIndex = 47;
            // 
            // ArrayAfterPigeonholeSortLabel
            // 
            this->ArrayAfterPigeonholeSortLabel->AutoSize = true;
            this->ArrayAfterPigeonholeSortLabel->Location = System::Drawing::Point(453, 247);
            this->ArrayAfterPigeonholeSortLabel->Name = L"ArrayAfterPigeonholeSortLabel";
            this->ArrayAfterPigeonholeSortLabel->Size = System::Drawing::Size(35, 13);
            this->ArrayAfterPigeonholeSortLabel->TabIndex = 46;
            this->ArrayAfterPigeonholeSortLabel->Text = L"label1";
            // 
            // ArrayAfterShellSortListBox
            // 
            this->ArrayAfterShellSortListBox->FormattingEnabled = true;
            this->ArrayAfterShellSortListBox->Location = System::Drawing::Point(251, 278);
            this->ArrayAfterShellSortListBox->Name = L"ArrayAfterShellSortListBox";
            this->ArrayAfterShellSortListBox->Size = System::Drawing::Size(120, 17);
            this->ArrayAfterShellSortListBox->TabIndex = 45;
            // 
            // ArrayAfterRadixSortListBox
            // 
            this->ArrayAfterRadixSortListBox->FormattingEnabled = true;
            this->ArrayAfterRadixSortListBox->Location = System::Drawing::Point(64, 278);
            this->ArrayAfterRadixSortListBox->Name = L"ArrayAfterRadixSortListBox";
            this->ArrayAfterRadixSortListBox->Size = System::Drawing::Size(120, 17);
            this->ArrayAfterRadixSortListBox->TabIndex = 44;
            // 
            // ArrayAfterMergeSortListBox
            // 
            this->ArrayAfterMergeSortListBox->FormattingEnabled = true;
            this->ArrayAfterMergeSortListBox->Location = System::Drawing::Point(667, 170);
            this->ArrayAfterMergeSortListBox->Name = L"ArrayAfterMergeSortListBox";
            this->ArrayAfterMergeSortListBox->Size = System::Drawing::Size(120, 17);
            this->ArrayAfterMergeSortListBox->TabIndex = 43;
            // 
            // ArrayAfterNaturalMergeSortListBox
            // 
            this->ArrayAfterNaturalMergeSortListBox->FormattingEnabled = true;
            this->ArrayAfterNaturalMergeSortListBox->Location = System::Drawing::Point(501, 170);
            this->ArrayAfterNaturalMergeSortListBox->Name = L"ArrayAfterNaturalMergeSortListBox";
            this->ArrayAfterNaturalMergeSortListBox->Size = System::Drawing::Size(120, 17);
            this->ArrayAfterNaturalMergeSortListBox->TabIndex = 42;
            // 
            // ArrayAfterMergeDirectSortListBox
            // 
            this->ArrayAfterMergeDirectSortListBox->FormattingEnabled = true;
            this->ArrayAfterMergeDirectSortListBox->Location = System::Drawing::Point(336, 170);
            this->ArrayAfterMergeDirectSortListBox->Name = L"ArrayAfterMergeDirectSortListBox";
            this->ArrayAfterMergeDirectSortListBox->Size = System::Drawing::Size(120, 17);
            this->ArrayAfterMergeDirectSortListBox->TabIndex = 41;
            // 
            // ArrayAfterCocktailSortListBox
            // 
            this->ArrayAfterCocktailSortListBox->FormattingEnabled = true;
            this->ArrayAfterCocktailSortListBox->Location = System::Drawing::Point(195, 170);
            this->ArrayAfterCocktailSortListBox->Name = L"ArrayAfterCocktailSortListBox";
            this->ArrayAfterCocktailSortListBox->Size = System::Drawing::Size(120, 17);
            this->ArrayAfterCocktailSortListBox->TabIndex = 40;
            // 
            // ArrayAfterQuickSortListBox
            // 
            this->ArrayAfterQuickSortListBox->FormattingEnabled = true;
            this->ArrayAfterQuickSortListBox->Location = System::Drawing::Point(45, 170);
            this->ArrayAfterQuickSortListBox->Name = L"ArrayAfterQuickSortListBox";
            this->ArrayAfterQuickSortListBox->Size = System::Drawing::Size(120, 17);
            this->ArrayAfterQuickSortListBox->TabIndex = 39;
            // 
            // ArrayAfterShellSortLabel
            // 
            this->ArrayAfterShellSortLabel->AutoSize = true;
            this->ArrayAfterShellSortLabel->Location = System::Drawing::Point(273, 247);
            this->ArrayAfterShellSortLabel->Name = L"ArrayAfterShellSortLabel";
            this->ArrayAfterShellSortLabel->Size = System::Drawing::Size(35, 13);
            this->ArrayAfterShellSortLabel->TabIndex = 38;
            this->ArrayAfterShellSortLabel->Text = L"label7";
            // 
            // ArrayAfterRadixSortLabel
            // 
            this->ArrayAfterRadixSortLabel->AutoSize = true;
            this->ArrayAfterRadixSortLabel->Location = System::Drawing::Point(75, 247);
            this->ArrayAfterRadixSortLabel->Name = L"ArrayAfterRadixSortLabel";
            this->ArrayAfterRadixSortLabel->Size = System::Drawing::Size(35, 13);
            this->ArrayAfterRadixSortLabel->TabIndex = 37;
            this->ArrayAfterRadixSortLabel->Text = L"label6";
            // 
            // ArrayAfterMergeSortLabel
            // 
            this->ArrayAfterMergeSortLabel->AutoSize = true;
            this->ArrayAfterMergeSortLabel->Location = System::Drawing::Point(707, 136);
            this->ArrayAfterMergeSortLabel->Name = L"ArrayAfterMergeSortLabel";
            this->ArrayAfterMergeSortLabel->Size = System::Drawing::Size(35, 13);
            this->ArrayAfterMergeSortLabel->TabIndex = 36;
            this->ArrayAfterMergeSortLabel->Text = L"label5";
            // 
            // ArrayAfterNaturalMergeSortLabel
            // 
            this->ArrayAfterNaturalMergeSortLabel->AutoSize = true;
            this->ArrayAfterNaturalMergeSortLabel->Location = System::Drawing::Point(546, 136);
            this->ArrayAfterNaturalMergeSortLabel->Name = L"ArrayAfterNaturalMergeSortLabel";
            this->ArrayAfterNaturalMergeSortLabel->Size = System::Drawing::Size(35, 13);
            this->ArrayAfterNaturalMergeSortLabel->TabIndex = 35;
            this->ArrayAfterNaturalMergeSortLabel->Text = L"label4";
            // 
            // ArrayAfterMergeDirectSortLabel
            // 
            this->ArrayAfterMergeDirectSortLabel->AutoSize = true;
            this->ArrayAfterMergeDirectSortLabel->Location = System::Drawing::Point(333, 136);
            this->ArrayAfterMergeDirectSortLabel->Name = L"ArrayAfterMergeDirectSortLabel";
            this->ArrayAfterMergeDirectSortLabel->Size = System::Drawing::Size(156, 13);
            this->ArrayAfterMergeDirectSortLabel->TabIndex = 34;
            this->ArrayAfterMergeDirectSortLabel->Text = L"ArrayAfterMergeDirectSortLabel";
            // 
            // ArrayAfterCocktailSortLabel
            // 
            this->ArrayAfterCocktailSortLabel->AutoSize = true;
            this->ArrayAfterCocktailSortLabel->Location = System::Drawing::Point(216, 136);
            this->ArrayAfterCocktailSortLabel->Name = L"ArrayAfterCocktailSortLabel";
            this->ArrayAfterCocktailSortLabel->Size = System::Drawing::Size(35, 13);
            this->ArrayAfterCocktailSortLabel->TabIndex = 33;
            this->ArrayAfterCocktailSortLabel->Text = L"label2";
            // 
            // ArrayAfterQuickSortLabel
            // 
            this->ArrayAfterQuickSortLabel->AutoSize = true;
            this->ArrayAfterQuickSortLabel->Location = System::Drawing::Point(45, 136);
            this->ArrayAfterQuickSortLabel->Name = L"ArrayAfterQuickSortLabel";
            this->ArrayAfterQuickSortLabel->Size = System::Drawing::Size(126, 13);
            this->ArrayAfterQuickSortLabel->TabIndex = 32;
            this->ArrayAfterQuickSortLabel->Text = L"ArrayAfterQuickSortLabel";
            // 
            // ArrayAfterBinaryTreeSortListBox
            // 
            this->ArrayAfterBinaryTreeSortListBox->FormattingEnabled = true;
            this->ArrayAfterBinaryTreeSortListBox->Location = System::Drawing::Point(684, 63);
            this->ArrayAfterBinaryTreeSortListBox->Name = L"ArrayAfterBinaryTreeSortListBox";
            this->ArrayAfterBinaryTreeSortListBox->Size = System::Drawing::Size(120, 17);
            this->ArrayAfterBinaryTreeSortListBox->TabIndex = 31;
            // 
            // ArrayAfterBinaryTreeSortLabel
            // 
            this->ArrayAfterBinaryTreeSortLabel->AutoSize = true;
            this->ArrayAfterBinaryTreeSortLabel->Location = System::Drawing::Point(707, 35);
            this->ArrayAfterBinaryTreeSortLabel->Name = L"ArrayAfterBinaryTreeSortLabel";
            this->ArrayAfterBinaryTreeSortLabel->Size = System::Drawing::Size(35, 13);
            this->ArrayAfterBinaryTreeSortLabel->TabIndex = 30;
            this->ArrayAfterBinaryTreeSortLabel->Text = L"label1";
            // 
            // ArrayAfterBucketSortListBox
            // 
            this->ArrayAfterBucketSortListBox->FormattingEnabled = true;
            this->ArrayAfterBucketSortListBox->Location = System::Drawing::Point(501, 63);
            this->ArrayAfterBucketSortListBox->Name = L"ArrayAfterBucketSortListBox";
            this->ArrayAfterBucketSortListBox->Size = System::Drawing::Size(120, 17);
            this->ArrayAfterBucketSortListBox->TabIndex = 29;
            // 
            // ArrayAfterBucketSortLabel
            // 
            this->ArrayAfterBucketSortLabel->AutoSize = true;
            this->ArrayAfterBucketSortLabel->Location = System::Drawing::Point(507, 35);
            this->ArrayAfterBucketSortLabel->Name = L"ArrayAfterBucketSortLabel";
            this->ArrayAfterBucketSortLabel->Size = System::Drawing::Size(35, 13);
            this->ArrayAfterBucketSortLabel->TabIndex = 28;
            this->ArrayAfterBucketSortLabel->Text = L"label1";
            // 
            // ArrayAfterSortListBox
            // 
            this->ArrayAfterSortListBox->FormattingEnabled = true;
            this->ArrayAfterSortListBox->Location = System::Drawing::Point(276, 63);
            this->ArrayAfterSortListBox->Name = L"ArrayAfterSortListBox";
            this->ArrayAfterSortListBox->Size = System::Drawing::Size(120, 17);
            this->ArrayAfterSortListBox->TabIndex = 27;
            // 
            // ArrayAfterSortLabel
            // 
            this->ArrayAfterSortLabel->AutoSize = true;
            this->ArrayAfterSortLabel->Location = System::Drawing::Point(273, 39);
            this->ArrayAfterSortLabel->Name = L"ArrayAfterSortLabel";
            this->ArrayAfterSortLabel->Size = System::Drawing::Size(98, 13);
            this->ArrayAfterSortLabel->TabIndex = 26;
            this->ArrayAfterSortLabel->Text = L"ArrayAfterSortLabel";
            // 
            // OriginalArrayListBox
            // 
            this->OriginalArrayListBox->FormattingEnabled = true;
            this->OriginalArrayListBox->Location = System::Drawing::Point(64, 63);
            this->OriginalArrayListBox->Name = L"OriginalArrayListBox";
            this->OriginalArrayListBox->Size = System::Drawing::Size(120, 17);
            this->OriginalArrayListBox->TabIndex = 25;
            // 
            // OriginalArrayLabel
            // 
            this->OriginalArrayLabel->AutoSize = true;
            this->OriginalArrayLabel->Location = System::Drawing::Point(61, 35);
            this->OriginalArrayLabel->Name = L"OriginalArrayLabel";
            this->OriginalArrayLabel->Size = System::Drawing::Size(35, 13);
            this->OriginalArrayLabel->TabIndex = 24;
            this->OriginalArrayLabel->Text = L"label1";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(933, 550);
            this->Controls->Add(this->ArrayAfterPigeonholeSortListBox);
            this->Controls->Add(this->ArrayAfterPigeonholeSortLabel);
            this->Controls->Add(this->ArrayAfterShellSortListBox);
            this->Controls->Add(this->ArrayAfterRadixSortListBox);
            this->Controls->Add(this->ArrayAfterMergeSortListBox);
            this->Controls->Add(this->ArrayAfterNaturalMergeSortListBox);
            this->Controls->Add(this->ArrayAfterMergeDirectSortListBox);
            this->Controls->Add(this->ArrayAfterCocktailSortListBox);
            this->Controls->Add(this->ArrayAfterQuickSortListBox);
            this->Controls->Add(this->ArrayAfterShellSortLabel);
            this->Controls->Add(this->ArrayAfterRadixSortLabel);
            this->Controls->Add(this->ArrayAfterMergeSortLabel);
            this->Controls->Add(this->ArrayAfterNaturalMergeSortLabel);
            this->Controls->Add(this->ArrayAfterMergeDirectSortLabel);
            this->Controls->Add(this->ArrayAfterCocktailSortLabel);
            this->Controls->Add(this->ArrayAfterQuickSortLabel);
            this->Controls->Add(this->ArrayAfterBinaryTreeSortListBox);
            this->Controls->Add(this->ArrayAfterBinaryTreeSortLabel);
            this->Controls->Add(this->ArrayAfterBucketSortListBox);
            this->Controls->Add(this->ArrayAfterBucketSortLabel);
            this->Controls->Add(this->ArrayAfterSortListBox);
            this->Controls->Add(this->ArrayAfterSortLabel);
            this->Controls->Add(this->OriginalArrayListBox);
            this->Controls->Add(this->OriginalArrayLabel);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   array<int>^ array = { 64, 34, 25, 12, 22, 11, 90 };

		   OriginalArrayLabel->Text = "Original array: ";
		   PrintArray(array, OriginalArrayListBox);

		   // Bubble Sort
		   BubbleSort(array);
		   ArrayAfterSortLabel->Text = "Array after Bubble Sort: ";
		   PrintArray(array, ArrayAfterSortListBox);

		   // Bucket Sort
		   int maxVal = array[0];
		   for each (int val in array)
		   {
			   if (val > maxVal)
				   maxVal = val;
		   }
		   array<int>^ bucketSortArray = gcnew array<int>(array->Length);
		   Array::Copy(array, bucketSortArray, array->Length);
		   BucketSort(bucketSortArray, maxVal);
		   ArrayAfterBucketSortLabel->Text = "Array after Bucket Sort: ";

		   PrintArray(bucketSortArray, ArrayAfterBucketSortListBox);

		   // Binary Tree Sort
		   array<int>^ binaryTreeSortArray = gcnew array<int>(array->Length);
		   Array::Copy(array, binaryTreeSortArray, array->Length);
		   BinaryTreeSort(binaryTreeSortArray);
		   ArrayAfterBinaryTreeSortLabel->Text = "Array after Binary Tree Sort: ";
		   PrintArray(binaryTreeSortArray, ArrayAfterBinaryTreeSortListBox);

		   // Quick Sort
		   QuickSort(array, 0, array->Length - 1);
		   ArrayAfterQuickSortLabel->Text = "Array after Quick Sort: ";
		   PrintArray(array, ArrayAfterQuickSortListBox);

		   // Cocktail Sort
		   array<int>^ cocktailSortArray = gcnew array<int>(array->Length);
		   Array::Copy(array, cocktailSortArray, array->Length);
		   CocktailSort(cocktailSortArray);
		   ArrayAfterCocktailSortLabel->Text = "Array after Cocktail Sort: ";
		   PrintArray(cocktailSortArray, ArrayAfterCocktailSortListBox);

		   // Merge Direct Sort
		   array<int>^ mergeDirectSortArray = gcnew array<int>(array->Length);
		   Array::Copy(array, mergeDirectSortArray, array->Length);
		   MergeDirectSort(mergeDirectSortArray);
		   ArrayAfterMergeDirectSortLabel->Text = "Array after Merge Direct Sort: ";
		   PrintArray(mergeDirectSortArray, ArrayAfterMergeDirectSortListBox);

		   // Natural Merge Sort
		   array<int>^ naturalMergeSortArray = gcnew array<int>(array->Length);
		   Array::Copy(array, naturalMergeSortArray, array->Length);
		   NaturalMergeSort(naturalMergeSortArray);
		   ArrayAfterNaturalMergeSortLabel->Text = "Array after Natural Merge Sort: ";
		   PrintArray(naturalMergeSortArray, ArrayAfterNaturalMergeSortListBox);

		   // Merge Sort
		   array<int>^ mergeSortArray = gcnew array<int>(array->Length);
		   Array::Copy(array, mergeSortArray, array->Length);
		   MergeSort(mergeSortArray);
		   ArrayAfterMergeSortLabel->Text = "Array after Merge Sort: ";
		   PrintArray(mergeSortArray, ArrayAfterMergeSortListBox);

		   // Radix Sort
		   array<int>^ radixSortArray = gcnew array<int>(array->Length);
		   Array::Copy(array, radixSortArray, array->Length);
		   RadixSort(radixSortArray);
		   ArrayAfterRadixSortLabel->Text = "Array after Radix Sort: ";
		   PrintArray(radixSortArray, ArrayAfterRadixSortListBox);

		   // Shell Sort
		   array<int>^ shellSortArray = gcnew array<int>(array->Length);
		   Array::Copy(array, shellSortArray, array->Length);
		   ShellSort(shellSortArray);
		   ArrayAfterShellSortLabel->Text = "Array after Shell Sort: ";
		   PrintArray(shellSortArray, ArrayAfterShellSortListBox);

		   // Pigeonhole Sort
		   array<int>^ pigeonholeSortArray = gcnew array<int>(array->Length);
		   Array::Copy(array, pigeonholeSortArray, array->Length);
		   PigeonholeSort(pigeonholeSortArray);
		   ArrayAfterPigeonholeSortLabel->Text = "Array after Pigeonhole Sort: ";
		   PrintArray(pigeonholeSortArray, ArrayAfterPigeonholeSortListBox);

		   MessageBox::Show("Sorting complete!");
	};

	void PrintArray(const vector<int>& array) 
	{
		for (const auto& element : array) 
		{
			cout << element << " ";
		}
		cout << endl;
	}

	void BubbleSort(vector<int>& array) {
		int n = array.size();
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (array[j] > array[j + 1]) {
					swap(array[j], array[j + 1]);
				}
			}
		}
	}

    void BucketSort(vector<int>& array, int maxVal) {
        vector<int> bucket(maxVal + 1, 0);
        for (const auto& val : array) {
            bucket[val]++;
        }

        int index = 0;
        for (int i = 0; i <= maxVal; i++) {
            while (bucket[i] > 0) {
                array[index++] = i;
                bucket[i]--;
            }
        }
    }

    struct Node {
        int data;
        Node* left;
        Node* right;

        Node(int value) : data(value), left(nullptr), right(nullptr) {}
    };

    void Insert(Node*& root, int value) {
        if (root == nullptr) {
            root = new Node(value);
            return;
        }

        if (value < root->data) {
            Insert(root->left, value);
        }
        else {
            Insert(root->right, value);
        }
    }

    void InorderTraversal(Node* root, vector<int>& sortedArray) {
        if (root) {
            InorderTraversal(root->left, sortedArray);
            sortedArray.push_back(root->data);
            InorderTraversal(root->right, sortedArray);
        }
    }

    void BinaryTreeSort(vector<int>& array) {
        Node* root = nullptr;

        for (const auto& value : array) {
            Insert(root, value);
        }

        array.clear();
        InorderTraversal(root, array);
    }

    int Partition(vector<int>& array, int low, int high) {
        int pivot = array[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (array[j] < pivot) {
                i++;
                swap(array[i], array[j]);
            }
        }

        swap(array[i + 1], array[high]);
        return i + 1;
    }

    void QuickSort(vector<int>& array, int low, int high) {
        if (low < high) {
            int pi = Partition(array, low, high);

            QuickSort(array, low, pi - 1);
            QuickSort(array, pi + 1, high);
        }
    }

    void CocktailSort(vector<int>& array) {
        int n = array.size();
        bool swapped = true;
        int start = 0;
        int end = n - 1;

        while (swapped) {
            swapped = false;

            for (int i = start; i < end; i++) {
                if (array[i] > array[i + 1]) {
                    swap(array[i], array[i + 1]);
                    swapped = true;
                }
            }

            if (!swapped) {
                break;
            }

            swapped = false;
            end--;

            for (int i = end - 1; i >= start; i--) {
                if (array[i] > array[i + 1]) {
                    swap(array[i], array[i + 1]);
                    swapped = true;
                }
            }

            start++;
        }
    }

    void Merge(std::vector<int>& array, int left, int middle, int right) {
        int n1 = middle - left + 1;
        int n2 = right - middle;

        std::vector<int> leftArray(n1);
        std::vector<int> rightArray(n2);

        for (int i = 0; i < n1; i++) {
            leftArray[i] = array[left + i];
        }

        for (int j = 0; j < n2; j++) {
            rightArray[j] = array[middle + 1 + j];
        }

        int i = 0;
        int j = 0;
        int k = left;

        while (i < n1 && j < n2) {
            if (leftArray[i] <= rightArray[j]) {
                array[k] = leftArray[i];
                i++;
            }
            else {
                array[k] = rightArray[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            array[k] = leftArray[i];
            i++;
            k++;
        }

        while (j < n2) {
            array[k] = rightArray[j];
            j++;
            k++;
        }
    }

    void NaturalMergeSort(std::vector<int>& array) {
        int n = array.size();
        int left = 0;
        int middle = 0;
        int right = 0;

        while (left < n - 1) {
            // Encuentra la primera secuencia ordenada
            while (middle < n - 1 && array[middle] <= array[middle + 1]) {
                middle++;
            }

            // Encuentra la siguiente secuencia ordenada
            right = middle + 1;
            while (right < n - 1 && array[right] <= array[right + 1]) {
                right++;
            }

            // Llama a Merge con los parámetros apropiados
            Merge(array, left, middle, right);

            // Actualiza el índice de inicio para la próxima iteración
            left = right + 1;
            middle = left;
        }
    }

    void MergeDirectSort(vector<int>& array, int left, int right) {
        if (left < right) {
            int middle = left + (right - left) / 2;

            MergeDirectSort(array, left, middle);
            MergeDirectSort(array, middle + 1, right);

            Merge(array, left, middle, right);
        }
    }

    void MergeSort(vector<int>& array) {
        int n = array.size();
        for (int currSize = 1; currSize <= n - 1; currSize = 2 * currSize) {
            for (int leftStart = 0; leftStart < n - 1; leftStart += 2 * currSize) {
                int mid = min(leftStart + currSize - 1, n - 1);
                int rightEnd = min(leftStart + 2 * currSize - 1, n - 1);

                Merge(array, leftStart, mid, rightEnd);
            }
        }
    }

    void CountingSort(vector<int>& array, int exp) {
        int n = array.size();
        vector<int> output(n);
        vector<int> count(10, 0);

        for (const auto& val : array) {
            count[(val / exp) % 10]++;
        }

        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        for (int i = n - 1; i >= 0; i--) {
            output[count[(array[i] / exp) % 10] - 1] = array[i];
            count[(array[i] / exp) % 10]--;
        }

        for (int i = 0; i < n; i++) {
            array[i] = output[i];
        }
    }

    void RadixSort(vector<int>& array) {
        int maxVal = array[0];
        for (const auto& val : array) {
            if (val > maxVal) {
                maxVal = val;
            }
        }

        for (int exp = 1; maxVal / exp > 0; exp *= 10) {
            CountingSort(array, exp);
        }
    }

    void ShellSort(vector<int>& array) {
        int n = array.size();
        for (int gap = n / 2; gap > 0; gap /= 2) {
            for (int i = gap; i < n; i += 1) {
                int temp = array[i];
                int j;
                for (j = i; j >= gap && array[j - gap] > temp; j -= gap) {
                    array[j] = array[j - gap];
                }
                array[j] = temp;
            }
        }
    }

    void PigeonholeSort(vector<int>& array) {
        int minVal = array[0];
        int maxVal = array[0];
        int range, i, j, index;

        for (const auto& val : array) {
            if (val < minVal) {
                minVal = val;
            }
            if (val > maxVal) {
                maxVal = val;
            }
        }

        range = maxVal - minVal + 1;
        vector<int> pigeonhole(range, 0);

        for (const auto& val : array) {
            pigeonhole[val - minVal]++;
        }

        index = 0;
        for (i = 0; i < range; i++) {
            while (pigeonhole[i]--) {
                array[index++] = i + minVal;
            }
        }
}
