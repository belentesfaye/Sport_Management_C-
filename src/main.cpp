#include "controller/NBAController.h"
#include "view/TeamView.h"
#include "model/NBATeam.h"


using namespace std;
using namespace mvc;

NBATeam retrieveTeamFromDatabase(const string& teamName) {
    // Retrieve team information from the database
    // For demonstration purposes, let's create a sample team
    return NBATeam(teamName, "Western", 1000000, 500000, 500000);
}


int main() {
    // Retrieve team information from the database
    NBATeam model = retrieveTeamFromDatabase("Lakers");

    // Create a TeamView object
    TeamView view;

    // Create an NBAController object with the model and view
    NBAController controller(model, view);

    // Update the view with the initial team information
    controller.updateView();

    // Change the team name to "Warriors"
    controller.setTeamName("Warriors");

    // Update the view after modifying the team name
    controller.updateView();

    return 0;
}