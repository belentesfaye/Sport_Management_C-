#include <string>
#include <vector>
#include "NBATeam.h"

using namespace std;

string NBATeam::getTeamName() const {
    return teamName;
}

string NBATeam::getConference() const {
    return conference;
}

int NBATeam::getTotalRevenue() const {
    return totalRevenue;
}

int NBATeam::getExpenses() const {
    return expenses;
}

int NBATeam::getNetIncome() const {
    return netIncome;
}

void NBATeam::setTeamName(const string& teamName) {
    this->teamName = teamName;
}


void NBATeam::setConference(const string& conference){
    this->conference = conference;
}

void NBATeam::setTotalRevenue(int totalRevenue) {
    this->totalRevenue = totalRevenue;
}

void NBATeam::setExpenses(int expenses) {
    this->expenses = expenses;
}

void NBATeam::setNetIncome(int netIncome) {
    this->netIncome = netIncome;
}
