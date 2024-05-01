# Sport Management - C++ MVC

This is a simple Model-View-Controller (MVC) application for managing sports teams, specifically focusing on NBA teams. It allows users to perform basic CRUD (Create, Read, Update, Delete) operations on NBA team data.

## Features

- **Add New Teams**: Users can add new NBA teams with details such as team name, conference, total revenue, expenses, and net income.
- **View Team Details**: Existing NBA teams can be viewed with their respective details.
- **Update Team Information**: Users can update information about NBA teams, including team name, conference, revenue, expenses, and net income.

## Installation

1. Clone this repository to your local machine:

```bash
git clone https://github.com/belentesfaye/Sport_Management_C-.git
```

2. Navigate to the project directory:

```bash
cd Sport_Management_C-
```

3. Compile the source code:

```bash
g++ -Isrc src/main.cpp src/controller/NBAController.cpp src/view/TeamView.cpp src/model/NBATeam.cpp -o mvc_app
```

4. Run the executable:

```bash
./mvc_app
```

## Usage

- Upon running the application, users will be able to view the details of an NBA team retrieved from the database.
- Users can update the team name using the provided functionality.
- Updated team details can be viewed.

## Contributing

Contributions are welcome! If you find any bugs or have suggestions for improvements, feel free to open an issue or create a pull request.


## UML Diagram
![TeamView Class Diagram](https://www.planttext.com/api/plantuml/png/lLMxSi8m4Epr5IhDO7x0HOQyYZGK34cliG_mZ2mvrfc4oIJV7bcHP4i29XG9dNTFshtp7bugP1ts3IUav4mfkhgxtG1hw0UX-hUWg1zMh862AkngiRDmASKMEX1bJA14njTm0D5hgXPeSNXlGIXGKqm0FebIDhRGe7Fd88kLynEYUQgNXr9vf3ApAZl0ZHN8Pa4FXhltKgVOpKHqu5rBXdoqyWcnSaP2HasSn3thmeEigx5ouYkTHb8T-4mcbPHxvy44axAnZsYqGM5LgvQpO-RGJvUmeTcN6jvinEOUoDox-KgGLhTdflG0o6gk_YeSiLUTHJrnx2JdqFcTQ6G5l711jU11-oryBvCmZnTauS4yEkFR3myvU0jOxlzl1jU6yz92NHVSo-jtPQmlRkilCtzsgN-z3EUtlsyhXl0JzZ5zxbzuiRY9CgZJ8x7U7ccvPs87YeJqSC0lM46VpUqcPyJ3zb8ZKD0rlFQWaEf2HiWIH3Ly3Ru1)
