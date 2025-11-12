#ifndef CSR_H
#define CSR_H

#include <vector>

namespace SBMS
{
    struct MatrixCSR
    {
        MatrixCSR(unsigned int r, unsigned int c, unsigned int nnz);

        unsigned int n, m;
        std::vector<double> value;
        std::vector<unsigned int> colIdx;
        std::vector<unsigned int> rowIdx;
    };
}

#endif