#include <iostream>
#include <conio.h>

using namespace std;
// prototype start
void addUser(string username, string password, string role);
string who();
char userMenu();
char adminMenu();
char clientMenu();
void clearScreen();
void mainHeader();
void candidateRecord();
void searchCandidateByName();
void clientRecord();
void updateRecord();
void removeCandidate();
void sortByPerformance();
void sortByExperience();
void sortByScore();
void viewProfile();
void editProfile();
void viewJobRecommendations();
void applyForJob();
// prototype end

// Data structures start
const int TOTAL_USERS = 100;
int count_users = 0;
int currentUser = -1; // To track the currently logged-in user
string usernameArray[TOTAL_USERS];
string passwordArray[TOTAL_USERS];
string rolesArray[TOTAL_USERS];
const int TOTAL_JOBS = 100;
int jobCount = 0;
string jobTitleArray[TOTAL_JOBS];
string jobDescriptionArray[TOTAL_JOBS];
int jobDomainArray[TOTAL_JOBS];
const int TOTAL_CANDIDATES = 100;
int yearsofExperienceArray[TOTAL_CANDIDATES];
int candidateDomainArray[TOTAL_CANDIDATES];
int scoreArray[TOTAL_CANDIDATES];

const int TOTAL_CLIENTS = 100;
int clientCount = 0;
string clientNameArray[TOTAL_CLIENTS];
string clientContactArray[TOTAL_CLIENTS];

// data structures end

main()
{ // main function start
    addUser("admin", "123", "ADMIN");
    addUser("candidate", "456", "CANDIDATE");
    addUser("client", "789", "CLIENT");
    while (true)
    {
        string w = who();
        if (w == "admin")
        {
            char adminOption;
            while (true)
            {
                system("cls");
                adminOption = adminMenu();
                if (adminOption == '1')
                {
                    cout << "Showing candidates record " << endl;
                    candidateRecord();
                }
                else if (adminOption == '2')
                {
                    cout << "Searching candidates by name " << endl;
                    searchCandidateByName();
                }
                else if (adminOption == '3')
                {
                    cout << "Showing clients record " << endl;
                    clientRecord();
                }
                else if (adminOption == '4')
                {
                    cout << "Updating candidate record " << endl;
                    updateRecord();
                }
                else if (adminOption == '5')
                {
                    cout << "Removing candidate record " << endl;
                    removeCandidate();
                }
                else if (adminOption == '6')
                {
                    cout << "Ranking candidates by performance " << endl;
                    sortByPerformance();

                }
                else if (adminOption == '7')
                {
                    cout << "Sorting candidates by experience " << endl;
                    sortByExperience();
                }
                else if (adminOption == '8')
                {
                    cout << "Sorting candidates by score " << endl;
                    sortByScore();
                }
                else if (adminOption == '9')
                {
                    cout << "Logging out " << endl;
                    break;
                }
                else
                {
                    cout << "Invalid option selected " << endl;
                }
                clearScreen();
            }
        }
        else if (w == "user")
        {
            char userOption;
            while (true)
            {
                system("cls");
                userOption = userMenu();
                if (userOption == '1')
                {
                    cout << "Viewing profile " << endl;
                    viewProfile();
                }
                else if (userOption == '2')
                {
                    cout << "Editing profile " << endl;
                    editProfile();
                }
                else if (userOption == '3')
                {
                    cout << "Viewing job recommendations " << endl;
                    viewJobRecommendations();
                }
                else if (userOption == '4')
                {
                    cout << "Applying for a job " << endl;
                    applyForJob();
                }
                else if (userOption == '5')
                {
                    cout << "Logging out " << endl;
                    break;
                }
                else
                {
                    cout << "Invalid option selected " << endl;
                }
                clearScreen();
            }
        }
        else if (w == "client")
        {
            char clientOption;
            while (true)
            {
                system("cls");
                clientOption = clientMenu();
                if (clientOption == '1')
                {
                    cout << "Viewing posted jobs " << endl;
                    viewPostedJobs();
                }
                else if (clientOption == '2')
                {
                    cout << "Posting a new job " << endl;
                    postNewJob();
                }
                else if (clientOption == '3')
                {
                    cout << "Viewing candidates for a job " << endl;
                    viewCandidatesForJob();
                }
                else if (clientOption == '4')
                {
                    cout << "Logging out " << endl;
                    break;
                }
                else
                {
                    cout << "Invalid option selected " << endl;
                }
                clearScreen();
            }
        }
        else
        {
            cout << "Invalid credentials " << endl;
        }
    }
} // main end

// ----------------Function implementation start
string who()
{
    string username;
    string password;
    cout << " Enter username " << endl;
    cin >> username;
    cout << " Enter password " << endl;
    cin >> password;
    for (int i = 0; i < TOTAL_USERS; i++)
    {
        if (usernameArray[i] == username && passwordArray[i] == password)
        {
            return rolesArray[i];
        }else{
  return "Invalid";
        }
    }
  
}
void addUser(string username, string password, string role)
{
    if (count_users < TOTAL_USERS)
    {
        usernameArray[count_users] = username;
        passwordArray[count_users] = password;
        rolesArray[count_users] = role;
        count_users++;
    }
    else
    {
        cout << "User limit reached " << endl;
    }
}
char adminMenu()
{
    mainHeader();
    cout << " Admin Menu " << endl;
    cout << " 1. Show candidates record " << endl;
    cout << " 2. Search candidates by name " << endl;
    cout << " 3. Show clients record " << endl;
    cout << " 4. Update candidate record " << endl;
    cout << " 5. Remove candidate record " << endl;
    cout << " 6. Rank candidates by performance " << endl;
    cout << " 7. Sort candidates by experience " << endl;
    cout << " 8. Sort candidates by score " << endl;
    cout << " 9. Log out " << endl;
    cout << " Choose option " << endl;
    char option;
    cin >> option;
    return option;
}
char userMenu()
{
    mainHeader();
    cout << " User Menu " << endl;
    cout << " 1. View profile " << endl;
    cout << " 2. Edit profile " << endl;
    cout << " 3. View job recommendations " << endl;
    cout << " 4. Apply for a job " << endl;
    cout << " 5. Log out " << endl;
    cout << " Choose option " << endl;
    char option;
    cin >> option;
    return option;
}
char clientMenu()
{
    mainHeader();
    cout << " Client Menu " << endl;
    cout << " 1. View posted jobs " << endl;
    cout << " 2. Post a new job " << endl;
    cout << " 3. View candidates for a job " << endl;
    cout << " 4. Log out " << endl;
    cout << " Choose option " << endl;
    char option;
    cin >> option;
    return option;
}
void clearScreen()
{
    cout << " Press any key to continue " << endl;
    getch();
    system("cls");
}
void candidateRecord()
{
    cout << "Name\tExperience\tdomain" << endl;
    // show students record
    for (int i = 0; i < count_users; i++)
    {
        if (usernameArray[i] != "")
        {
            cout << usernameArray[i] << "\t" << yearsofExperienceArray[i] << "\t" << candidateDomainArray[i] << "\t";
        }
    }
    cout << endl;
}
void searchCandidateByName()
{
    string name;
    bool found = false;
    for (int i = 0; i < count_users; i++)
    {
        if (usernameArray[i] == name)
        {
            cout << "Name\tExperience\tdomain " << endl;
            cout << usernameArray[i] << "\t" << yearsofExperienceArray[i] << "\t" << candidateDomainArray[i] << endl;
            found = true;
        }
    }
    if (found == false)
    {
        cout << "Candidate record not found " << name << endl;
    }
}
void clientRecord()
{
    cout << "client_name\tjob\tdays " << endl;
    // show client record
    for (int i = 0; i < clientCount; i++)
    {
        if (clientNameArray[i] != "")
        {
            cout << clientNameArray[i] << "\t" << jobTitleArray[i] << "\t" << jobDomainArray[i] << "\t";
        }
    }
    cout << endl;
}
void updateRecord()
{
    string name;
    cout << "Enter the name of the candidate to update: ";
    cin >> name;
    bool found = false;
    for (int i = 0; i < count_users; i++)
    {
        if (usernameArray[i] == name)
        {
            cout << "Name\tExperience\tdomain " << endl;
            cout << usernameArray[i] << "\t" << yearsofExperienceArray[i] << "\t" << candidateDomainArray[i] << endl;
            found = true;
            cout << "Enter new record for update " << endl;
            cout << "Enter name: ";
            string name;
            cin >> name;
            cout << "Enter years of experience: ";
            int experience;
            cin >> experience;
            cout << "Enter new domain of interest: ";
            int domain;
            cin >> domain;

            usernameArray[i] = name;
            yearsofExperienceArray[i] = experience;
            candidateDomainArray[i] = domain;
        }
    }
}
void removeCandidate()
{
    // remove candidate record
    cout << " Enter the name of the candidate to delete: ";
    string target;
    cin >> target;
    bool found = false;
    for (int i = 0; i < count_users; i++)
    {
        if (usernameArray[i] == target)
        {
            found = true;
            // Shift all arrays to remove the record
            for (int j = i; j < count_users - 1; j++)
            {
                usernameArray[j] = usernameArray[j + 1];
                yearsofExperienceArray[j] = yearsofExperienceArray[j + 1];
                scoreArray[j] = scoreArray[j + 1];
                candidateDomainArray[j] = candidateDomainArray[j + 1];
            }
            count_users--; // Decrement the user count
            cout << "Candidate " << target << " removed successfully." << endl;
            // Exit after removal
        }
    }
    if (!found)
    {
        cout << "Candidate " << target << " not found." << endl;
    }
}
void mainHeader()
{
    cout << "    -----------------------------" << endl;
    cout << "         Welcome to THE CORE " << endl;
    cout << "     Where Dreams become Destiny   " << endl;
    cout << "    -----------------------------" << endl;
}
void sortByPerformance()
{
    // sort candidates by performance
    for (int i = 0; i < count_users - 1; i++)
    {
        for (int j = 0; j < count_users - i - 1; j++)
        {
            if (scoreArray[j] < scoreArray[j + 1])
            {
                // Swap scores
                int tempScore = scoreArray[j];
                scoreArray[j] = scoreArray[j + 1];
                scoreArray[j + 1] = tempScore;

                // Swap corresponding candidate details
                string tempName = usernameArray[j];
                usernameArray[j] = usernameArray[j + 1];
                usernameArray[j + 1] = tempName;

                int tempExperience = yearsofExperienceArray[j];
                yearsofExperienceArray[j] = yearsofExperienceArray[j + 1];
                yearsofExperienceArray[j + 1] = tempExperience;

                int tempDomain = candidateDomainArray[j];
                candidateDomainArray[j] = candidateDomainArray[j + 1];
                candidateDomainArray[j + 1] = tempDomain;
            }
        }
    }
}   
void sortByExperience()
{
    // sort candidates by experience
    for (int i = 0; i < count_users - 1; i++)
    {
        for (int j = 0; j < count_users - i - 1; j++)
        {
            if (yearsofExperienceArray[j] < yearsofExperienceArray[j + 1])
            {
                // Swap experience
                int tempExperience = yearsofExperienceArray[j];
                yearsofExperienceArray[j] = yearsofExperienceArray[j + 1];
                yearsofExperienceArray[j + 1] = tempExperience;

                // Swap corresponding candidate details
                string tempName = usernameArray[j];
                usernameArray[j] = usernameArray[j + 1];
                usernameArray[j + 1] = tempName;

                int tempScore = scoreArray[j];
                scoreArray[j] = scoreArray[j + 1];
                scoreArray[j + 1] = tempScore;

                int tempDomain = candidateDomainArray[j];
                candidateDomainArray[j] = candidateDomainArray[j + 1];
                candidateDomainArray[j + 1] = tempDomain;
            }
        }
    }
}
void sortByScore()
{
    // sort candidates by score
    for (int i = 0; i < count_users - 1; i++)
    {
        for (int j = 0; j < count_users - i - 1; j++)
        {
            if (scoreArray[j] < scoreArray[j + 1])
            {
                // Swap scores
                int tempScore = scoreArray[j];
                scoreArray[j] = scoreArray[j + 1];
                scoreArray[j + 1] = tempScore;

                // Swap corresponding candidate details
                string tempName = usernameArray[j];
                usernameArray[j] = usernameArray[j + 1];
                usernameArray[j + 1] = tempName;

                int tempExperience = yearsofExperienceArray[j];
                yearsofExperienceArray[j] = yearsofExperienceArray[j + 1];
                yearsofExperienceArray[j + 1] = tempExperience;

                int tempDomain = candidateDomainArray[j];
                candidateDomainArray[j] = candidateDomainArray[j + 1];
                candidateDomainArray[j + 1] = tempDomain;
            }
        }
    }
}
void viewProfile()
{
    // view user profile
    cout << "User Profile:" << endl;
    cout << "Name: " << usernameArray[currentUser] << endl;
    cout << "Experience: " << yearsofExperienceArray[currentUser] << " years" << endl;
    cout << "Performance Score: " << scoreArray[currentUser] << endl;
    cout << "Domain: " << candidateDomainArray[currentUser] << endl;
}
void editProfile()
{
    // edit user profile
    cout << "Edit Profile:" << endl;
    cout << "Enter new name: ";
    string newName;
    cin >> newName;
    cout << "Enter new years of experience: ";
    int newExperience;
    cin >> newExperience;
    cout << "Enter new performance score: ";
    int newScore;
    cin >> newScore;
    cout << "Enter new domain: ";
    int newDomain;
    cin >> newDomain;

    usernameArray[currentUser] = newName;
    yearsofExperienceArray[currentUser] = newExperience;
    scoreArray[currentUser] = newScore;
    candidateDomainArray[currentUser] = newDomain;

    cout << "Profile updated successfully." << endl;
}
void viewJobRecommendations()
{
    // view job recommendations based on user profile
    cout << "Job Recommendations for " << usernameArray[currentUser] << ":" << endl;
    for (int i = 0; i < jobCount; i++)
    {
        if (jobDomainArray[i] == candidateDomainArray[currentUser])
        {
            cout << "Job Title: " << jobTitleArray[i] << endl;
            cout << "Job Description: " << jobDescriptionArray[i] << endl;
            cout << "-----------------------------" << endl;
        }
    }
}
void applyForJob()
{
    // apply for a job
    cout << "Enter the job title you want to apply for: ";
    string jobTitle;
    cin >> jobTitle;
    bool found = false;
    for (int i = 0; i < jobCount; i++)
    {
        if (jobTitleArray[i] == jobTitle)
        {
            found = true;
            cout << "Applying for job: " << jobTitleArray[i] << endl;
            cout << "Job Description: " << jobDescriptionArray[i] << endl;
            cout << "Application submitted successfully." << endl;
            break;
        }
    }
    if (!found)
    {
        cout << "Job title " << jobTitle << " not found." << endl;
    }
}
void viewPostedJobs()
{
    // view jobs posted by the client
    cout << "Posted Jobs:" << endl;
    for (int i = 0; i < jobCount; i++)
    {
        if (clientNameArray[i] == usernameArray[currentUser])
        {
            cout << "Job Title: " << jobTitleArray[i] << endl;
            cout << "Job Description: " << jobDescriptionArray[i] << endl;
            cout << "-----------------------------" << endl;
        }
    }
}
void postNewJob()
{
    // post a new job
    cout << "Enter job title: ";
    string jobTitle;
    cin >> jobTitle;
    cout << "Enter job description: ";
    string jobDescription;
    cin.ignore(); // Clear the input buffer
    getline(cin, jobDescription);
    cout << "Enter job domain (as an integer): ";
    int jobDomain;
    cin >> jobDomain;

    if (jobCount < TOTAL_JOBS)
    {
        jobTitleArray[jobCount] = jobTitle;
        jobDescriptionArray[jobCount] = jobDescription;
        jobDomainArray[jobCount] = jobDomain;
        clientNameArray[jobCount] = usernameArray[currentUser];
        jobCount++;
        cout << "Job posted successfully." << endl;
    }
    else
    {
        cout << "Job limit reached." << endl;
    }
} 
void viewCandidatesForJob()
{
    // view candidates who applied for a specific job
    cout << "Enter the job title to view candidates: ";
    string jobTitle;
    cin >> jobTitle;
    bool found = false;
    for (int i = 0; i < jobCount; i++)
    {
        if (jobTitleArray[i] == jobTitle && clientNameArray[i] == usernameArray[currentUser])
        {
            found = true;
            cout << "Candidates for job: " << jobTitleArray[i] << endl;
            for (int j = 0; j < count_users; j++)
            {
                if (candidateDomainArray[j] == jobDomainArray[i])
                {
                    cout << "Candidate Name: " << usernameArray[j] << endl;
                    cout << "Experience: " << yearsofExperienceArray[j] << " years" << endl;
                    cout << "Performance Score: " << scoreArray[j] << endl;
                    cout << "-----------------------------" << endl;
                }
            }
            break;
        }
    }
    if (!found)
    {
        cout << "Job title " << jobTitle << " not found or you are not the owner of this job." << endl;
    }
}
void viewPostedJobs()
{
    // view jobs posted by the client
    cout << "Posted Jobs:" << endl;
    for (int i = 0; i < jobCount; i++)
    {
        if (clientNameArray[i] == usernameArray[currentUser])
        {
            cout << "Job Title: " << jobTitleArray[i] << endl;
            cout << "Job Description: " << jobDescriptionArray[i] << endl;
            cout << "-----------------------------" << endl;
        }
    }
}

//-----------------Function implementation end