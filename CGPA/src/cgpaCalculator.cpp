#include "cgpaCalculator.h"
namespace tpn {
    CGPA_CALCULATOR* CGPA_CALCULATOR::getInstance() {
        static CGPA_CALCULATOR _ins;
        return &_ins;
    }

    CGPA_CALCULATOR::GPA CGPA_CALCULATOR::calculateGPA(const CGPA_INFO& object) {
        CGPA_CALCULATOR::GPA gpa;
        for (auto elem : object.getCreditInfors()) {
            gpa.creditNum += elem.creditHours;
            gpa.sumGraPoint += elem.gradeTxt * elem.creditHours;
        }
        gpa.SGPA = static_cast<double>(gpa.sumGraPoint / (double)gpa.creditNum);
        return gpa;
    }
};