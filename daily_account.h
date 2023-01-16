class daily_account :public account {

private:
	account obj;
	long acc_numb;
	double d;
	double depos;
	double withdr;
	string n;
	int choice;

public:


	daily_account() {

	}

	daily_account(account x) : obj(x) {
		x.create_new_account();


	}

	void setacc_type(string t) {

		this->account_type = t;

	}

	string getacc_type() {
		return this->account_type;
	}

	void check_vs() {

		cout << "\n\n\n\n";
		if (acc_numb == this->account_no) {
			cout << "****WELCOME TO YOUR DAILY ACCOUNT****" << endl;

		}
		else {

			cout << " ! this daily Account number does not exit !" << endl << "\n\n";
			cout << "Please input a valid account number" << endl;

		}


		cout << "\n";
	}



	void setaccnumb(long acc) {
		this->acc_numb = acc;
	}

	long getnum() {
		return this->acc_numb;
	}

	void setnme_f(string f) {
		this->f_custname = f;
	}
	void setname_l(string l) {
		this->l_custname = l;
	}
	
	void deposites() {

		cout << "\n\n";

		if (acc_numb != this->account_no)
		{
			cout << " this account number  does not exit...." << endl;

		}
		else {

			cout << "how much do you want to deposite into your account?" << endl;
			cin >> depos;


		}
		this->deposite += depos;

		cout << "\nyou have made a deposite of -->" << " " << depos <<" "<< "into your account";
		cout << "\n\n";
	}

	void withdraw() {

		cout << "\n\n";
		if (acc_numb != this->account_no)
		{
			cout << " this account number  does not exit...." << endl << "\n";
			cout << "Please try to enter a valid Account number!!!" << "\n";

		}
		else {
			cout <<"\n\n"<< "Enter the amount you would like to withdraw from your account.. ->";
			cin >> withdr;
		}

		this->deposite -= withdr;

		cout<<"\n\n" << withdr << " has been deducted from your "<<" " << getacc_type()<<" "<< "account";
		cout << "\n\n";

	}

	void modifyaccount() {
		cout << "\n\n";
		if (acc_numb != this->account_no)
		{
			cout << "Please try to enter a valid Account number!!!" << "\n";


		}

		else {
			cout << " what do you want to update?" << endl;
			cout << "\n1: to update first name \n\n2: to update last name" << endl;
		}
	}
		

	
	
};




