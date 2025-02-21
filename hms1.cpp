#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
using namespace std;

string p_name, Disease,address,date,gender;
int age;
/*we use two classes namely :
hospital , doctor.
hospital = parent class.
doctor = child class.*/
class hospital          // class = hospital.
{
    string p_name,Disease,address,date,gender;
    int age;
    long int number;
 public:
                    //declaration of function
    void patient_appoint();
    void Medicine_details();
    void Medicine_prescription();
    void doctor_list();
    void payment();
    void avaliblity_of_beds();
    void hospital_details ();
    void patient_details();
};

 class doctor : public hospital{     // child class = doctor.
 public :
                    // functions : 1 to 8.
                    //declaration of function
    void one();
    void two();
    void three();
    void four();
    void five();
    void six();
    void seven();
    void eight();
 };
                    // initation of function from class doctor
                    // declaration of function
 void doctor:: one()
 {
    patient_appoint();
    cout<<endl;
    cout<<"\t\t\t\t\tOkay, Thank You. We calling you for confirmed Appoint after sometimes!"<<endl;
 }

 void doctor::two()
 {
     patient_appoint();
     cout<<endl;
     cout<<"\t\t\t\t\tOkay, Thank You. We calling you for confirmed Appoint after sometimes!"<<endl;
 }
 void doctor::three()
 {
     patient_appoint();
     cout<<endl;
     cout<<"\t\t\t\t\tOkay, Thank You. We calling you for confirmed Appoint after sometimes!"<<endl;
 }  
 void doctor::four()
 {
     patient_appoint();
     cout<<endl;
     cout<<"\t\t\t\t\tOkay, Thank You. We calling you for confirmed Appoint after sometimes!"<<endl;
 }
 
 void doctor::five()
 {
    patient_appoint();
    cout<<endl;
    cout<<"\t\t\t\t\tOkay, Thank You. We calling you for confirmed Appoint after sometimes!"<<endl;
 }

 void doctor::six()
 {
     patient_appoint();
     cout<<endl;
     cout<<"\t\t\t\t\tOkay, Thank You. We calling you for confirmed Appoint after sometimes!"<<endl;
 }

 void doctor::seven()
 {
     patient_appoint();
     cout<<endl;
     cout<<"\t\t\t\t\tOkay, Thank You. We calling you for confirmed Appoint after sometimes!"<<endl;
 }

 void doctor::eight()
 {
    
     patient_appoint();
     cout<<endl;
     cout<<"\t\t\t\t\tOkay, Thank You. We calling you for confirmed Appoint after sometimes!"<<endl;
 }

 
 void hospital :: patient_appoint(){
    fstream patient("patient.txt", ios::out | ios::app);
    if(patient.is_open()){
    cout<<"\t\t\t\t\t\t\t\tPatient Name: ";
    cin.ignore();
    getline(cin, p_name);
    patient<<"Patient Name: "<<p_name<<"\n";
    cout<<"\t\t\t\t\t\t\t\tPatient Age: ";
    cin>>age;
    patient<<"Patient Age: "<<age<<"\n";
    cout<<"\t\t\t\t\t\t\t\tPatient Disease : ";
    cin.ignore();
    getline(cin, Disease);
    patient<<"Disease: "<<Disease<<"\n";
    cout<<"\t\t\t\t\t\t\t\tAddress: ";
    cin.ignore();
    getline(cin, address);
    patient<<"Patient's address: "<<address<<"\n";
    cout<<"\t\t\t\t\t\t\t\tEnter Your Mobile Number: ";
    cin>>number;
    patient<<"Mobile Number: "<<number<<"\n";
    cout<<"\t\t\t\t\t\t\t\tAppoint Date: ";
    cin.ignore();
    getline(cin , date);
    patient<<"Appoint Date: "<<date<<"\n";
    cout<<"\t\t\t\t\t\t\t\tGender: ";
    cin>>gender;
    patient<<"Gender: "<<gender<<"\n\n\n";
    cout<<"\n\t\t\t\t\t\t\t\tAppointmant Successfully Booked!"<<endl<<endl;
    patient.close();
    }
    else{
        cout<<"file is not respond";
    }

 }
 void hospital :: Medicine_details(){
    cout<<"\t\t\t\t\t\t\tAnti cancer drug : \n\n";
    cout<<"\t\t\t\t\t\t\t1. Revlimid.\n";
    cout<<"\t\t\t\t\t\t\t2. Opdiv.\n";
    cout<<"\t\t\t\t\t\t\t3. Imbruvica.\n";
    cout<<"\t\t\t\t\t\t\t4. Keytruda. \n";
    cout<<"\t\t\t\t\t\t\t5. Ibrance. \n\n";
    cout<<"\t\t\t\t\t\t\tAnti heart-attack medicene : \n\n";
    cout<<"\t\t\t\t\t\t\t1.ACE Inhibitors. \n";
    cout<<"\t\t\t\t\t\t\t2. Calcium channel blocker. \n";
    cout<<"\t\t\t\t\t\t\t3. Beta blockers. \n";
    cout<<"\t\t\t\t\t\t\t4. Angiotensin II receptor blocker. \n";
    cout<<"\t\t\t\t\t\t\t5. Aspirin. \n\n";
    cout<<"\t\t\t\t\t\t\tDiabetes medicenes :\n\n";
    cout<<"\t\t\t\t\t\t\t1. Metformin. \n ";
    cout<<"\t\t\t\t\t\t\t2. Thiazolidinediones.\n";
    cout<<"\t\t\t\t\t\t\t3. Meglitinide.\n ";
    cout<<"\t\t\t\t\t\t\t4. Insulin.\n ";
    cout<<"\t\t\t\t\t\t\t5. Dulaglutide.\n\n";


 }
  void hospital :: Medicine_prescription(){
    fstream medicine("medicine.txt", ios::out | ios::app);
    int noOfMedicine;
    string medicine_name;
    cout<<"\t\t\t\t\t\t\t\tenter no. of medicenes :";
    cin>>noOfMedicine;
    cout<<endl;
    for(int i=1; i<=noOfMedicine; i++){
            if(medicine.is_open()){
                cout<<"\t\t\t\t\t\t\t\tmedicine Name: ";
                cin.ignore();
                getline(cin, medicine_name);
                cout<<endl;
                medicine<<"medicine Name: "<<medicine_name<<"\n";
            }else
            {
                cout<<"file not found";
            }
    }
    cout<<"\n\n\t\t\t\t\t\t\tmedicine successfully feeded in files.";
  }
 void hospital::doctor_list()
 {
     cout<<"\t\t\t\t\t\t\t1. Dr. Abdullah Al Siraj\t*Eye Specialist"<<endl<<endl;
     cout<<"\t\t\t\t\t\t\t2. Dr. Altaf Uddin Khan\t\t*Heart Specialist"<<endl<<endl;
     cout<<"\t\t\t\t\t\t\t3. Dr. Emdadul Hoque\t\t*Diabetic specialist"<<endl<<endl;
     cout<<"\t\t\t\t\t\t\t4. Dr. Mostofa Zia\t\t*Heart Surgent"<<endl<<endl;
     cout<<"\t\t\t\t\t\t\t5. Dr. Shorif Uddin\t\t*Eye Specialist"<<endl<<endl;
     cout<<"\t\t\t\t\t\t\t6. Dr. Sifat Hossain\t\t*Diabetic Specialist"<<endl<<endl;
     cout<<"\t\t\t\t\t\t\t7. Dr. Siddratul Islam\t\t*Medicine Specialist"<<endl<<endl;
     cout<<"\t\t\t\t\t\t\t8. Dr. Mominul Hossain Raju\t*Medicine Specialist"<<endl<<endl;
 }

 void hospital::payment()
 {
     int amount, number;

     cout<<"\t\t\t\t\t\t\t\tPatient Name: ";
     cin>>p_name;
     cout<<endl;
     cout<<"\t\t\t\t\t\t\t\tGender: ";
     cin>>gender;
     cout<<endl;
     cout<<"\t\t\t\t\t\t\t\tPatient Problem: ";
     cin>>Disease;
     cout<<endl;
     cout<<"\t\t\t\t\t\t\t\tEnter Amount of treatment: ";
     cin>>amount;
     cout<<endl;
     cout<<"\t\t\t\t\t\t\t\tEnter Your Mobile Number: ";
     cin>>number;

     cout<<"\n\t\t\t\t\t\t\t\tPayment Successful, Thank You!"<<endl<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t"<<p_name<<endl;
     cout<<"\t\t\t\t\t\t\t\t____________________________________"<<endl;
     cout<<"\t\t\t\t\t\t\t\t|    Patient Name: "<<p_name<<endl;
     cout<<"\t\t\t\t\t\t\t\t|    Patient Gender: "<<gender<<endl;
     cout<<"\t\t\t\t\t\t\t\t|    Patient Problem: "<<Disease<<endl;
     cout<<"\t\t\t\t\t\t\t\t|    Payment Amount: "<<amount<<endl;
     cout<<"\t\t\t\t\t\t\t\t|    Mobile: "<<number<<endl;
     cout<<"\n\t\t\t\t\t\t\t\t\tThank You!"<<endl;

 }
 void hospital:: avaliblity_of_beds(){
    int no_beds,bed_count = 100;
    cout<<"\t\t\t\t\t\t\t\tEnter the number of beds allot to patients : ";
    cin>>no_beds;
    cout<<endl;
    for (int i = 1; i <= no_beds; i++){
        cout<<"\t\t\t\t\t\t\t\tPatient name : ";
        cin>>p_name;
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t\tpatient age : ";
        cin>>age;
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t\tpatient Disease : ";
        cin>>Disease;
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t\tpatient address : ";
        cin>>address;
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t\tGender : ";
        cin>>gender;
        cout<<endl;
        bed_count--;
        cout<<"\t\t\t\t\t\t\t\tbed now avalible : "<<bed_count<<endl<<endl;
        }
        
        
    }
 void hospital::hospital_details()
 {
     cout<<"\t\t\t\t\tHospital is a place where the sick and the injured are taken for treatment."<<endl;
     cout<<"\t\t\t\t\tThe doctors and nurses are readily available there for admitting and attending"<<endl;
     cout<<"\t\t\t\t\ton their patiients. The dedicated teams of doctors and nurses delivers the message"<<endl;
     cout<<"\t\t\t\t\tof hope to their patients in the hospitals. All over the world, hospitals are built"<<endl;
     cout<<"\t\t\t\t\tto treat and cure thousands of the sick patients. As these hospitals,there are very"<<endl;
     cout<<"\t\t\t\t\ttwell-equipped facilities and expert doctors. These hospitals are considered the best"<<endl;
     cout<<"\t\t\t\t\tplaces for effective treatment.The doctors and nurses do their work with a dedication"<<endl;
     cout<<"\t\t\t\t\tand maintains the pleasent atmosphere of the hospital so that the patients feel"<<endl;
     cout<<"\t\t\t\t\tcomfortable and better"<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t----------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t|Hospital name|\t\t|Location|\t\t|Beds_available|\t\t|Rating|"<<endl;
    cout<<"\t\t\t\t\t----------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t|h2           |\t\t|xxxxxxxx|\t\t|100           |\t\t|4.9   |"<<endl;
    cout<<"\t\t\t\t\t|h1           |\t\t|xxxxxxxx|\t\t|50            |\t\t|4.5   |"<<endl;
    cout<<"\t\t\t\t\t|h4           |\t\t|xxxxxxxx|\t\t|60            |\t\t|4.0   |"<<endl;
    cout<<"\t\t\t\t\t|h3           |\t\t|xxxxxxxx|\t\t|30            |\t\t|3.6   |"<<endl;
    cout<<"\t\t\t\t\t|h5           |\t\t|xxxxxxxx|\t\t|20            |\t\t|3.5   |"<<endl;
    cout<<"\t\t\t\t\t----------------------------------------------------------------------------------------"<<endl;
    cout<<endl<<endl<<endl;
 }
 void hospital::patient_details(){
    ifstream patient;
    string deatails;
    patient.open("patient.txt");
    if(patient.is_open()){
        while(getline(patient,deatails)){
            cout<<"\t\t\t\t\t\t"<<deatails<<endl;
    }
    patient.close();
    }
 }




                        // Main body
 int main()
{
    int answer, doc, x;
    hospital obj;
    doctor pat;

    do{
        system("cls");
        cout<<"\n\n\t\t\t\t\t\t\t\tHospital Management System"<<endl;    
        cout<<"\t\t\t\t\t\t\t\t_____________________________"<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t1. Emergency Seat Booking"<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t2. Treatment Payment"<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t3. Doctor List & Appoint"<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t4. Hospital Details"<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t5. Patient details"<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t6. Medicine details"<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t7. Medicine prescription"<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t8. Bed alloted by doctor for patient."<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t9. Exit"<<endl<<endl;
        cout<<"\n\t\t\t\t\t\t\tSelect An Option from here 1/2/3/4/5/6/7/8/9 : ";
        cin>>answer;
        switch(answer)
        {
            case 1: cout<<"\n\t\t\t\t\t\t\t\t1. Patient Appoint"<<endl;
            cout<<"\t\t\t\t\t\t\t\t_____________________________"<<endl<<endl;
            obj.patient_appoint();
            break;
            case 2: cout<<"\n\t\t\t\t\t\t\t\t2. Treatment Payment"<<endl;
            cout<<"\t\t\t\t\t\t\t\t_____________________________"<<endl<<endl;
            obj.payment();
            break;
            case 3: cout<<"\n\t\t\t\t\t\t\t\t3. Doctor List"<<endl;
            cout<<"\t\t\t\t\t\t\t\t_______________________________"<<endl<<endl;
            obj.doctor_list();
            cout<<"\n\t\t\t\t\t\t\t\tSelect A Doctor For Appoint: ";
            cin>>doc;
            switch(doc)
            {
                 case 1: cout<<"\n\t\t\t\t\t\t\t\t1. Dr. Abdullah Al Siraj"<<endl;
                 cout<<"\t\t\t\t\t\t\t\t_______________________________"<<endl<<endl;
                 pat.one();
                 break;
                 case 2: cout<<"\n\t\t\t\t\t\t\t\t1. Dr. Altaf Uddin Khan"<<endl;
                 cout<<"\t\t\t\t\t\t\t\t_______________________________"<<endl<<endl;
                 pat.two();
                 break;
                 case 3: cout<<"\n\t\t\t\t\t\t\t\t3. Dr. Emdadul Hoque"<<endl;
                 cout<<"\t\t\t\t\t\t\t\t_______________________________"<<endl<<endl;
                 pat.three();
                 break;
                 case 4: cout<<"\n\t\t\t\t\t\t\t\t4. Dr. Mostofa Zia"<<endl;
                 cout<<"\t\t\t\t\t\t\t\t_______________________________"<<endl<<endl;
                 pat.four();
                 break;
                 case 5: cout<<"\n\t\t\t\t\t\t\t\t5. Dr. Shorif Uddin"<<endl;
                 cout<<"\t\t\t\t\t\t\t\t_______________________________"<<endl<<endl;
                 pat.five();
                 break;
                 case 6: cout<<"\n\t\t\t\t\t\t\t\t6. Dr. Sifat Hossain"<<endl;
                 cout<<"\t\t\t\t\t\t\t\t_______________________________"<<endl<<endl;
                 pat.six();
                 break;
                 case 7: cout<<"\n\t\t\t\t\t\t\t\t7. Dr. Siddratul Islam"<<endl;
                 cout<<"\t\t\t\t\t\t\t\t_______________________________"<<endl<<endl;
                 pat.seven();
                 break;
                 case 8: cout<<"\n\t\t\t\t\t\t\t\t8. Dr. Mominul Hossain Raju"<<endl;
                 cout<<"\t\t\t\t\t\t\t\t_______________________________"<<endl<<endl;
                 pat.eight();
                 break;
                 default:
                    cout<<"\n\t\t\t\t\t\t\t\tUnknown Select! Try Again."<<endl<<endl;
            }
            break;
            case 4: cout<<"\n\t\t\t\t\t\t\t\t4. Hospital Details"<<endl;
            cout<<"\t\t\t\t\t\t\t\t_______________________________"<<endl<<endl;
            obj.hospital_details();
            break;
            case 5:cout<<"\n\t\t\t\t\t\t\t\t5. patient details"<<endl;
            cout<<"\t\t\t\t\t\t\t\t_______________________________"<<endl<<endl;
            obj.patient_details();
            break;
            case 6:cout<<"\n\t\t\t\t\t\t\t\t5. Medicine details"<<endl;
            cout<<"\t\t\t\t\t\t\t\t_______________________________"<<endl<<endl;
            obj.Medicine_details();
            break;
            case 7:cout<<"\n\t\t\t\t\t\t\t\t5. Medicine prescription"<<endl;
            cout<<"\t\t\t\t\t\t\t\t_______________________________"<<endl<<endl;
            obj.Medicine_prescription();
            break;
            case 8:cout<<"\n\t\t\t\t\t\t\t\t5. Medicine prescription"<<endl;
            cout<<"\t\t\t\t\t\t\t\t_______________________________"<<endl<<endl;
            obj.avaliblity_of_beds();
            break;
            case 9:
               if(answer == 9)
               {
                cout<<"\n\t\t\t\t\t\t\t\tthank you for visit.";
                exit(1);
               }
               default:
                   cout<<"\t\t\t\t\t\t\t\tInvalid number entered please...Try Again!"<<endl<<endl;
         }
        cout<<"\n\t\t\t\t\t\t\t do you want to select any option from above options ? : yes or not => ";

        // use for clear previous data

        x = getch() ;

        if(x == 'n' || x == 'N')
        {
         exit(0);
        }
      }
    while(x == 'y' || x == 'Y');
       getch();
}

     
         

