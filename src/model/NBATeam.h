#ifndef NBATEAM_H
#define NBATEAM_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class NBATeam {
private:
    string teamName;
    string conference;
    int totalRevenue;
    int expenses;
    int netIncome;

public:
    NBATeam(string teamName, string conference, int totalRevenue, int expenses, int netIncome)
        : teamName(teamName), conference(conference), totalRevenue(totalRevenue), expenses(expenses), netIncome(netIncome) {}

    string getTeamName() const;
    string getConference() const;
    int getTotalRevenue() const;
    int getExpenses() const;
    int getNetIncome() const;

void setTeamName(const string& teamName);
    void setConference(const string& conference);
    void setTotalRevenue(int totalRevenue);
    void setExpenses(int expenses);
    void setNetIncome(int netIncome);

    void display() const;
};

#endif // NBATEAM_H

