#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int TOTAL_STUDENTS = 1000; // total size
    int index = 7;

    // data structures
    string nameArray[TOTAL_STUDENTS] = {"ali", "ammar", "bilal", "sara", "usman", "hina", "zain"};
    int ageArray[TOTAL_STUDENTS] = {19, 20, 21, 19, 22, 20, 21};
    float matricArray[TOTAL_STUDENTS] = {1050, 890, 950, 1020, 780, 1100, 860};
    float interArray[TOTAL_STUDENTS] = {980, 850, 900, 960, 820, 1050, 870};
    float ecatArray[TOTAL_STUDENTS] = {350, 200, 280, 320, 180, 370, 240};
    string pref1Array[TOTAL_STUDENTS] = {"CE", "CS", "EE", "CS", "CE", "CS", "EE"};
    string pref2Array[TOTAL_STUDENTS] = {"CS", "CE", "CS", "EE", "CS", "EE", "CE"};
    string pref3Array[TOTAL_STUDENTS] = {"EE", "CS", "CE", "CE", "EE", "CE", "CS"};
    float aggriArray[TOTAL_STUDENTS];


    while (true)
    {
        // main header of ums
        system("cls");
        cout << endl;
        cout << " ------------------------------------------------" << endl;
        cout << " -----University Admission Management System-----" << endl;
        cout << " ------------------------------------------------" << endl;

        cout << " User menu " << endl;
        cout << " 1. Admin " << endl;
        cout << " 2. Student " << endl;
        cout << " 3. To Exit " << endl;
        cout << " Choose Option ";
        int useroption;
        cin >> useroption;

        cout << " You chose " << useroption << endl;
        if (useroption == 1)
        {
            // write here the admin code
            for (int i = 0; i < 3; i++)
            {
                int countattempy = 0;
                system("cls");
                cout << " Admin Menu " << endl;
                cout << " Enter username: " << endl;
                string username;
                cin >> username;
                cout << " Enter password: ";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << "Logged in Successfully ";

                    while (true)
                    {
                        system("cls");
                        cout << "1. Show all students " << endl;
                        cout << "2. Search Students " << endl;
                        cout << "3.Update student Record " << endl;
                        cout << "4. Generate Merit List " << endl;
                        cout << "5. Delete Record by name " << endl;
                        cout << "6. Log out" << endl;
                        cout << " Choose the option: ";
                        int adminoption;
                        cin >> adminoption;
                        if (adminoption == 1)
                        {
                            cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                            // show students record
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                         << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                }
                            }
                        }
                        else if (adminoption == 2)
                        {
                            // find student by name;
                            cout << " Enter name to search: ";
                            string name;
                            cin >> name;
                            bool found = false;

                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                         << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << " Student record not found " << name << endl;
                            }
                        }
                        else if (adminoption == 3)
                        {
                            // update student record
                            cout << " Enter name to search: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;

                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                         << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                    found = true;
                                    foundindex = i;
                                }
                            }
                            if (found == true)
                            {
                                cout << " -----Old record-----" << endl;
                                cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                                cout << " Enter new record for update " << endl;

                                cout << " Enter your name: ";
                                string name;
                                cin >> name;

                                cout << " Enter new age: ";
                                int age;
                                cin >> age;
                                cout << " Enter new Matric marks: ";
                                float matric;
                                cin >> matric;
                                cout << " Enter new FSC Marks: ";
                                float fsc;
                                cin >> fsc;
                                cout << " Enter new ECAT Marks: ";
                                float ecat;
                                cin >> ecat;
                                cout << " Enter new CS, CE, EE as your preferences" << endl;

                                cout << " Enter new 1st preference: ";
                                string pref1;
                                cin >> pref1;

                                cout << " Enter new 2nd preference: ";
                                string pref2;
                                cin >> pref2;

                                cout << " Enter new 3rd preference: ";
                                string pref3;
                                cin >> pref3;

                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matric;
                                interArray[foundindex] = fsc;
                                ecatArray[foundindex] = ecat;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;
                            }
                        }
                        else if (adminoption == 4)
                        {
                            // generate merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggri = matricArray[i] / 1050.0 * 100.0 * 0.30 + interArray[i] / 1100.0 * 100.0 * 0.40 + ecatArray[i] / 400.0 * 100.0 * 0.30;
                                aggriArray[i] = aggri;
                            }
                            // 77, 90,29,33
                            // sort the data based on aggregate
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i + 1; j < index; j++)
                                {
                                    if (aggriArray[i] < aggriArray[j])
                                    {
                                        // swapping of name
                                        // swapping of name
                                        string temp = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = temp;

                                        // swapping of age
                                        int tempAge = ageArray[i];
                                        ageArray[i] = ageArray[j];
                                        ageArray[j] = tempAge;

                                        // swapping of matric
                                        float tempMatric = matricArray[i];
                                        matricArray[i] = matricArray[j];
                                        matricArray[j] = tempMatric;

                                        // swapping of inter
                                        float tempInter = interArray[i];
                                        interArray[i] = interArray[j];
                                        interArray[j] = tempInter;

                                        // swapping of ecat
                                        float tempEcat = ecatArray[i];
                                        ecatArray[i] = ecatArray[j];
                                        ecatArray[j] = tempEcat;

                                        // swapping of pref1
                                        string tempPref1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j] = tempPref1;

                                        // swapping of pref2
                                        string tempPref2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j] = tempPref2;

                                        // swapping of pref3
                                        string tempPref3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j] = tempPref3;

                                        // swapping of aggregate
                                        float tempAggri = aggriArray[i];
                                        aggriArray[i] = aggriArray[j];
                                        aggriArray[j] = tempAggri;
                                    }
                                }
                            }
                            // code to display all data with aggregate
                            cout << "Name\tAge\tAggregate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t"
                                         << aggriArray[i] << endl;
                                }
                            }
                            // admit students into disciplines
                            
                        }
                        else if (adminoption == 5)
                        {
                            // delete student record;
                            cout << " Enter name you want to delete: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;

                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                         << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                    found = true;
                                    foundindex = i;
                                }
                            }
                            if (found == true)
                            {
                                nameArray[foundindex] = "";
                                ageArray[foundindex] = 0;
                                matricArray[foundindex] = 0;
                                interArray[foundindex] = 0;
                                ecatArray[foundindex] = 0;
                                pref1Array[foundindex] = "";
                                pref2Array[foundindex] = "";
                                pref3Array[foundindex] = "";
                                cout << " Record of " << name << " has been deleted " << endl;
                            }
                            else
                            {
                                cout << " Student record not found " << name << endl;
                            }
                        }
                        else if (adminoption == 6)
                        {
                            break;
                        }
                        else
                        {
                            cout << " Wrong option selected " << endl;
                        }
                        cout << " Press any key to continue.." << endl;
                        getch();
                    }
                    cout << " Press any key to continue.." << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << " Username or password is invalid " << endl;
                }
                cout << " Press any key to continue..";
                getch();
            }
        }
        else if (useroption == 2)
        {
            // write here the student code
            system("cls");
            cout << " Welcome to UMS Student Menu" << endl;
            cout << " Enter your Name: ";
            string name;
            cin >> name;
            cout << " Enter age:: ";
            int age;
            cin >> age;
            cout << " Enter Matric marks: ";
            float matric;
            cin >> matric;
            cout << " Enter FSC Marks: ";
            float fsc;
            cin >> fsc;
            cout << " Enter ECAT Marks: ";
            float ecat;
            cin >> ecat;
            cout << " Enter CS, CE, EE as your preferences" << endl;

            cout << " Enter your 1st preference: ";
            string pref1;
            cin >> pref1;

            cout << " Enter your 2nd preference: ";
            string pref2;
            cin >> pref2;

            cout << " Enter your 3rd preference: ";
            string pref3;
            cin >> pref3;

            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = fsc;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index++;
            cout << " Your data has been saved ";

            getch();
        }
        else if (useroption == 3)
        {
            break;
        }
        else
        {
            cout << " You entered wrong optin" << endl;
        }
    } // end of main while loop
    cout << endl
         << " Thanks for choosing this software";
}