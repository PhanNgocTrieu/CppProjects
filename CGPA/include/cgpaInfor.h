#ifndef CGPA_INFO_H
#define CGPA_INFO_H
#include <iostream>
#include <vector>
namespace tpn {
    class CGPA_INFO {
        public:
            struct CreditInfor {
                int creditHours;
                double gradeTxt;
            };
            
        public:
            CGPA_INFO();
            ~CGPA_INFO();
            std::vector<CreditInfor> getCreditInfors() const;
            void addAnCredit(int creHour, const std::string& gradeTxt);
            void removeCredit(int index);
            void clear();
            void showCredits();
        protected:
            std::vector<CreditInfor> m_gpaInfors;
    };
};

#endif /* CGPA_INFO_H */