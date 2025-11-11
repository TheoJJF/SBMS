#ifndef CSR_H
#define CSR_H

#include <vector>

namespace SBMS
{
    class MatrixCSR
    {
        public:
            MatrixCSR();
            MatrixCSR(unsigned int n, unsigned int nnz);

        private:
            unsigned int n;
            std::vector<double> value;
            std::vector<unsigned int> colIdx;
            std::vector<unsigned int> rowIdx;
    };
}

#endif