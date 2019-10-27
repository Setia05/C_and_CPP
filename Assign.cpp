#include <iostream>
#include <string> 

using namespace std;

string a; // Global Variable Declaration (used to connect two class function)

class Hospital 			// Class Creation
{ 
public: // Class Type
	void displayMessage (string Patient_Name,int Pressure,string Suggestion)const
	{
		// Printing Patients Complete Details with Doctor Advice
		cout<<"Patient Name: "<<Patient_Name;
		cout<<endl;
		cout<<"Pressure: "<<Pressure;
		cout<<endl;
		cout<<"Doctor Suggestion: "<< Suggestion;
	}
	string medicalParameter(int bp) const
	{
		// Getting Doctor Advice depending upon Pressure measured
		if (bp>120)
		{
			a="High Pressure Visit Doctor for medication";
			return a;
		}
		else if ((90 <= bp) && (bp<= 120))
		{
			a="Continue with medication";
		    return a;
		}
		else if (bp < 90)
		{
			a="Medical Attention Required Meet Doctor";
			return a;
		}
		else
		{
			a="Invalid Pressure Reading";
			return a;
		}
	}
};

int main()
{
	Hospital HospitalPatient;		// Object created for class Hospital
	int BloodPressure;				// Variable to input Pressure
	string PatientName;				// Variable to enter patient Name

	// Taking Inputs from User
	cout<<"Enter Patient Name: ";
	getline(cin,PatientName);
	cout<<endl;
	cout<<"Enter the recorded Blood Pressure: ";
	cin>>BloodPressure;
	cout<<endl;

	// Class Calling
	HospitalPatient.medicalParameter(BloodPressure);
	HospitalPatient.displayMessage(PatientName,BloodPressure,a);
	return 0;
} // End of main() part
