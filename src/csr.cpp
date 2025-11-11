#include "../include/csr.h"

SBMS::MatrixCSR::MatrixCSR(unsigned int const &size, unsigned int const &nnz)
{
    n = size;
    std::vector<double> value(nnz);
    std::vector<unsigned int> colIdx(nnz);
    std::vector<unsigned int> rowIdx(size + 1);
}