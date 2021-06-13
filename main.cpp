
#include "program.h"

#include "manager.h"


using namespace std;

int main(int argc, char **argv) {
    manager app = manager("My Program!", 800, 600);
    app.myloop();
}