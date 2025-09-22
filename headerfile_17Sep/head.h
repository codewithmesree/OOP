class bank_account{
    private:
        string name;
        int account_number;
    public:
        bank_account(string name, int account_number);
        void get_details();
        void withdrawal(int w);
        void deposit(int d);
        void balance(); 
};