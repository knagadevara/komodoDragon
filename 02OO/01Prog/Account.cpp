#include <string>
using std::string;

class BankAccount
    {
        // Attributes
        // Data
        private:
            string customer_first_name {"BK_AC-First-Name"};
            string customer_last_name {"BK_AC-Last-Name"};
            double customer_minimum_balance {0.0};
            const int const customer_resource_number;
            const int const customer_account_number;
            const string bank_ifsc {};
            string bank_branch {"HQ-IN"};
        
        // Methods
        // Possible operations on the data
        public:
            string set_customer_name();
            bool is_account_active(const int const customer_account_number , string bank_branch , const string bank_ifsc);
            double check_account_balance(const int const customer_account_number , string bank_branch , const string bank_ifsc);
            bool deposite_amount(const int const customer_account_number , string bank_branch , const string bank_ifsc , const int const deposite_amount);
            bool withdraw_amount(const int const customer_account_number , string bank_branch , const string bank_ifsc , const int const withdrawl_amount);
    };