#pragma once
#ifndef TEAMVIEW_H_
#define TEAMVIEW_H_

#include "../model/NBATeam.h"

namespace mvc {

class TeamView {
    public:
        TeamView();
        virtual ~TeamView();

        void printTeamDetails(string teamName, string conference, int totalRevenue, int expenses, int netIncome);
};
    
    } /* namespace mvc */
    #endif /* TEAMVIEW_H_ */