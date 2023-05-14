//Salary calculator application

#include<iostream>
using namespace std;

int emNumber;
string emName,designation,department;
double basicSalary,TotalAllowance,GrossPay,TotalDeduction,UPF,ETF,NetPay,AnnualUPF,AnnualETF;

double Cost_of_living_allowance=7800.00;
double monthly_allowance=5000.00;
double Salary_arrears=2640.00;

double Stam_Duty=25.00;
double UPF_Employee=5708.32;

double UPFrate=15/100;
double ETFrate=3/100;

void Display_Menu(){
    cout<<"--Salary calculator application--"<<endl<<endl;
    cout<<"1. Employee Details."<<endl;
    cout<<"2. Calculate the Total Allowance."<<endl;
    cout<<"3. Calculate the Gross Pay."<<endl;
    cout<<"4. Calculate the Total Deducton."<<endl;
    cout<<"5. Calculate the Net Pay."<<endl;
    cout<<"6. Calculate the UPF and ETF amount."<<endl;
    cout<<"7. Calculate the Annual UPF and ETF amount."<<endl;
    cout<<"8. Display the Salary Sheet."<<endl<<endl;


}

void Employee_Details(){
    
    cout<<"Enter the employee number: "<<endl;
    cin>>emNumber;

    cout<<"Enter the employee name: "<<endl;
    cin>>emName;

    cout<<"Enter the employee designation: "<<endl;
    cin>>designation;

    cout<<"Enter the employee department: "<<endl;
    cin>>department;

    cout<<"Enter the basic salary: "<<endl;
    cin>>basicSalary;

}

double Total_Allowance(){
    

    TotalAllowance=Cost_of_living_allowance+monthly_allowance+Salary_arrears;
    cout<<"Total Allowance : "<<TotalAllowance<<endl;
    
}

double Gross_Pay(){
    GrossPay=basicSalary+TotalAllowance;
    cout<<"Gross Pay: "<<GrossPay<<endl;
    
}

double Total_Deduction(){
    
    TotalDeduction=Stam_Duty+UPF_Employee;
    cout<<"Total Deduction: "<<TotalDeduction<<endl;
    
}

double Net_Pay(){
    NetPay=GrossPay-TotalDeduction;
    cout<<"Net Pay: "<<NetPay<<endl;
    
}

double UPF_ETFamount(){
    

    UPF=NetPay*UPFrate;
    cout<<"UPF per Mounth : "<<UPF<<endl;

    ETF=NetPay*ETFrate;
    cout<<"ETF per Mounth : "<<ETF<<endl;
    

}

double Annual_UPF_ETF(){
    AnnualUPF=UPF*12;
    cout<<"Annual UPF amount: "<<AnnualUPF<<endl;   

    AnnualETF=ETF*12;
    cout<<"Annual EPF amount: "<<AnnualETF<<endl;
    

}

void Salary_Sheet(){
    cout<<"--Salary Sheet--"<<endl<<endl;
    cout<<"University of Vavuniya May'14"<<endl;
    cout<<"Emp.Number: "<<emNumber<<endl;
    cout<<"Name: "<<emName<<endl;
    cout<<"Designation: "<<designation<<endl;
    cout<<"Department: "<<department<<endl;
    cout<<"Basic Salary: "<<basicSalary<<endl;
    cout<<"Gross Pay: "<<GrossPay<<endl;
    cout<<"Deductionn: "<<TotalDeduction<<endl;
    cout<<"Net Pay: "<<NetPay<<endl;
    cout<<"UPF Amount: "<<UPF<<endl;
    cout<<"ETF Amount: "<<ETF<<endl;
    cout<<"Annual UPF Amount for "<<emName<<" is "<<AnnualUPF<<endl;
    cout<<"Annual ETF Amount for "<<emName<<" is "<<AnnualETF<<endl;


}
int main(){
    int choice;
    char again;
    
    replay:
    Display_Menu();

    cout<<"Please Enter your choice : ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        Employee_Details();
        break;

    case 2:
        Total_Allowance();
        break;

    case 3:
        Gross_Pay();
        break;    
    case 4:
        Total_Deduction();
        break;
    case 5:
        Net_Pay();
        break;
    case 6:
        UPF_ETFamount();
        break;
    case 7:
        Annual_UPF_ETF();
        break;
        
    case 8:
        Salary_Sheet();
        break;                  
    
    default:
        cout<<"Invalid Choice...!"<<endl;
        break;
    }
    cout<<"Do you want to run the program again? (y/n) :";
    cin>>again;
   
   while(again=='y'){
    goto replay;
   }

}