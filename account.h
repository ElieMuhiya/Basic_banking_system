class account {

protected:
	string f_custname;
	string l_custname;
	long account_no;
	string account_type;
	double deposite;
	int student_id;
	string cityzen_id;
	string dob;
	int ch;
	long acc_numb;

	int d;
	string message;

public:

	account() {


	}

	account(string c, long s, string w, string l, int id, string c1, double d) {
		this->f_custname = c;
		this->l_custname = l;
		this->account_no = s;
		this->account_type = w;
		this->deposite = d;
		this->student_id = id;
		this->cityzen_id = c1;


	}

	void create_new_account() {
		cout << "\n\n\n";
		cout << endl << "\n";
		cout << "Enter your  first_name: ->";
		getline(cin, this->f_custname);
		cin.ignore(1, '\n');
		cout << "\n";
		cout << "Enter your  last_name: ->";
		getline(cin, this->l_custname);
		cin.ignore();

		cout << "\n";
		cout << " Enter your cityzen id:->";
		cin >> this->cityzen_id;
		cout << "\n";
		cout << " ENter your birthday:->";
		cin.ignore();
		getline(cin, this->dob);
		cout << "Enter your account number...(" << this->message << "): ->";
		cin >> this->account_no;
		cout << "\n";
		cout << " Enter the initial amount into your account ( not less than 500 for saving and daily account) ->";
		cin >> this->deposite;

		
		cout << "\n\n\n";
	}

	
	void setf_name(string f) {
		this->f_custname = f;
	}

	string getf_n() {
		return this->f_custname;
	}
	

	void setmessage(string m) {
		this->message = m;
	}

	void display_acc_details() {

		cout << "************************************************************\n";
		cout << "*  Customer  First Name:\t->" <<f_custname << "\n\n";
		cout << "*  Customer Last Name:\t\t-> "<<l_custname << "\n\n";
		cout << "*  Cityzen_id:\t\t\t->" <<cityzen_id << "\n\n";
		cout << "*  Birthday:\t\t\t->"<< dob<< "\n\n";
		cout << "*  Account Type:\t\t->" << account_type << "\n\n";
		cout << "*  Account Number:\t\t->" << account_no << "\n\n";
		cout << "*  Account Balance:\t\t->" << deposite << "\n\n";
		cout << "************************************************************\n";

		cout << "\n";
	}


	

		
	void create_new_student_account() {
		cout << "\n\n\n";
		cout << endl << "\n";
		cout << "Enter your  first_name: ->";
		getline(cin, this->f_custname);
		cin.ignore(1, '\n');
		cout << "\n";
		cout << "Enter your  last_name: ->";
		getline(cin, this->l_custname);
		cin.ignore(1, '\n');
		cout << "\n";
		cout << " Enter your Birthday:->";
		getline(cin, this->dob);
		cin.ignore(1, '\n');
		cout << "\n";
		cout << "Enter your student number:->";
		cin >> this->student_id;
		cout << "\n";
		cout << "Enter your account number...(" << this->message << "): ->";
		cin >> this->account_no;
		cout << "\n";
		cout << " Enter the initial amount into your account ( not less than 100 for student account) ->";
		cin >> this->deposite;


		cout << "\n\n\n";
	}


	void display_stdc_details() {

		cout << "************************************************************\n";
		cout << "*  Customer  First Name:\t->" << f_custname << "\n\n";
		cout << "*  Customer Last Name:\t\t-> " << l_custname << "\n\n";
		cout << "*  Student_id\t\t\t->" << student_id << "\n\n";
		cout << "*  Birthday:\t\t\t->" << dob << "\n\n";
		cout << "*  Account Type:\t\t->" << account_type << "\n\n";
		cout << "*  Account Number:\t\t->" << account_no << "\n\n";
		cout << "*  Account Balance:\t\t->" << deposite << "\n\n";
		cout << "************************************************************\n";

		cout << "\n";
	}




};

