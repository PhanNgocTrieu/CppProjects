#include "cgpaInfor.h"
#include <unordered_map>
namespace tpn {
    CGPA_INFO::CGPA_INFO() {}

    CGPA_INFO::~CGPA_INFO() {}

    std::vector<CGPA_INFO::CreditInfor> CGPA_INFO::getCreditInfors() const {
        return m_gpaInfors;
    }

    void CGPA_INFO::addAnCredit(int creHour, const std::string& gradeTxt) {
        static std::unordered_map<std::string, double> gradeTxtMap = {
            {"A+", 4},
            {"A",  4},
            {"A-", 3.7},
            {"B+", 3.3},
            {"B",  3},
            {"B-", 2.7},
            {"C+", 2.3},
            {"C",  2},
            {"C-", 1.7},
            {"D+", 1.3},
            {"D",  1},
            {"F",  0},
            {"W",  -1},
            {"NC", -1},
            {"P",  -1},
        };

        if (gradeTxtMap.find(gradeTxt) != gradeTxtMap.end()) {
            CreditInfor _info = {
                .creditHours = creHour,
                .gradeTxt = gradeTxtMap[gradeTxt]
            };
            m_gpaInfors.push_back(_info);
        } else {
            std::cout << "could not find the key in map with " << gradeTxt << std::endl;
        }
    }

    void CGPA_INFO::removeCredit(int index) {
        if (index < 0 || index > static_cast<int>(m_gpaInfors.size())) {
            return;
        }
        m_gpaInfors.erase(m_gpaInfors.begin() + index);
    }

    void CGPA_INFO::clear() {
        m_gpaInfors.clear();
    }

    void CGPA_INFO::showCredits() {
        std::cout << "Credit\t\tGrade" << std::endl;
        for (auto elem : m_gpaInfors) {
            std::cout << elem.creditHours << "\t\t" << elem.gradeTxt << std::endl;
        }
    }
};