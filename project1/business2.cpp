#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    // data structures for user
    const int TOTAL_USERS = 1000; // total size
    int index = 0;
    string usernameArray[TOTAL_USERS];
    int yearOfExperienceArray[TOTAL_USERS];
    int scoreArray[TOTAL_USERS];
    int domainArray[TOTAL_USERS];
    while (true)
    {
        // main header of the core
        system("cls");
        cout << "===================================" << endl;
        cout << "       WELCOME TO 'Hope'       " << endl;
        cout << "    Where Dreams become Destiny   " << endl;
        cout << "====================================" << endl;
        cout << endl;

        cout << " User menu " << endl;
        cout << " 1. Admin " << endl;
        cout << " 2. User " << endl;
        cout << " 3. To Exit " << endl;
        cout << " Choose Option " << endl;
        int useroption;
        cin >> useroption;

        if (useroption == 1)
        {
            // write here the admin code
            bool loginSuccess = false;
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << " Admin Menu : login attempts left - " << 3 - i << endl;
                cout << " Enter username: " << endl;
                string username;
                cin >> username;
                cout << " Enter password: " << endl;
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    loginSuccess = true;
                   
                 break;
                }
                else
                {
                    cout << "Invalid credentials" << endl;
                    getch();
                }
            }
            if (loginSuccess)
            {
                while (true)
                {system("cls");
                    cout << "1. Show all candidates " << endl;
                    cout << "2. Search Candidates " << endl;
                    cout << "3. Update Candidate Record " << endl;
                    cout << "4. Remove Candidate Record " << endl;
                    cout << " Rank by performance " << endl;
                    cout << "6. System Analytics " << endl;
                    cout << "7. Filter by domain " << endl;
                    cout << " 8. Wipe system data " << endl;
                    cout << " 9. Sort candidates by experience " << endl;
                    cout << " 10. Log out " << endl;
                    cout << " Choose the option: ";
                    int adminoption;
                    cin >> adminoption;
                    if (adminoption == 1)
                    {
                        // show candidates record
                        cout << "Name\tExperience\tdomain" << endl;
                        // show students record
                        for (int i = 0; i < index; i++)
                        {
                            if (usernameArray[i] != "")
                            {
                                cout << usernameArray[i] << "\t" << yearOfExperienceArray[i] << "\t" << domainArray[i] << "\t"
                                     << endl;
                            }
                        }
                    }
    
                    else if (adminoption == 2)
                    {
                        // search candidates by name
                        cout << " Enter name to search: ";
                        string name;
                        cin >> name;
                        bool found = false;

                        for (int i = 0; i < index; i++)
                        {
                            if (usernameArray[i] == name)
                            {
                                cout << "Name\texperience\tdomain" << endl;
                                cout << usernameArray[i] << "\t" << yearOfExperienceArray[i] << "\t" << domainArray[i] << endl;

                                found = true;
                            }
                        }
                        if (found == false)
                        {
                            cout << " Candidate record not found " << name << endl;
                        }
                    }
                    else if (adminoption == 3)
                    {
                        // update candidate record
                        cout << " Enter name to search: ";
                        string name;
                        cin >> name;
                        bool found = false;
                        int foundindex = -1;

                        for (int i = 0; i < index; i++)
                        {
                            if (usernameArray[i] == name)
                            {
                                cout << "name\texperience\tdomain" << endl;
                                cout << usernameArray[i] << "\t" << yearOfExperienceArray[i] << "\t" << domainArray[i] << endl;

                                found = true;
                                foundindex = i;
                            }
                        }
                        if (found == true)
                        {
                            cout << " -----Old record-----" << endl;
                            cout << "name\texperience\tdomain" << endl;
                            cout << usernameArray[foundindex] << "\t" << yearOfExperienceArray[foundindex] << "\t" << domainArray[foundindex] << endl;

                            cout << " Enter new record for update " << endl;

                            cout << " Enter your name: ";
                            string name;
                            cin >> name;

                            cout << " Enter years of experience: ";
                            int experience;
                            cin >> experience;
                            cout << " Enter new domain of intrest: ";
                            int domain;
                            cin >> domain;

                            usernameArray[foundindex] = name;
                            yearOfExperienceArray[foundindex] = experience;
                            domainArray[foundindex] = domain;
                        }
                    }
                    else if (adminoption == 4)
                    {
                        // remove candidate record
                        cout << " Enter the name of the candidate to delete: ";
                        string target;
                        cin >> target;
                        bool found = false;
                        for (int i = 0; i < index; i++)
                        {
                            if (usernameArray[i] == target)
                            {
                                found = true;
                                // Shift all arrays to remove the record
                                for (int j = i; j < index - 1; j++)
                                {
                                    usernameArray[j] = usernameArray[j + 1];
                                    yearOfExperienceArray[j] = yearOfExperienceArray[j + 1];
                                    scoreArray[j] = scoreArray[j + 1];
                                    domainArray[j] = domainArray[j + 1];
                                }
                                index--; // Decrement the index
                                cout << "Candidate " << target << " removed successfully." << endl;
                                 // Exit after removal
                            }
                        }
                        if (!found)
                        {
                            cout << "Candidate " << target << " not found." << endl;
                        }
                    }
                    else if (adminoption == 5)
                    {
                        // rank candidates by performance
                        int tempDomain;
                        string tempName;
                        int tempExperience;
                        int tempScore;

                        for (int i = 0; i < index - 1; i++)
                        {
                            for (int j = 0; j < index - i - 1; j++)
                            {
                                if (scoreArray[j] < scoreArray[j + 1])
                                {
                                    tempDomain = domainArray[j];
                                    domainArray[j] = domainArray[j + 1];
                                    domainArray[j + 1] = tempDomain;

                                    tempName = usernameArray[j];
                                    usernameArray[j] = usernameArray[j + 1];
                                    usernameArray[j + 1] = tempName;

                                    tempScore = scoreArray[j];
                                    scoreArray[j] = scoreArray[j + 1];
                                    scoreArray[j + 1] = tempScore;
                                }
                            }
                        }

                        cout << "Candidates ranked by score" << endl;
                        cout << "name\tscore" << endl;
                        for (int i = 0; i < index; i++)
                        {
                            cout << usernameArray[i] << "\t" << scoreArray[i] << endl;
                        }
                    }
                    else if (adminoption == 6)
                    {
                        // system analytics
                        system("cls");
                        cout<<"----System Analytics---"<<endl;
                        cout<<" Total Registered Candidates: "<<index <<endl;
                        if (index >0){
                            int totalExp =0;
                            for(int i = 0; i < index; i++){
                                totalExp+=yearOfExperienceArray[i];
                            }
                            cout<<" Average years of experience: "<<(float)totalExp / index <<endl;
                        }
                    }
                    else if (adminoption == 7)
                    {
                        // filter candidates by domain
                        int tempScore;
                        string tempName;

                        int tempDomain;
                        for (int i = 0; i < index - 1; i++)
                        {
                            for (int j = 0; j < index - i - 1; j++)
                            {
                                if (domainArray[j] < domainArray[j + 1])
                                {

                                    tempName = usernameArray[j];
                                    usernameArray[j] = usernameArray[j + 1];
                                    usernameArray[j + 1] = tempName;

                                    tempDomain = domainArray[j];
                                    domainArray[j] = domainArray[j + 1];
                                    domainArray[j + 1] = tempDomain;
                                }
                            }
                        }

                        cout << "Candidates ranked by performance" << endl;
                        cout << "name\tdomain" << endl;
                        for (int i = 0; i < index; i++)
                        {
                            cout << usernameArray[i] << "\t" << domainArray[i] << endl;
                        }
                    }
                    else if (adminoption == 8)
                    {
                        // wipe system data
                        string confirm;
                        cout<<" Are you sure you want to wipe all data? (yes/no): ";
                        cin>>confirm;
                        if(confirm == "yes"){
                            index = 0;
                            cout<<" System data wiped successflly"<<endl;

                        }
                    }
                    else if (adminoption == 9)
                    {
                        // sort candidates by experience
                        int tempExperience;
                        string tempName;

                        int tempDomain;
                        for (int i = 0; i < index - 1; i++)
                        {
                            for (int j = 0; j < index - i - 1; j++)
                            {
                                if (yearOfExperienceArray[j] < yearOfExperienceArray[j + 1])
                                {

                                    tempName = usernameArray[j];
                                    usernameArray[j] = usernameArray[j + 1];
                                    usernameArray[j + 1] = tempName;

                                    tempExperience = yearOfExperienceArray[j];
                                    yearOfExperienceArray[j] = yearOfExperienceArray[j + 1];
                                    yearOfExperienceArray[j + 1] = tempExperience;
                                }
                            }
                        }

                        cout << "Candidates ranked by experience" << endl;
                        cout << "name\texperience" << endl;
                        for (int i = 0; i < index; i++)
                        {
                            cout << usernameArray[i] << "\t" << yearOfExperienceArray[i] << endl;
                        }
                    }
                    else if (adminoption == 10)
                    {
                        // log out
                        cout << " Logged out ";
                        break;
                    }
                    else
                    {
                        cout << " Wrong option selected " << endl;
                    }
                    getch();
                       break;
                }
             
            }}
            else if (useroption == 2)
            {
                // write here the user code
                system("cls");
                cout << " Welcome to 'HOPE' " << endl;
                cout << endl;
                if (index < TOTAL_USERS)
                {
                    cout << " Enter your name: " << endl;
                    string name;
                    cin >> name;
                    cout << " Enter years of experience: " << endl;
                    int experience;
                    cin >> experience;
                    cout << " Choose your domain of interest: " << endl;
                    cout << " 1. Software Development " << endl;
                    cout << " 2. Data Science " << endl;
                    cout << " 3. Cybersecurity " << endl;
                    cout << " 4. Cloud Computing " << endl;
                    cout << " 5. Artificial Intelligence " << endl;
                    cout << " 6. Game Development " << endl;
                    cout << " 7. Mobile App Development " << endl;
                    cout << " 8. DevOps " << endl;
                    cout << " 9. UI/UX Design " << endl;
                    cout << " 10. Blockchain Development " << endl;
                    cout << endl;
                    cout << " Enter the number corresponding to your domain of interest: ";
                    int domain;
                    cin >> domain;
                    // store user data in arrays
                    usernameArray[index] = name;
                    yearOfExperienceArray[index] = experience;
                    domainArray[index] = domain;
                    index++;
                    cout << name << " has been registered successfully in the system!" << endl;
                    cout << " Press any key to continue.." << endl;

                    getch();
                }
            }
            else if (useroption == 3)
            {
                cout << " Exiting the program. Goodbye! " << endl;
                break;
            }
            else
            {
                cout << " Invalid option. Please try again. " << endl;
            }
        
        }}    
        