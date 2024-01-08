#include<bits/stdc++.h>

using namepsace std;

class Polynomial
{
public:
    int *degCoeff;
    int capacity;

    // Default Constructor
    Polynomial()
    {
        capacity = 6;
        degCoeff = new int[capacity];
        for (int i = 0; i < capacity; i++)
        {
            degCoeff[i] = 0;
        }
    }

    // Copy Constructor
    Polynomial(Polynomial const &p)
    {
        capacity = p.capacity;
        degCoeff = new int[p.capacity];
        for (int i = 0; i < p.capacity; i++)
        {
            degCoeff[i] = p.degCoeff[i];
        }
    }

    // Copy Assignment Operator
    void operator=(Polynomial const &p)
    {
        capacity = p.capacity;
        degCoeff = new int[p.capacity];
        for (int i = 0; i < p.capacity; i++)
        {
            degCoeff[i] = p.degCoeff[i];
        }
    }

    // Print
    void print()
    {
        for (int i = 0; i < capacity; i++)
        {
            if (degCoeff[i] != 0)
            {
                cout << degCoeff[i] << "x" << i << " ";
            }
        }
        cout << endl;
    }

    // setCoefficient
    void setCoefficient(int deg, int coeff)
    {
        if (deg < capacity)
        {
            degCoeff[deg] = coeff;
        }

        else
        {

            int oldCapacity = capacity;
            while (capacity <= deg)
            {
                capacity *= 2;
            }

            int *temp = new int[capacity];

            for (int i = 0; i < capacity; i++)
            {
                if (i < oldCapacity)
                {
                    temp[i] = degCoeff[i];
                }
                else
                {
                    temp[i] = 0;
                }
            }
            delete[] degCoeff;
            degCoeff = temp;
            degCoeff[deg] = coeff;
        }
    }

    // Additition
    Polynomial operator+(Polynomial const &p)
    {
        Polynomial pnew;
        int i = 0, j = 0, k = 0;
        while (i < capacity and j < p.capacity)
        {
            int newCoeff = degCoeff[i] + p.degCoeff[j];
            pnew.setCoefficient(k, newCoeff);
            i++;
            j++;
            k++;
        }

        while (i < capacity)
        {
            pnew.setCoefficient(k, degCoeff[i]);
            i++;
            k++;
        }

        while (j < p.capacity)
        {
            pnew.setCoefficient(k, p.degCoeff[j]);
            j++;
            k++;
        }
        return pnew;
    }

    Polynomial operator-(Polynomial const &p)
    {
        Polynomial pnew;

        int i = 0, j = 0, k = 0;
        while (i < capacity and j < p.capacity)
        {
            int newCoeff = degCoeff[i] - p.degCoeff[j];
            pnew.setCoefficient(k, newCoeff);
            i++;
            j++;
            k++;
        }

        while (i < capacity)
        {
            pnew.setCoefficient(k, degCoeff[i]);
            i++;
            k++;
        }

        while (j < p.capacity)
        {
            pnew.setCoefficient(k, -p.degCoeff[j]);
            j++;
            k++;
        }
        return pnew;
    }

    Polynomial operator*(Polynomial const &p)
    {
        Polynomial pnew;
        pnew.capacity = capacity + p.capacity - 1;
        pnew.degCoeff = new int[pnew.capacity];
        for (int i = 0; i < pnew.capacity; i++)
        {
            pnew.degCoeff[i] = 0;
        }
        for (int i = 0; i < capacity; i++)
        {
            for (int j = 0; j < p.capacity; j++)
            {
                int coeff = degCoeff[i] * p.degCoeff[j];
                pnew.degCoeff[i + j] = pnew.degCoeff[i + j] + coeff;
            }
        }
        return pnew;
    }
};