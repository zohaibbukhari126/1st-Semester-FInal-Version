#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Declare variables for gender
char male,female;


// Define a struct to store patient information
typedef struct BIODATA
{
   char name[20];
   int age;
   char gender;
   char bloodgroup[2];
}Patient;


// Define a struct to store information about diseases
struct Diseases
{
    int key1;
    int key2;
    char names[10000];
    char symptom[1000];
};


// Function prototypes
void InputPatientInfo(Patient *p);
void OutputPatientInfo(Patient p);
void displaySymptom();
void fullslip();
void border();
void hypen();




int main()
{
    // Prompt the user to select an option
    char choice;
    Patient p;
    printf("Enter a to enter biodata\nEnter b to Display symptom\nEnter c for generating full patient slip\nEnter your choice: ");
    scanf(" %c", &choice);

     // Execute the chosen option
    switch (choice)
    {
    case 'a':
        // Clear the screen and input patient information
        system("cls");
        InputPatientInfo(&p);
        system("cls");
        OutputPatientInfo(p);
        break;
    case 'b':
        // Clear the screen and display symptoms for a body part
        system("cls");
        displaySymptom();

        break;
    case 'c':
         // Clear the screen and generate a full patient slip
        system("cls");
        fullslip();

        break;
    default:
        // Display an error message if the choice is invalid
        printf("Invalid choice!\n");
        break;
    }
    border();
    return 0;
}



// Function to display symptoms for a body part
void displaySymptom()
{
    int bodypart;

    // Prompt the user to select a body part
    printf("Please enter the number corresponding to the body part you would like to check. \n\n");
    printf("\n1.\t|        Eye Related        |\n\n");
    printf("\n2.\t| Heart and Chest diseases  |\n\n");
    printf("\n3.\t|      Stomach Related      |\n\n");
    printf("\n4.\t|       Lungs Related       |\n\n");
    printf("\n5.\t|Nerves and Pancreas Related|\n\n");

    // Read the user's selection
    scanf("%d",&bodypart);
    system("cls");

    // Display symptoms for the selected body part
    switch(bodypart)
    {

    printf("\n\t\t\t\t\t|  SYMPTOMS  |\n");
    hypen();
    case 1:
        {
            system("cls");
    printf("\n\t\t\t\t |        Eye Related       |\n\n\n");

    printf("1. Tiredness in eyes");
    printf("\n\n2. Difficulty to see or blurry distant objects");
    printf("\n\n3. Difficulty to see or blurry nearby objects\n");
    hypen();
    break;
        }
    case 2:
        {
            system("cls");
    printf("\n\t\t\t\t | Heart and Chest diseases |\n\n\n");

    printf("4. Upper left side of chest burning / Heart burning");
    printf("\n\n5. Shortness of breath");
    printf("\n\n6. Coughing\n");
    hypen();
    break;
        }
    case 3:
        {
            system("cls");
    printf("\n\t\t\t\t |      Stomach Related     |\n\n\n");

    printf("7. Burning or gnawing pain in centre and upper abdomen(tummy) especially b/w meals and during night");
    printf("\n\n8. Burning or gnawing pain in lower abdomen especially b/w meals and during night");
    printf("\n\n9. Nausea(feeling like you might vomit)\n");
    hypen();
    break;
        }
    case 4:
        {
            system("cls");
    printf("\n\t\t\t\t |       Lungs Related      |\n\n\n");

    printf("10.Fever");
    printf("\n\n11.Dry cough with shortness of breath");
    printf("\n\n12.Wet cough with shortness of breath\n");
    hypen();
    break;
        }
    case 5:
        {
            system("cls");
    printf("\n\t\t\t\t|Nerves and Pancreas Related|\n\n\n");

    printf("13.Having numb or tingling hands or feet");
    printf("\n\n14.Feeling very tired");
    printf("\n\n15.Tingling, Pricking, Chilling, Burning sensation\n");
    hypen();
    break;
        }
    }
}

// Function to input patient information
void InputPatientInfo(Patient *p) {
    int i;

  printf("Enter patient name: ");
  fflush(stdin);
  gets((*p).name);

  fflush(stdin);
  printf("Enter patient age : ");
  scanf("%d", &(*p).age);
  printf("Enter patient gender('m' for male and 'f' for female): ");
  scanf(" %c", &(*p).gender);

  printf("Enter Blood Group of Patient :");
  fflush(stdin);
  gets((*p).bloodgroup);
  fflush(stdin);

}
// Function to output patient information
void OutputPatientInfo(Patient p) {
    printf("");
    border();
  printf("\n\n\tPatient Name    :      %s\n\n", p.name);
  printf("\tPatient Age     :      %d\n\n", p.age);
  if((p).gender== 'm')
  {
  printf("\tPatient Gender  :      Male\n\n");
  }
  if((p).gender== 'f')
  {

  printf("\tPatient Gender  :      Female\n\n");
  }
  printf("\tPatient Blood(G):      %s\n\n", p.bloodgroup);


}




void fullslip()
{
    Patient p;
    InputPatientInfo(&p);

    int opt1, opt2;
    char check;
    system("cls");
    displaySymptom();
    struct Diseases array[] =
    {
        //Option number1 , Option number2, Disease along with additional symptoms ,treatment, Symptom which are inputed by the user
        {1, 2, "Myopia(Nearsightedness)\n\n\tOther symptoms for Myopia include Headaches, Squinting, Eye strain\n\n\tDiagnosis and Treatment:\n\tAn eye exam can show you if you are myopic\n\tGlasses, contacts, or refractive surgery can usually correct the problem\n\tThe most common procedures for myopia are:\n\tPhotorefractive keratectomy\n\tLASIK Surgery\n\tEVO Implantable Collamer Lens (ICL)\n","Tiredness in eyes\n\t\t\t      Difficulty to see or blurry distant objects\n"},
        {1, 3, "Hyperopia(Farsightedness)\n\n\tOther symptoms for Hyperopia include Fatigue or headache\n\tafter you do a close-up task such as reading and\n\tHeadaches, Squinting, Eye strain\n\n\tTreatment:\n\tFor clear vision, you might need:\n\tGlasses\n\tContact lenses\n\tVision correction surgery such as LASIK\n","Tiredness in eyes\n\t\t\t      Difficulty to see or blurry nearby objects\n"},
        {2, 3, "Astigmatism\n\n\tOther symptoms for Astigmatism include Blurry or distorted vision,\n\tEyestrain,Headaches,Trouble seeing at night\n\n\tTreatment:\n\tEyeglasses\n\tContact lenses\n\tDoctors can also use surgery to treat astigmatism\n","Difficulty to see or blurry nearby objects\n\t\t\t      Difficulty to see or blurry distant objects\n"},
        {4, 5, "Angina\n\n\tOther symptoms for Angina include Feeling of fullness in your chest,\n\tDizziness,Sweating,Feeling of heaviness or pressure\n\n\tTreatment:\n\tTreatment depends on how much damage there is to your heart. For people\n\t with mild angina, medicine and lifestyle changes can often help their\n\tblood flow better and control their symptoms.\n\tOther methods for treatment include\n\tAngioplasty/stenting\n\tCoronary artery bypass grafting (CABG), or bypass surgery","Upper left side of chest burning / Heart burning\n\t\t\t      Shortness of breath\n"},
        {4, 6, "Gastroesophageal reflux disease (GERD)\n\n\tOther symptoms for (GERD) include Suddenly having too much saliva,\n\tSour or bitter taste in the mouth,Nausea ,Trouble or pain when swallowing\n\n\tTreatment:\n\tCan be treated with medications Antacids that neutralize stomach acid,\n\tMedications to reduce acid production,Medications that block acid\n\tproduction and heal the esophagus\n","Coughing\n\t\t\t      Upper left side of chest burning / Heart burning\n"},
        {5, 6, "Asthma\n\n\tOther symptoms for Asthama include Wheezing, a whistling sound when you\n\tbreathe, Tightness, pain, or pressure in your chest,Pale, sweaty face\n\n\tTreatment\n\tCombination inhaler\n\tOral and intravenous corticosteroids\n\tExercise regularly.\n\tAvoid asthma triggers\n","Shortness of breath\n\t\t\t      Coughing\n"},
        {7, 8, "Peptic Ulcer\n\n\tOther symptoms for Peptic Ulcer include Lack of appetite or weight loss\n\tBloody or dark poop,Vomiting\n\n\tTreatment:\n\tDon’t smoke\n\tManage stress\n\tTake medications that block acid production and promote healing\n","Burning or gnawing pain in centre and upper abdomen(tummy) especially\n\t b/w meals and during night\n\t\t\t      Burning or gnawing pain in lower abdomen especially\n\t b/w meals and during night\n"},
        {8, 9, "Duodenal Ulcer\n\n\tOther symptoms for Duodenal Ulcer include have indigestion,lose weight\n\n\tDiagnose and Treatment:\n\tIt can be diagnosed by\n\tBlood test\n\ta stool (poo) sample\n\ta breath test\n\tTreatment include\n\tTaking Antibiotics, Antacids and H2-blockers\n\tQuitting smoking\n\tNot Eating spicy foods\n","Nausea(feeling like you might vomit)\n\t\t\t      Burning or gnawing pain in lower abdomen especially\n\t b/w meals and during night\n"},
        {7, 9, "Gastric Ulcer\n\n\tOther symptoms for Gastric Ulcer include indigestion, heartburn and\n\t acid reflux\n\n\tTreatment:\n\tMedication such as paracetamol is recommended\n,","Burning or gnawing pain in centre and upper abdomen(tummy) especially\n\t b/w meals and during night\n\t\t\t      Nausea(feeling like you might vomit)\n"},
        {10, 11, "Influenza\n\n\tOther symptoms for Influenza include runny or stuffy nose,headaches and\n\tsore throat\n\n\tTreatment:\n\tYou will need nothing more than rest and plenty of fluids to treat the flu\n\tDrink plenty of liquids\n\tGet more sleep to help your immune system fight infection.\n","Fever\n\t\t\t      Dry cough with shortness of breath\n"},
        {11, 12, "Severe Acute Respiratory Syndrome (SARS)\n\n\tOther symptoms for Severe Acute Respiratory Syndrome (SARS) include fever\n\n\tTreatment/Prevention:\n\tSARS is a serious illness that can lead to death\n\tWash your hands\n\tWear a surgical mask\n\tDisinfect surfaces\n\tWear disposable gloves\n\tWash personal items\n","Wet cough with shortness of breath\n\t\t\t      Dry cough with shortness of breath\n"},
        {10, 12, "Pneumonia\n\n\tOther symptoms for Pneumonia include Nausea, vomiting or diarrhea\n\tFatigue\n\n\tTreatment:\n\tIt can be treated mildly by taking medications such as \n\tAntibiotics\n\tCough medicine\n\tFever reducers/pain relievers\nVisit a doctor if you have severe\n","Fever\n\t\t\t      Wet cough with shortness of breath and chest pain\n"},
        {13, 14, "Diabetes\n\n\tOther symptoms for Diabetes include Urinating often,\n\tFeeling more thirsty than usual,Having slow-healing sores,Feeling irritable\n\t or having other mood changes, Getting a lot of infections, such as gum,\n\tskin and vaginal infections\n\n\tTreatment:\n\tThere are various treatment for Diabetes such as\n\tInsulin pumps\n\tWeight loss surgery\n\tTablets and medication\n\tIslet cell transplant\n\tDiet and exercise\n","Having numb or tingling hands or feet\n\t\t\t      Feeling very tired\n"},
        {14, 15, "Diabetic Neuropathy\n\n\tOther symptoms for Diabetic Neuropathy include Sharp pains or cramps,\n\tMuscle weakness\n\n\tTreatment:\n\tRelieving pain through Anti-seizure drugs,Antidepressants\n\tDrinking plenty of water\n","Feeling very tired\n\t\t\t      Tingling, Pricking, Chilling, Burning sensation\n"},
        {13, 15, "Neuropathy\n\n\tOther symptoms for Neuropathy include pins and needles in the affected\n\tbody part,Feeling pain on a very light touch\n\n\tTreatment:\n\tMedications to treat such disease are\n\tPain relievers\n\tAnti-seizure medications\n\tTopical treatments\n\tAntidepressants\n\tSurgery and Physical Therapy can also help in treatment of Neuropathy\n","Having numb or tingling hands or feet\n\t\t\t      Tingling, Pricking, Chilling, Burning sensation\n"},

    };

    printf("\nEnter you first option: ");
    scanf("%d", &opt1);
    printf("Enter you second option: ");
    scanf("%d", &opt2);

    int found = 0;
    char disease[20000];
    char symptom[200];
    for (int counter = 0; counter < 15; counter++)
    {
        if (opt1 == array[counter].key1 || opt1 == array[counter].key2)
        {
            if (opt2 == array[counter].key1 || opt2 == array[counter].key2)
            {
                strcpy(disease, array[counter].names);
                strcpy(symptom, array[counter].symptom);
                found = 1;
                break;
            }
        }
    }

    if (!found)
    {
        strcpy(disease, "Invalid Symptom! Do again\n\n");
    }

    system("cls");
    OutputPatientInfo(p);
    printf("\tSymptom No #    :      %d, %d\n\n", opt1, opt2);
    printf("\tSymptom         :      %s\n", symptom);
    printf("\tDisease         :      %s\n", disease);

    border();
}

// Draw a border in the program
void border()
{
    printf("\n\t+-----------------------------------+-----------------------------------+\t\n");


}

// Draw a border in the program
void hypen()
{
    printf("\n--------------------------------------------------------------------------------------------------\n");
}
