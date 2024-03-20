#include <iostream>
#include <fstream>
#include "FunctionalController.h"

int main() {
    tpn::FunctionalController* controller = tpn::FunctionalController::getIntance();
    controller->addCreditFromFile("./data/input.txt");
    controller->showCredit();
    auto res = controller->getCGPAResult();
    // To testing the result, we can check as this link: https://www.umt.edu.pk/oce/CGPA-Calculator.aspx 
    std::cout << "Total Credit in a semester: " << res.creditNum << std::endl;
    std::cout << "Semester Grade Point Average(SGPA): " << res.SGPA << std::endl;
    std::cout << "Total Grade Point in a semester: " << res.sumGraPoint << std::endl;
    return 0;
}