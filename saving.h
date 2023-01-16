class saving :public account {
private:

	double depo_s;
	account objsa;
	long acc_n;
	double withdr;

public:

	saving() {

	}


	saving(account sa) :objsa(sa) {

		sa.create_new_account();
	}


	void setaccnumber(long acc) {
		this->acc_n = acc;

	}

	void deposites_s() {

		if (acc_n != this->account_no)
		{
			cout << " this account number  does not exit...." << endl;

		}
		else {

			cout << "how much do you want to deposite into your account?" << endl;
			cin >> depo_s;


		}
		this->deposite += depo_s;

		cout << "\nyou have made a deposite of -->" << " " << depo_s<<" "<< "into your account";
		cout << "\n\n";
	}





	void setacc_t(string ts) {
		this->account_type = ts;
	}

	string getaccounttype() {
		return this->account_type;
	}
	void check_s() {
		cout << "\n\n\n";

		if (acc_n == this->account_no) {
			cout << "****WELCOME TO YOUR SAVING ACCOUNT****" << endl;

		}
		else {

			cout << " ! this saving Account number does not exit !" << endl << "\n\n";
			cout << "Please input a valid account number" << endl;


		}


		cout << "\n";
	}

	void withdraws() {

		cout << "\n\n";
		if (acc_n!= this->account_no)
		{
			cout << " this account number  does not exit...." << endl << "\n";
			cout << "Please try to enter a valid Account number!!!" << "\n";


		}

		else {
			cout << "Enter the amount you would like to withdraw from your account.. ->";
			cin >> withdr;
		}

		this->deposite -= withdr;

		cout <<"\n\n"<<this->withdr <<" "<< " has been deducted from your "<<getaccounttype()<<" "<<"account";
		cout << "\n\n";
	}

	void setnme_f(string f) {
		this->f_custname = f;
	}
	void setname_l(string l) {
		this->l_custname = l;
	}
	void modifyaccounts() {
		cout << "\n\n";
		if (acc_n != this->account_no)
		{
			cout << "Please try to enter a valid Account number!!!" << "\n";


		}

		else {
			cout << " what do you want to update?" << endl;
			cout << "\n1: to update first name \n\n2: to update last name" << endl;
		}
	}




	


};

