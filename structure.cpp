#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// class Student
// {

// public:
//     char name[100];
//     int roll;
// };
// int main(){
    
//     Student rahim;
//     strcpy(rahim.name,"Rahim akbar");
//     rahim.roll =56;

//     cout<<rahim.name <<" "<<rahim.roll<<endl;
//     return 0;
    
// }

// constructer setter and getter empliments

// class example
// {
// private:
//    int x;
//    int pass;
// public:
//    example(int p){
//         pass = p;
//    }
//    void setter (int a,int p){

//        if (pass == p)
//        {
//             x=a;
//        }
//        else{
//             cout<<"password did't match"<<endl;
//        }
       
       
//    }
//    int getter(int p){

//     if (pass == p)
//        {
//             return x;
//        }
//        else{
//             cout<<"password did't match"<<endl;
   
//             return -1;
//        }
//    }
// };

// int main(){
//         example a(1234);
//         a.setter(1500,1234);
       
//         cout <<a.getter(1234) <<endl;
//     return 0;
// }

// friend class 
// class prarent
// {
// private:
//     int taka;
// protected:
//     int password;
// public:
//     prarent(int tk,int ps){
//         taka = tk;
//         password=ps;
//     }
//     friend class abburBondhu;
// };
// class abburBondhu
// {
// public:
    
//     void tellSecret(prarent *ptr){
//         cout<<ptr->password<<endl;
//     }
// };
// int main(){
//     prarent pt(1200,2345);
//     abburBondhu bonddhu;
//     bonddhu.tellSecret(&pt);

//     return 0;
// }

// opp bank account manegement account;

// class BankAccount
// {
// protected:
//     int balance;
    
// private:
//     string password;
// public:
//     string account_holder;
//     string address;
//     int age;
//     int account_number;
// public:
//     BankAccount(string account_holder,string address,int age,string password)
//     {
//         this-> account_holder = account_holder;
//         this-> address = address;
//         this-> age = age;
//         this->password = password;
//         this->account_number = rand()%1000000000;
//         this->balance = 0;
//         cout<<"Your account no is "<<this->account_number<<endl;
//     }
//     int show_balance(string pasword){
//         if(this->password==password){
//             return this->balance;
//         }
//         else{
//             return -1;
//         }
//     }
//     void add_money(string password,int amount)
//     {
//         if(amount < 0){
//             cout<<"invalied amount"<<endl;
//             return;
//         }
//         if(this->password==password){
//             this->balance += amount;
//             cout<<"Add money successfully"<<endl;
//         }
//         else{
//             cout<<"Your password did'nt match"<<endl;
//         }
//     }
//     void deposit_money(string password,int amount)
//     {

//         if(amount < 0)
//         {
//             cout<<"invalied amount"<<endl;
//             return ;
//         }
//         if(this->balance <amount)
//         {
//             cout<<"insufficint amout"<<endl;
//             return;
//         }

//         if(this->password==password){
//             this->balance -= amount;
//             cout<<"depossit money successfully"<<endl;
//         }
//         else{
//             cout<<"Your password did'nt match"<<endl;
//         }
//     }
//     friend class MyCash;
// };
// // second class 
// class MyCash
// {
// private:
//    int balance;
// public:

//     MyCash()
//     {
//         this->balance=0;
//     }

//     void add_money_form_bank(BankAccount *myAcount,string password,int amount)
    
//     {
//         if(amount < 0)
//         {
//             cout<<"invalied amount"<<endl;
//             return ;
//         }
//         if(myAcount->balance<amount){
            
//             cout<<"insufficint amout"<<endl;
//             return;
//         }
//         if(myAcount->password==password)
//         {
//             this->balance +=amount;
//             myAcount->balance -=amount;
//             cout<<"add money form bank"<<endl;
//         }
//         else
//         {
//             cout<<"Your password dint match"<<endl;
//         }
//     }
//     int show_balance(){
//         return balance;
//     }
// };

// // create account functio

// BankAccount* create_accout(){
//     string account_holder,address,password;
//     int age;
//     cout<<"Create your accout"<<endl;
//     cin>>account_holder>>address>>password>>age;
//     BankAccount *myAccout = new BankAccount(account_holder,address,age,password);

//     return myAccout;

// }

// // add money function

// void add_money(BankAccount *myAccount){
//     string password;
//     int amount;
//     cout<<"add money"<<endl;
//     cin>>password>>amount;
//     myAccount->add_money(password,amount);

//     cout<<"Your bank balance is "<<myAccount->show_balance("abc")<<endl;
// }

// // deposit function

// void deposit_money(BankAccount *myAccount){
//      string password;
//     int amount;
//     cout<<"deposit money"<<endl;
//     cin>>password>>amount;
//     myAccount->deposit_money(password,amount);

//     cout<<"Your bank balance is "<<myAccount->show_balance("abc")<<endl;
// }

// // add money form bank 

// void add_money_form_bank(MyCash *mycash ,BankAccount *myAccount){
//     string password;
//     int amount;
//     cout<<"add  money from bank"<<endl;
//     cin>>password>>amount;
//     mycash->add_money_form_bank(myAccount,password,amount);
//     cout<<"Your bank balance is "<<myAccount->show_balance("abc")<<endl;
//     cout<< "Your myCash balance is"<<mycash->show_balance()<<endl;
// }

// int main(){
//    BankAccount *myAccount = create_accout();
  
//    MyCash *mycash = new MyCash();

//    flag:
//         cout<<"select option"<<endl;
//         cout<<"1.select add money"<<endl;
//         cout<<"2.select deposit money"<<endl;
//         cout<<"3.select add money form the bank"<<endl;
//         int option;
//         cin>>option;
//         if(option == 1)
//         {
//             add_money(myAccount);

//         }
//         else if(option == 2)
//         {
//             deposit_money(myAccount);
//         }
//         else if(option == 3)
//         {
//             add_money_form_bank(mycash,myAccount);
//         }
//         else
//         {
//             cout<<"invalid number"<<endl;
//         }
   
//     goto flag;
//     return 0;
// }
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
class  Restaurant
{

public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    double total_tax;

public:
    Restaurant(){
        this->total_tax=0.0;
    }

};
void all_codes (Restaurant *res, int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = res->food_item_codes[i];
    }
}
void take_input(Restaurant *restaurent, int n) {
    int code, price;
    string name;
    
    for (int i = 0; i < n; i++) {
        int code, price;
        string name;

        cin.ignore();
        cin >> code;

        cin.ignore();
        getline(cin, name);

        cin >> price;

        restaurent->food_item_codes[i] = code;
        restaurent->food_item_names[i] = name;
        restaurent->food_item_prices[i] = price;
   }
}
void print_all_menu(Restaurant *restaurant, int n) { 
     cout << endl; 
     cout << "\t\t\t" << "ALL ITEMS" << "\t\t" << endl; 
     cout << "-----------------------------------------------------------" << endl; 
  
     cout << "Item code\t" << "Item Name\t\t\t" << "Item price" << endl; 
     cout << "----------\t" << "---------\t\t\t" << "----------" << endl; 
     for (int i = 0; i < n; i++) { 
         cout << restaurant->food_item_codes[i] << "\t\t" << restaurant->food_item_names[i] << "\t\t" << restaurant->food_item_prices[i] << endl;  
     }

}


int take_order(int item_codes[], int item_quantity[], int n, int all_code[]) {
    int table_no, number_of_items;

    cout << "Enter Table No : ";
    cin >> table_no;
    cout << "Enter Number of Item : ";
    cin >> number_of_items;
    for (int i = 0; i < number_of_items; i++) {
        cout << "Enter Item " << i + 1 << " Code : ";
        cin >> item_codes[i];

        
        cout << "Enter Item " << i + 1 << " Quantity : ";
        cin >> item_quantity[i];
    }
    return table_no;
}
int order_items(Restaurant *res,int a ,int n){
    for (int i = 0; i < n; i++) {
        if (a == res->food_item_codes[i]) {
            return i;
        }
    }
    return -1;
}
int order_summary(Restaurant *res, int a[], int n, int table_no, int quantity[]) {
    cout << endl;
    cout << "\t\t\t\t\tOrder Summary\t\t\t\t\t" << endl;
    cout << "--------------------------------------------------------------------------------------------" << endl;
    cout << "Table No : " << table_no << endl;
    cout << "Item code\t" << "Item Name\t\t\t" << "Item price\t" << "Item Quantity\t" << "Total Price" << endl;
    cout << "----------\t" << "---------\t\t\t" << "---------- \t" << "-------------\t" << "------------" << endl;
    int total = 0;
    for (int i = 0; i < n; i++) {
        int o_item = order_items(res, a[i], n);
        if (o_item != -1 && quantity[i] != 0) {
            cout << res->food_item_codes[o_item] << "\t\t";
            cout << res->food_item_names[o_item] << "\t\t";
            cout << res->food_item_prices[o_item] << "\t\t";
            cout << quantity[i] << "\t\t";
            cout << quantity[i] * res->food_item_prices[o_item] << endl;
            total = total + quantity[i] * res->food_item_prices[o_item];
        }
    }
    double tax = (total * (0.05));
    total = tax + total;
    cout << "TAX\t\t\t\t\t\t\t\t\t\t" << tax << endl;
    cout << "____________________________________________________________________________________________" << endl;
    cout << "Net Total                                                                       "<< total << endl;
    return total;
}


int main(){
    int n;
    cin>>n;
        Restaurant *restaurant = new Restaurant();
        take_input(restaurant, n);

    while(true) 
    {
        print_all_menu(restaurant, n);
        cout << endl;

        int ordered_codes[n] = {0};
        int ordered_item_quantity[n] = {0};

        int all_item_code[n];
        all_codes(restaurant, all_item_code, n);

        int table_no = take_order(ordered_codes, ordered_item_quantity, n, all_item_code);
        int total = order_summary(restaurant, ordered_codes, n, table_no, ordered_item_quantity);
        cout << "Total Tax : " << restaurant->total_tax << endl;
        cout << "________________________" << endl;
        cout << endl;

    }


    return 0;
}






