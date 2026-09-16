#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 9 member(s).
class Calendar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDays@Calendar@@SAXHHHHAEAH00@Z
    static void AddDays(int, int, int, int, int &, int &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDays@Calendar@@SAXHHHAEAH0@Z
    static void AddDays(int, int, int, int &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DayOfWeek@Calendar@@SAHHHH@Z
    static int DayOfWeek(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FirstDayOfWeek@Calendar@@SAXHHAEAH0@Z
    static void FirstDayOfWeek(int, int, int &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Holiday@Calendar@@SAHHHHH@Z
    static int Holiday(int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InverseDayOfYear@Calendar@@SAXHHAEAH0@Z
    static void InverseDayOfYear(int, int, int &, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLeapYear@Calendar@@SA_NH@Z
    static bool IsLeapYear(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonthLength@Calendar@@SAHHH@Z
    static int MonthLength(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReInitialize@Calendar@@SAJXZ
    static long ReInitialize();
};
