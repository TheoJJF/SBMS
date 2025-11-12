#include "../include/csr.h"

SBMS::MatrixCSR::MatrixCSR(unsigned int r, unsigned int c, unsigned int nnz)
{
    n = r, m = c;
    std::vector<double> value(nnz);
    std::vector<unsigned int> colIdx(nnz);
    std::vector<unsigned int> rowIdx(r + 1);
}