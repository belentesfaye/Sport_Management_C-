#include "src/controller/NBAController.h"
#include "src/view/TeamView.h"
#include "src/model/NBATeam.h"



int main() {
    mvc::NBATeam model;
    mvc::TeamView view;
    mvc::NBAController controller(model);

    controller.fetchTeamDetails("Golden State Warriors", "Western", 1000000, 500000, 500000);
    return 0;
}