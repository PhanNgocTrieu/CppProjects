#include "FunctionalController.h"

namespace tpn {
    FunctionalController::FunctionalController() 
    : m_calculator{CGPA_CALCULATOR::getInstance()}
    {}

    FunctionalController::~FunctionalController() {
        m_info.clear();
    }

    void FunctionalController::addCreditInfor(int creHour, const std::string& gradeTxt) {
        m_info.addAnCredit(creHour, gradeTxt);
    }

    void FunctionalController::showCredit() {
        m_info.showCredits();
    }

    CGPA_CALCULATOR::GPA FunctionalController::getCGPAResult() {
        if (m_calculator == nullptr) {
            std::cout << "Calculator did not initialize yet" << std::endl;
            return CGPA_CALCULATOR::GPA{};
        }
        return m_calculator->getInstance()->calculateGPA(m_info);
    }
};