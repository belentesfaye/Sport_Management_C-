#ifndef NBACONTROLLER_H_
#define NBACONTROLLER_H_

#include "../model/NBATeam.h"
#include "../view/TeamView.h"

#include <string>

namespace mvc {
    class NBAController {
    private:
        NBATeam model;
        TeamView view;

    public:
        NBAController(const NBATeam& model);
        virtual ~NBAController();

        void fetchTeamDetails(std::string teamName, std::string conference, int totalRevenue, int expenses, int netIncome);

        void setTeamName(std::string teamName);
        std::string getTeamName();

        void setConference(std::string conference);
        std::string getConference();

        void setTotalRevenue(int totalRevenue);
        int getTotalRevenue();

        void setExpenses(int expenses);
        int getExpenses();

        void setNetIncome(int netIncome);
        int getNetIncome();
    };
} /* namespace mvc */

#endif /* NBACONTROLLER_H_ */
