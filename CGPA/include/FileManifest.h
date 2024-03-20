#ifndef FILE_MANIFEST_H
#define FILE_MANIFEST_H
#include <iostream>
namespace tpn {
    class FileController {
        public:
            static FileController* getInstance();
            
        protected:
            FileController();
    };
}
#endif /* FILE_MANIFEST_H */