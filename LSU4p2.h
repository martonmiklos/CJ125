//#####LSU4.2

#include <stdint.h>

typedef struct {
    int16_t slope;
    int16_t offset;
} Compensation_t;


typedef struct {
    int16_t UaCorrMin;
    int16_t UaCorrMax;
    Compensation_t compensation;
} CompensationLUTItem_t;

// LUT for lambda between 0.7 and 1.3
CompensationLUTItem_t lambdaLUTA[] = 
{
    {
        90, INT16_MAX, {35, 102},
    },
    {
        80, 90, {32, 111},
    },
    {
        60, 80, {29, 119},
    },
    {
        30, 60, {27, 123},
    },
    {
        0, 30, {26, 124},
    },
    {
        -10, 0, {32, 125},
    },
    {
        -30, -10, {26, 123},
    },
    {
        -50, -30, {22, 120},
    },
    {
        -70, -50, {19, 115},
    },
    {
        -80, -70, {16, 108},
    },
    {
        -120, -80, {18, 112},
    },
    {
        -140, -120, {16, 106},
    },
    {
        -160, -140, {18, 113},
    },
    {
        INT16_MIN, -160, {14, 97},
    },
};

//#####Lambda = 1,0...2,0
// LUT for lambda between 1 and 2
CompensationLUTItem_t lambdaLUTB[] = 
{
    {
        240, INT16_MAX, {45, -144},
    },
    {
        220, 240, {43, -132},
    },    
    {
        200, 220, {38, -99},
    },    
    {
        180, 200, {35, -79},
    },
    {
        160, 180, {30, -52},
    },
    {
        150, 160, {29, -44},
    },
    {
        130, 150, {26, -29},
    },
    {
        100, 130, {22, -16},
    },
    {
        90, 100, {19, -6},
    },
    {
        50, 90, {18, -2},
    },
    {
        0, 50, {15, 2},
    },
    {
        INT16_MIN, 0, {0, 1},
    },
};

Compensation_t* getCompensation(int16_t Ua_corr)
{

    for (uint8_t i = 0; i<sizeof(lambdaLUTA) / sizeof(CompensationLUTItem_t); i++) {
        if (lambdaLUTA[i].UaCorrMin <= Ua_corr && Ua_corr < lambdaLUTA[i].UaCorrMax ) {
            return &lambdaLUTA[i].compensation;
        }
    }
    // this should never happen
    return NULL;
}
