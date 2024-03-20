#ifndef CGPA_CALCULATOR_H
#define CGPA_CALCULATOR_H
#include "cgpaInfor.h"
namespace tpn {
    class CGPA_CALCULATOR {
        public:
            struct GPA {
                double SGPA{0.0};
                double sumGraPoint{0.0};
                int creditNum{0};
            };
            
            static CGPA_CALCULATOR* getInstance();
            GPA calculateGPA(const CGPA_INFO& object);
        protected:
            CGPA_CALCULATOR() {}
    };
}

#endif // CGPA_CALCULATOR_H