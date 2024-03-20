#ifndef FUNCTIONAL_CONTROLLER_H
#define FUNCTIONAL_CONTROLLER_H

#include "cgpaInfor.h"
#include "cgpaCalculator.h"

namespace tpn {
    class FunctionalController {
        public:
            FunctionalController();
            ~FunctionalController();
            void addCreditInfor(int creHour, const std::string& gradeTxt);
            void showCredit();
            CGPA_CALCULATOR::GPA getCGPAResult();

        private:
            CGPA_CALCULATOR* m_calculator = nullptr; 
            CGPA_INFO m_info; 
    };
};

#endif /* FUNCTIONAL_CONTROLLER_H */