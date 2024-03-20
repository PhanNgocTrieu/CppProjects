#ifndef FUNCTIONAL_CONTROLLER_H
#define FUNCTIONAL_CONTROLLER_H

#include "cgpaInfor.h"
#include "cgpaCalculator.h"
#include <fstream>

namespace tpn {
    class FunctionalController {
        public:
            static FunctionalController* getIntance();
            ~FunctionalController();
            void addCreditFromFile(const std::string& file_path);
            void addCreditInfor(int creHour, const std::string& gradeTxt);
            void showCredit();
            CGPA_CALCULATOR::GPA getCGPAResult();

        private:
            FunctionalController();
            CGPA_CALCULATOR* m_calculator = nullptr; 
            CGPA_INFO m_info; 
    };
};

#endif /* FUNCTIONAL_CONTROLLER_H */