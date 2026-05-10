#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    // data structures for user
    const int TOTAL_USERS = 1000; // total size
    int index = 7;
    int clientIndex=4;
    string usernameArray[TOTAL_USERS] = {"ali", "ammar", "bilal", "sara", "usman", "hina", "zain"};
    string clientnameArray[100] = {"abubaker","usman" ,"fiza","naila"};
    int yearOfExperienceArray[TOTAL_USERS] = {2, 5, 12, 6, 10, 7, 1};
    int scoreArray[TOTAL_USERS] = {4,5,7,10,2,6,8};
    int jobBudget[100];
    int jobDomains[100];
    int jobdays[100];
    string levelArray[TOTAL_USERS];
    
    int jobCount = 0;
    int ID;
    int domainArray[TOTAL_USERS] = {1, 3, 5, 4, 7, 6, 1};
    string jobArray[TOTAL_USERS];

    int userScore = 0;
    while (true)
    {
        // main header of the core
        system("cls");
        cout << "===================================" << endl;
        cout << "       WELCOME TO 'THE CORE'       " << endl;
        cout << "    Where Dreams become Destiny   " << endl;
        cout << "====================================" << endl;
        cout << endl;

        cout << " User menu " << endl;
        cout << " 1. Admin " << endl;
        cout << " 2. User " << endl;
        cout << " 3. Client " << endl;
        cout << " 4. To Exit " << endl;
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
                {
                    system("cls");
                    cout << "1. Show all candidates " << endl;
                    cout << "2. Search Candidates " << endl;
                    cout<<  "3. Show all clients "<<endl;
                    cout << "4. Update Candidate Record " << endl;
                    cout << "5. Remove Candidate Record " << endl;
                    cout << "6.Rank by performance " << endl;
                    cout << "7. System Analytics " << endl;
                    cout << "8. Filter by domain " << endl;
                    cout << " 9. Wipe system data " << endl;
                    cout << " 10. Sort candidates by experience " << endl;
                    cout << " 11. Log out " << endl;
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
                    }if (adminoption == 3)
                    {
                        // show candidates record
                        cout << "client_name\tjob\tdays" << endl;
                        // show students record
                        for (int i = 0; i < clientIndex; i++)
                        {
                            if (clientnameArray[i] != "")
                            {
                                cout << clientnameArray[i] << "\t" << jobDomains[i] << "\t" << jobdays[i] << "\t"
                                     << endl;
                            }
                        }
                    }
                    else if (adminoption == 4)
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
                    else if (adminoption == 5)
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
                    else if (adminoption == 6)
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
                    else if (adminoption == 7)
                    {
                        // system analytics
                        system("cls");
                        cout << "----System Analytics---" << endl;
                        cout << " Total Registered Candidates: " << index << endl;
                        if (index > 0)
                        {
                            int totalExp = 0;
                            for (int i = 0; i < index; i++)
                            {
                                totalExp += yearOfExperienceArray[i];
                            }
                            cout << " Average years of experience: " << (float)totalExp / index << endl;
                        }
                    }
                    else if (adminoption == 8)
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
                    else if (adminoption == 9)
                    {
                        // wipe system data
                        string confirm;
                        cout << " Are you sure you want to wipe all data? (yes/no): ";
                        cin >> confirm;
                        if (confirm == "yes")
                        {
                            index = 0;
                            cout << " System data wiped successflly" << endl;
                        }
                    }
                    else if (adminoption == 10)
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
                    else if (adminoption == 11)
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
            }
        }
        else if (useroption == 2)
        {
            // write here the user code
            system("cls");
            cout << " Welcome to 'THE CORE' " << endl;
            cout << endl;
            if (index < TOTAL_USERS)
            {
                system("cls");
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

                if (domain == 1)
                {
                    system("cls");
                    cout << " please enter the relevant answers for the quiz " << endl;

                    cout << " 1. You are processing a list of 1,000,000 invoices. You need to sum the totals, but you must stop processing immediately if an invoice status is CRITICAL_ERROR. Which approach is the most efficient? " << endl;
                    cout << " a)Use a .forEach() loop and a boolean flag to skip additions after the error is found. " << endl;
                    cout << " b)Use a for...of loop and the break keyword as soon as CRITICAL_ERROR is detected." << endl;
                    cout << " c)Filter the entire array first to remove errors, then use .reduce() to sum the remaining values. " << endl;
                    cout << " Enter the correct option (a, b, or c): ";
                    char answer1;
                    cin >> answer1;
                    if (answer1 == 'b' || answer1 == 'B')
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << " Enter your reason for choosing the specific option in one word: " << endl;
                    string reason;
                    cin >> reason;
                    if (reason == "Short_circuiting")
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }

                    system("cls");
                    cout << "2.Two administrative users click Approve on the same $5,000 reimbursement request at the exact same time. If not handled, the system might deduct $10,000 from the budget. What is the standard industry approach to prevent this Race Condition? " << endl;
                    cout << " a)Client-side validation: Disable the Approve button immediately after the first click. " << endl;
                    cout << " b) Database Sharding: Splitting the database so users are likely on different servers" << endl;
                    cout << " c)Atomic Transactions with Optimistic Locking: Using a version number or timestamp to ensure the record hasn't changed since it was read." << endl;
                    cout << " Enter your answer: ";
                    char answer2;
                    cin >> answer2;
                    if (answer2 == 'c' || answer2 == 'C')
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << " Enter your reason for choosing the specific option in one word: " << endl;
                    string reason1;
                    cin >> reason1;
                    if (reason1 == "Concurrency")
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");

                    cout << "3.Your business app is growing. Users are complaining that the Generate Annual Tax Report button makes the entire website unresponsive for 30 seconds. Which architecture solves this while maintaining a smooth user experience? " << endl;
                    cout << " a)Increase the HTTP timeout limit on the server to 60 seconds so the request doesn't fail." << endl;
                    cout << " b)Move the PDF generation logic to a Stored Procedure directly inside the SQL database." << endl;
                    cout << " c)Implement a Message Queue (e.g., RabbitMQ/Redis) to process the report in a background worker and notify the user via a Webhook or WebSocket when finished." << endl;
                    cout << " Enter your answer: ";
                    char answer3;
                    cin >> answer3;
                    if (answer3 == 'c' || answer3 == 'C')
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << " Enter your reason for choosing the specific option in one word: " << endl;
                    string reason2;
                    cin >> reason2;
                    if (reason2 == "Asynchronicity")
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    cout << " Final Developer Test Score: " << userScore << endl;
                    system("pause");
                     if (userScore == 0)
                    {
                        cout << " Not qualified. Please try again later";
                    }
                    else if (userScore >= 1 && userScore <= 4)
                    {
                        levelArray[index]= "Beginner";
                        cout << " level: " << levelArray[index];

                    }
                    else if (userScore > 4 && userScore <= 7)
                    {
                        levelArray[index]="Mediocre";
                        cout << " level: "<< levelArray[index];
                    }
                    else if (userScore > 7 && userScore <= 10)
                    {
                        levelArray[index] = "Expert";
                        cout << " level: "<< levelArray[index];
                    }
                }
                if (domain == 2)
                {
                    system("cls");
                    cout << "1.You are training a model to predict house prices. One column, 'Square Footage,' has 5% missing values. Which approach is statistically safest to maintain the distribution without deleting records?" << endl;
                    cout << "a)Fill missing values with 0 so the model ignores them. " << endl;
                    cout << "b)Use Mean or Median Imputation to fill the gaps based on existing data." << endl;
                    cout << "c)Leave them as NaN and let the machine learning algorithm figure it out." << endl;
                    cout << " Enter your answer: ";
                    char answer1;
                    cin >> answer1;
                    if (answer1 == 'b' || answer1 == 'B')
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << " Enter your reason for choosing the specific option in one word: " << endl;
                    string reason;
                    cin >> reason;
                    if (reason == "Imputation")
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << "2.You have a medical dataset where only 1 percent of patients have a rare disease. Your model achieves 99percent accuracy by predicting that 'nobody has the disease.'' Why is this a poor model for a business application?" << endl;
                    cout << "a)The accuracy is too high, indicating the model is overfitting." << endl;
                    cout << "b)Accuracy is a misleading metric for imbalanced classes; you should check Recall or F1-Score." << endl;
                    cout << "c)The model is too slow to process the remaining 1 percent of data." << endl;
                    char answer2;
                    cin >> answer2;
                    if (answer2 == 'b' || answer2 == 'B')
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << " Enter your reason for choosing the specific option in one word: " << endl;
                    string reason1;
                    cin >> reason1;
                    if (reason1 == "Imbalance")
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << "3.You are building a model to predict if a user will churn (cancel their subscription) next month. You accidentally include 'Total Minutes Used in the Target Month' as a training feature. What is the name of this critical error? " << endl;
                    cout << "a)Data Leakage: The model is 'cheating' by seeing the future during training." << endl;
                    cout << "b)Hyperparameter Tuning: The model is too complex for the given data." << endl;
                    cout << "c)Dimensionality Reduction: There are too many variables for the model to handle." << endl;
                    char answer3;
                    cin >> answer3;
                    if (answer3 == 'a' || answer3 == 'A')
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << " Enter your reason for choosing the specific option in one word: " << endl;
                    string reason2;
                    cin >> reason2;
                    if (reason1 == "Leakage")
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    cout << " Final Developer Test Score: " << userScore << endl;
                    system("pause");
                     if (userScore == 0)
                    {
                        cout << " Not qualified. Please try again later";
                    }
                    else if (userScore >= 1 && userScore <= 4)
                    {
                        levelArray[index]= "Beginner";
                        cout << " level: " << levelArray[index];

                    }
                    else if (userScore > 4 && userScore <= 7)
                    {
                        levelArray[index]="Mediocre";
                        cout << " level: "<< levelArray[index];
                    }
                    else if (userScore > 7 && userScore <= 10)
                    {
                        levelArray[index] = "Expert";
                        cout << " level: "<< levelArray[index];
                    }
                }
                if (domain == 3)
                {
                    system("cls");
                    cout << "1.A company wants to stop hackers from using stolen passwords to access employee accounts. Which implementation provides the strongest layer of defense?" << endl;
                    cout << "a)Requiring employees to change their passwords every 30 days." << endl;
                    cout << "b)Multi-Factor Authentication (MFA) using a physical security key or app-based TOTP." << endl;
                    cout << "c)Increasing the minimum password length to 16 characters." << endl;
                    char answer1;
                    cin >> answer1;
                    if (answer1 == 'b' || answer1 == 'B')
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << " Enter your reason for choosing the specific option in one word: " << endl;
                    string reason;
                    cin >> reason;
                    if (reason == "MFA")
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << "2.An attacker sits between a user's laptop and a public Wi-Fi router, intercepting unencrypted data packets to steal session cookies. What type of attack is this?" << endl;
                    cout << "a)Man-in-the-Middle (MitM) attack." << endl;
                    cout << "b)Distributed Denial of Service (DDoS)." << endl;
                    cout << "c)SQL Injection." << endl;
                    char answer2;
                    cin >> answer2;
                    if (answer2 == 'a' || answer2 == 'A')
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << " Enter your reason for choosing the specific option in one word: " << endl;
                    string reason1;
                    cin >> reason1;
                    if (reason1 == "Interception")
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << "3.An employee receives an email that looks exactly like an internal IT memo. It contains a 'Zero-Day' exploit that executes as soon as a specific PDF is opened, bypassing traditional antivirus. What is this targeted strategy called?" << endl;
                    cout << "a)Brute Forcing." << endl;
                    cout << "b)Spear-Phishing" << endl;
                    cout << "c)Cross-Site Scripting (XSS)." << endl;
                    char answer3;
                    cin >> answer3;
                    if (answer3 == 'b' || answer3 == 'B')
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << " Enter your reason for choosing the specific option in one word: " << endl;
                    string reason2;
                    cin >> reason2;
                    if (reason2 == "Spear-Phishing")
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    cout << " Final Developer Test Score: " << userScore << endl;
                    system("pause");
                     if (userScore == 0)
                    {
                        cout << " Not qualified. Please try again later";
                    }
                    else if (userScore >= 1 && userScore <= 4)
                    {
                        levelArray[index]= "Beginner";
                        cout << " level: " << levelArray[index];

                    }
                    else if (userScore > 4 && userScore <= 7)
                    {
                        levelArray[index]="Mediocre";
                        cout << " level: "<< levelArray[index];
                    }
                    else if (userScore > 7 && userScore <= 10)
                    {
                        levelArray[index] = "Expert";
                        cout << " level: "<< levelArray[index];
                    }
                }
                if (domain == 4)
                {
                    system("cls");
                    cout << "1.A company wants to host a website but doesn't want to manage servers, operating systems, or hardware. They only want to upload their code and let the provider handle the rest. Which service model is this?" << endl;
                    cout << "a)Infrastructure as a Service (IaaS)" << endl;
                    cout << "b)Platform as a Service (PaaS)" << endl;
                    cout << "c)Software as a Service (SaaS)" << endl;
                    char answer1;
                    cin >> answer1;
                    if (answer1 == 'b' || answer1 == 'B')
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << " Enter your reason for choosing the specific option in one word: " << endl;
                    string reason;
                    cin >> reason;
                    if (reason == "Platform")
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << "2.To ensure a business application stays online even if an entire data center loses power due to a natural disaster, a cloud architect should deploy the application across multiple what?" << endl;
                    cout << "a)Edge Locations" << endl;
                    cout << "b)Availability Zones (AZs)" << endl;
                    cout << "c)Virtual Private Clouds (VPCs)" << endl;
                    char answer2;
                    cin >> answer2;
                    if (answer2 == 'b' || answer2 == 'B')
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << " Enter your reason for choosing the specific option in one word: " << endl;
                    string reason1;
                    cin >> reason1;
                    if (reason1 == "Redundancy")
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << "3.Your application experiences sudden, unpredictable spikes in traffic every Tuesday at 2:00 PM. Which cloud feature allows the system to automatically add or remove virtual servers in real-time to maintain performance while minimizing costs?" << endl;
                    cout << "a)Vertical Scaling (Upsizing the CPU)" << endl;
                    cout << "b)Content Delivery Network (CDN)" << endl;
                    cout << "c)Auto-Scaling" << endl;
                    char answer3;
                    cin >> answer3;
                    if (answer3 == 'b' || answer3 == 'B')
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << " Enter your reason for choosing the specific option in one word: " << endl;
                    string reason2;
                    cin >> reason2;
                    if (reason2 == "Elasticity")
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    cout << " Final Developer Test Score: " << userScore << endl;
                    system("pause");
                     if (userScore == 0)
                    {
                        cout << " Not qualified. Please try again later";
                    }
                    else if (userScore >= 1 && userScore <= 4)
                    {
                        levelArray[index]= "Beginner";
                        cout << " level: " << levelArray[index];

                    }
                    else if (userScore > 4 && userScore <= 7)
                    {
                        levelArray[index]="Mediocre";
                        cout << " level: "<< levelArray[index];
                    }
                    else if (userScore > 7 && userScore <= 10)
                    {
                        levelArray[index] = "Expert";
                        cout << " level: "<< levelArray[index];
                    }
                }
                if (domain == 5)
                {
                    system("cls");
                    cout << "1.You are building an AI to classify emails as 'Spam' or 'Not Spam.' You provide the model with 10,000 emails that are already labeled so it can learn the patterns. What type of learning is this?" << endl;
                    cout << "a)Unsupervised Learning" << endl;
                    cout << "b)Supervised Learning" << endl;
                    cout << "c)Reinforcement Learning" << endl;
                    char answer1;
                    cin >> answer1;
                    if (answer1 == 'b' || answer1 == 'B')
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << " Enter your reason for choosing the specific option in one word: " << endl;
                    string reason;
                    cin >> reason;
                    if (reason == "Labelling")
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << "2.In a Deep Learning model, which component is responsible for determining the 'importance' of a specific input signal and is adjusted during the training process to reduce errors?" << endl;
                    cout << "a)The Activation Function" << endl;
                    cout << "b)The Weights" << endl;
                    cout << "c)The Input Layer" << endl;
                    char answer2;
                    cin >> answer2;
                    if (answer2 == 'b' || answer2 == 'B')
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << " Enter your reason for choosing the specific option in one word: " << endl;
                    string reason1;
                    cin >> reason1;
                    if (reason1 == "Weights")
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << "3.Your AI model performs perfectly (100 percent accuracy) on your training data, but when you show it new, real-world data, it fails completely. What is the most likely cause of this failure?" << endl;
                    cout << "a)Underfitting: The model is too simple to learn the data." << endl;
                    cout << "b)Overfitting: The model memorized the training noise instead of learning general patterns." << endl;
                    cout << "c)Gradient Vanishing: The model stopped updating during training." << endl;
                    char answer3;
                    cin >> answer3;
                    if (answer3 == 'b' || answer3 == 'B')
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    system("cls");
                    cout << " Enter your reason for choosing the specific option in one word: " << endl;
                    string reason2;
                    cin >> reason2;
                    if (reason2 == "Overfitting")
                    {
                        userScore = userScore + 1;
                    }
                    else
                    {
                        userScore = userScore;
                    }
                    cout << " Final Developer Test Score: " << userScore << endl;
                    system("pause");
                    if (userScore == 0)
                    {
                        cout << " Not qualified. Please try again later";
                    }
                    else if (userScore >= 1 && userScore <= 4)
                    {
                        levelArray[index]= "Beginner";
                        cout << " level: " << levelArray[index];

                    }
                    else if (userScore > 4 && userScore <= 7)
                    {
                        levelArray[index]="Mediocre";
                        cout << " level: "<< levelArray[index];
                    }
                    else if (userScore > 7 && userScore <= 10)
                    {
                        levelArray[index] = "Expert";
                        cout << " level: "<< levelArray[index];
                    }
                }
            }
            cout << " View Available jobs " << endl;
            cout << jobArray;
            cout << " Select the ID of the job: " << endl;

            cin >> ID;
        }
        if (useroption == 3)
        {
            system("cls");
            cout<<" Enter your name: "<<endl;
            string clientname;
            cin>> clientname;
            clientnameArray[clientIndex] = clientname;
            cout << " What would best describe your work?  " << endl;
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
            int job;
            cin >> job;
            jobDomains[clientIndex]= job;
            
            system("pause");

            cout << " Describe your project (e.g: goals, features, or specific tasks): " << endl;
            cin.ignore();
            string project;
            getline(cin, project);

            cout << " What is your budget for this project?  " << endl;
            cout << " (Note: the minimum budget is $50): ";
            int budget;
            cin >> budget;
            jobBudget[clientIndex] = budget;

            cout << " When do you need this completd? " << endl;
            cout << " (Note: The minimun number of days are 2): " << endl;
            int days;
            cin >> days;
            jobdays[clientIndex] = days;
            clientIndex++;
            cout << " What is your project size (small, big, medium): ";
            string size;
            cin >> size;
            if (days <= 2 && size == "small" && size == "medium")
            {
                
                cout << " beginner level job " << endl;
                cout<<"-----Matching Candidates-----"<<endl;
                for(int i=0; i<index; i++ ){

                    if(domainArray[i] == job && levelArray[i] == "beginner"){
                        cout<<" Match Found: "<<usernameArray[i] << levelArray[i] <<endl;
                    }
                }
            }
            else if (days > 2 && days <= 7)
            {
                cout << " Intermediate level job" << endl;
                 cout<<"-----Matching Candidates-----"<<endl;
                for(int i=0; i<index; i++ ){

                    if(domainArray[i] == job && levelArray[i] == "Mediocre"){
                        cout<<" Match Found: "<<usernameArray[i] << levelArray[i] <<endl;
                    }
                }
            }
            else if (days > 7 && size == " big")
            {
                cout << " Expert level job" << endl;
                 cout<<"-----Matching Candidates-----"<<endl;
                for(int i=0; i<index; i++ ){

                    if(domainArray[i] == job && levelArray[i] == "Expert"){
                        cout<<" Match Found: "<<usernameArray[i] << levelArray[i] <<endl;
                    }
                }
            }
            
        }
    }
}
