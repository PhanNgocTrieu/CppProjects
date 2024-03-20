#include <iostream>
#include "FunctionalController.h"
int main() {
    tpn::FunctionalController controller;
    controller.addCreditInfor(2, "B+");
    controller.addCreditInfor(2, "B+");
    controller.addCreditInfor(2, "A-");
    controller.addCreditInfor(3, "B");
    controller.addCreditInfor(4, "B-");
    controller.addCreditInfor(1, "B");
    controller.addCreditInfor(1, "F");
    controller.showCredit();
    auto res = controller.getCGPAResult();
    /* To testing the result, we can check as this link: https://www.umt.edu.pk/oce/CGPA-Calculator.aspx */
    std::cout << "Total Credit in a semester: " << res.creditNum << std::endl;
    std::cout << "Semester Grade Point Average(SGPA): " << res.SGPA << std::endl;
    std::cout << "Total Grade Point in a semester: " << res.sumGraPoint << std::endl;
    return 0;
}