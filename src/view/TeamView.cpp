#include <iostream>
#include "TeamView.h"

using namespace std;

namespace mvc {
    TeamView::TeamView() {
    }

    TeamView::~TeamView() {
    }

    void TeamView::printTeamDetails(string teamName, string conference, int totalRevenue, int expenses, int netIncome){
        cout << "Team: " << teamName << endl;
        cout << "Conference: " << conference << endl;
        cout << "Total Revenue: " << totalRevenue << endl;
        cout << "Expenses: " << expenses << endl;
        cout << "Net Income: " << netIncome << endl;
    }
} /* namespace mvc */
