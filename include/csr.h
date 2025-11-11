#ifndef CSR_H
#define CSR_H

#include <vector>

namespace SBMS
{
    struct MatrixCSR
    {
        MatrixCSR(unsigned int size, unsigned int nnz);

        unsigned int n;
        std::vector<double> value;
        std::vector<unsigned int> colIdx;
        std::vector<unsigned int> rowIdx;
    };
}

#endif