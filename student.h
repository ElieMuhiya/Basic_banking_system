class student :public account {

private:
	account obj1;
	long acc_numb2;
	double depos2;
	double withdr2;
	string n2;
	int choice2;
	
public:


	student() {

	}

	student(account d) : obj1(d) {
		d.create_new_student_account();


	}

	void setacc_type2(string t) {

		this->account_type = t;

	}

	string getacc_type2() {
		return this->account_type;
	}

	void check_vs2() {

		cout << "\n\n\n\n";
		if (acc_numb2 == this->account_no) {
			cout << "****WELCOME TO YOUR STUDENT ACCOUNT****" << endl;

		}
		else {

			cout << " ! this student Account number does not exit !" << endl << "\n\n";
			cout << "Please input a valid account number" << endl;

		}


		cout << "\n";
	}



	void setaccnumb2(long acc) {
		this->acc_numb2 = acc;
	}

	long getnum2() {
		return this->acc_numb2;
	}

	void setnme_f2(string f) {
		this->f_custname = f;
	}
	void setname_l2(string l) {
		this->l_custname = l;
	}

	void setid(int di) {
		this->student_id = di;

	}
	
	void deposites2() {

		cout << "\n\n";

		if (acc_numb2 != this->account_no)
		{
			cout << " this account number  does not exit...." << endl;

		}
		else {

			cout << "how much do you want to deposite into your account?" << endl;
			cin >> depos2;


		}
		this->deposite += depos2;

		cout << "\nyou have made a deposite of -->" << " " << depos2<<" " << "into your account";

		cout << "\n\n";
	}

	void withdraw() {

		cout << "\n\n";
		if (acc_numb2 != this->account_no)
		{
			cout << " this account number  does not exit...." << endl << "\n";
			cout << "Please try to enter a valid Account number!!!" << "\n";

		}
		else {
			cout << "\n\n" << "Enter the amount you would like to withdraw from your account.. ->";
			cin >> withdr2;
		}

		this->deposite -= withdr2;

		cout << "\n\n" << withdr2 << " has been deducted from your " << " " << getacc_type2() << " " << "account";
		cout << "\n\n";

	}

	void modifyaccounts() {
		cout << "\n\n";
		if (acc_numb2 == this->account_no)
		{
			cout << " what do you want to update?" << endl;
			cout << "\n1: to update first name \n\n2: to update last name\n\n3:student_id\n" << endl;
			

		}

		else {
			cout << "Please try to enter a valid Account number!!!" << "\n";

			
		}
	}




};





