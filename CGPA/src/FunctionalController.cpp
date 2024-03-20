#include "FunctionalController.h"
#if 0
#define DEBUG_LOG
#endif
namespace tpn {
    FunctionalController::FunctionalController() 
    : m_calculator{CGPA_CALCULATOR::getInstance()}
    {}
    
    FunctionalController* FunctionalController::getIntance() {
        static FunctionalController ins;
        return &ins;
    }

    FunctionalController::~FunctionalController() {
        m_info.clear();
    }
    
    void FunctionalController::addCreditFromFile(const std::string& file_path) {
        std::ifstream fin;
        // Open file with read mode
        fin.open(file_path);

        if (fin.is_open()) {
            std::string line;
            while (std::getline(fin, line)) {
                auto _pos = line.find(',');
#ifdef DEBUG_LOG
                std::cout << " first: " << std::string(line.begin(), line.begin() + _pos) << std::endl;
                std::cout << " second: " << std::string(line.begin() + _pos + 1, line.begin() + line.length() - _pos + 1) << std::endl;
#endif
                this->addCreditInfor(
                    atoi(std::string(line.begin(), line.begin() + _pos).c_str()),
                    std::string(line.begin() + _pos + 1, line.begin() + line.length() - _pos + 1)
                );
            }
        }
        else {
            std::cout << "open file failed" << std::endl;
        }
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