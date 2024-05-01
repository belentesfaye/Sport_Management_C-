#include "NBAController.h"
#include "NBAView.h"
#include "NBA.h"
#include "gtest/gtest.h"
#include <sstream> 

class NBAControllerTest : public ::testing::Test {
protected:
    NBAControllerTest() {
        nba = new NBA();
        view = new NBAView();
        controller = new NBAController(nba, view);
    }

    ~NBAControllerTest() {
        delete controller;
        delete view;
        delete nba;
    }

    NBA* nba;
    NBAView* view;
    NBAController* controller;
};

TEST_F(NBAControllerTest, testAddTeam) {
    controller->addTeam("Lakers", "Los Angeles", "Western", "Pacific");
    controller->addTeam("Warriors", "Golden State", "Western", "Pacific");
    controller->addTeam("Celtics", "Boston", "Eastern", "Atlantic");
    controller->addTeam("Raptors", "Toronto", "Eastern", "Atlantic");
    controller->addTeam("Bulls", "Chicago", "Eastern", "Central");
    controller->addTeam("Pistons", "Detroit", "Eastern", "Central");

    std::stringstream ss;
    controller->printTeams(ss);
    std::string expected = "Lakers, Los Angeles, Western, Pacific\n"
                           "Warriors, Golden State, Western, Pacific\n"
                           "Celtics, Boston, Eastern, Atlantic\n"
                           "Raptors, Toronto, Eastern, Atlantic\n"
                           "Bulls, Chicago, Eastern, Central\n"
                           "Pistons, Detroit, Eastern, Central\n";
    EXPECT_EQ(expected, ss.str());
}
