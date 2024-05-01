#include <string>
#include "../model/NBATeam.h"
#include "../view/TeamView.h"
#include "NBAController.h"

using namespace std;

namespace mvc {
    NBAController::NBAController(const NBATeam& model) : model(model) {
        this->model = model;
    }

    NBAController::~NBAController() {
    }

    void NBAController::fetchTeamDetails(string teamName, string conference, int totalRevenue, int expenses, int netIncome) {
    model.setTeamName(teamName);
    model.setConference(conference);
    model.setTotalRevenue(totalRevenue);
    model.setExpenses(expenses);
    model.setNetIncome(netIncome);

    // Now fetch the team details from the model
    string fetchedTeamName = model.getTeamName();
    string fetchedConference = model.getConference();
    int fetchedTotalRevenue = model.getTotalRevenue();
    int fetchedExpenses = model.getExpenses();
    int fetchedNetIncome = model.getNetIncome();

    // Display or use the fetched team details
    view.printTeamDetails(fetchedTeamName, fetchedConference, fetchedTotalRevenue, fetchedExpenses, fetchedNetIncome);
}

    void NBAController::setTeamName(string teamName){
        model.setTeamName(teamName);
    }

    std::string NBAController::getTeamName(){
        return model.getTeamName();
    }

    void NBAController::setConference(string conference){
        model.setConference(conference);
    }

    std::string NBAController::getConference(){
        return model.getConference();
    }

    void NBAController::setTotalRevenue(int totalRevenue){
        model.setTotalRevenue(totalRevenue);
    }

    int NBAController::getTotalRevenue(){
        return model.getTotalRevenue();
    }

    void NBAController::setExpenses(int expenses){
        model.setExpenses(expenses);
    }

    int NBAController::getExpenses(){
        return model.getExpenses();
    }

    void NBAController::setNetIncome(int netIncome){
        model.setNetIncome(netIncome);
    }

    int NBAController::getNetIncome(){
        return model.getNetIncome();
    }

    void NBAController::updateView(){
        view.printTeamDetails(model.getTeamName(), model.getConference(), model.getTotalRevenue(), model.getExpenses(), model.getNetIncome());
    }
}
