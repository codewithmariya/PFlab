 return 0;

    cout << " User menu " << endl;
    cout << " 1. Admin " << endl;
    cout << " 2. User " << endl;
    cout << " 3. To Exit " << endl;
    cout << " Choose Option ";
    int useroption;
    cin >> useroption;
    if (useroption == 1)
    {
        // write here the admin code
        for (int i = 0; i < 3; i++)
        {
            int countattempt = 0;
            system("cls");
            cout << " Admin Menu " << endl;
            cout << " Enter username: " << endl;
            string username;
            cin >> username;
            cout << " Enter password: ";
            string password;
            cin >> password;
            cout << " logged in successfully " << endl;
        }
        else if (useroption == 2)
        {
            // write here the usercode
            system("cls");
            cout << " Welcome to the user Menu" << endl;

            cout << " Enter your full name: ";
            string name;
            getline(cin, name);
            cout << " Enter years of experience: ";
            int experience;
            cin >> experience;
            cout << " Choose an option: ";
            cout << " 1. Software Development " << endl;
            cout << " 2. Data Science " << endl;
            cout << " 3. Cybersecurity " << endl;
            cout << " 4. Cloud Computing " << endl;
            cout << " 5. Artificial Intelligence " << endl;
            int domain;
            cin >> domain;
        }
    }