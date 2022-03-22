#include<iostream>
#include<cmath>
using namespace std;

float n_mean(float const psi[], float const pdf[], float const dv, unsigned size)
{
    float sum = 0.f;
    for (unsigned idx = 0; idx != size; ++idx)
        sum += psi[idx] * pdf[idx];
    return dv * sum;
}

float mean_closest(float const psi[], float const pdf[], float const dv, unsigned size)
{
    if (size == 2)
        return (psi[0] * pdf[0] + psi[1] * pdf[1]) * dv;
    if (size == 1)
        return psi[0] * pdf[0] * dv;
    unsigned size1 = size/2;
    unsigned size2 = size - size1;
    float psi1 = new float[size1];
    float psi2 = new float[size2];
    unsigned i;
    for(i=0; i<size1; i++)
        psi1[i] = psi[i];
    for(i=0; i<size2; i++)
        psi2[i] = psi[size1 + i];
    float pdf1 = new float[size1];
    float pdf2 = new float[size2];
    for(i=0; i<size1; i++)
        pdf1[i] = pdf[i];
    for(i=0; i<size2; i++)
        pdf2[i] = pdf[size1 + i];

    ans = (mean_recursive(psi1, pdf1, dv, size1) + mean_recursive(psi2, pdf2, dv, size2))


    return ans;
}

float mean_recursive(float const psi[], float const pdf[], float const dv, unsigned size)
{
    if (size == 2)
        return (psi[0] * pdf[0] + psi[1] * pdf[1]) * dv;
    if (size == 1)
        return psi[0] * pdf[0] * dv;
    unsigned size1 = size/2;
    unsigned size2 = size - size1;
    float *psi1, *psi2, *pdf1, *pdf2;
    psi1 = new float[size1];
    psi2 = new float[size2];
    unsigned i;
    for(i=0; i<size1; i++)
        *psi1[i] = psi[i];
    for(i=0; i<size2; i++)
        *psi2[i] = psi[size1 + i];
    pdf1 = new float[size1];
    pdf2 = new float[size2];
    for(i=0; i<size1; i++)
        *pdf1[i] = pdf[i];
    for(i=0; i<size2; i++)
        *pdf2[i] = pdf[size1 + i];

    ans = (mean_recursive(psi1, pdf1, dv, size1) + mean_recursive(psi2, pdf2, dv, size2))
    delete [] psi1;
    delete [] psi2;
    delete [] pdf1;
    delete [] pdf2;

    return ans;
}

float maxwell(float v, float T)
{
    float ans = 1.f / sqrt(T * numbers::pi) * exp(-v*v/T);
    return ans;
}

int main()
{
    float psi[10000];
    float dv = 1e-4;


    return 0;
}
