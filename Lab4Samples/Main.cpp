#include "Controller.h";

int main() {
    auto controller = Controller();
    controller.Run();

    //auto results = connection->execute("SELECT * FROM table WHERE user.Name > 123 ... ORDER BY ...");
    //auto results = from table where user.Name > "123" orderby ... select user;
    //auto results = table
    //    .Where((User & user) { user.Name > "123" })
    //    .OrderBy((User & user) { user.Name > "123" })
    //    .Select((User & user) { return user });
}